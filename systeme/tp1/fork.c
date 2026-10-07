#include <stdio.h>
#include <unistd.h>
#include<fcntl.h>
#include<sys/wait.h>
//1
/*
int main(){
	int x = 100;
	printf("Avant fork : x = %d\n", x);
	int pid = fork();
	if(pid==0){
		x = 200;
		printf("ENFANT  = %d\n", x);
	}
	else{
		x = 300;
		printf("PARENT= %d\n", x);
	}		
	return 0;
}
*/

//2)
/*
int main(){
	int a = open("fork.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	printf("descripteur avant forkage= %d \n", a);
	pid_t pid = fork();
	 if (pid == 0) {
        // Processus enfant
    	write(a, "ENFANT\n",7);
		printf("Descripteur chez l'enfant = %d\n", a);

    } else {
        // Processus parent
        write(a, "PARENT\n", 7);
		printf("Descripteur chez le parent = %d\n", a);
    }
}

*/
//3 
/*
int main(){
	char *a = "hello";
	char *b = "goodbye";
	pid_t pid = fork();
	if(pid == 0 ){	//enfant
		printf("%s\n", a);
	}
	else{		//parent
		//wait(NULL);
		printf("%s\n",b);
	}
	return 0;
}
/*LA REPONSE EST NON*/

//4)

/*
int main(){
	//int n = 5;
	char *env[] = {
		"ls",
		"-l",
		NULL
	};

execle("/bin/ls", "ls", "-l", NULL, env);
	pid_t pid = fork();
	//enfant
	if(pid == 0){
		execv("/bin/ls",env);
	}
	else{
		wait(NULL);
		printf("Le fils a terminé.\n");
	}
	return 0;
}
/*
il existe autant de variantes de exec() car cela dépend de comment on souhaite
afficher les éléments. l indique que les arguments sont fournis sous forme de liste,
v sous forme de tableau, e en envrionnement personnalité. Mais remplacent toutes le 
processus courant par le prog indiqué par exec();
*/


//5
/*

int main(){
	char *a = "process enfant";
	char *b = "process parent";
	int status;
	pid_t pid = fork();

	if(pid == 0){
		//wait(NULL);
		printf("%s\n",a);
		printf("enfant termine\n");
	}
	else{
		printf("%s\n",b);
		pid_t res = wait(&status);
		printf("fils a fini\n");
		//printf("pid du process wait est %d et l'enfant est %d\n",res,pid);
	}
	
	return 0;
}	// d'abord le programme commence a exécuter le process parent puis vient wait()
	// qui va exécuter le process enfant et qui va attendre que celui-ci termine avant 
	// de finir le process parent OR s'il y avait pas wait() le process parent se serait
	// exécuté entierement avant le process enfant
*/

//6)
/*
int main(){
	char *a = "process enfant";
	char *b = "process parent";
	int status;
	pid_t pid = fork();

	if(pid == 0){
		//wait(NULL);
		printf("%s\n",a);
		printf("enfant termine\n");
	}
	else{
		printf("%s\n",b);
		pid_t res = waitpid(pid, &status,0);
		printf("fils a fini\n");
		//printf("pid du process wait est %d et l'enfant est %d\n",res,pid);
	}
	
	return 0;
	// Waitpid() est utile lorsqu'un père a plusieurs processus enfant et donc
	// permet de choisir quel processus veut-on attendre jusqu'a qu'il finisse pour
	// reprendre le processus initial (en l'occurrence ici, le père)
	// waitpid(PID DU PROCESS QU'ON VEUT ATTENDRE, ...)
}	
*/
//7)
/*
int main(){

	pid_t pid = fork();
	int status;
	if(pid == 0){
		close(STDOUT_FILENO);
		printf("fils \n");
	}
	else{
		//wait(&status);
		printf("pere\n");
	}

	return 0;
}	// l'enfant n'affiche rien, le père si
*/

//8


int main(){
	pid_t pid1 =fork();
	pid_t pid2=fork();
	int fd[2];
	if(pid1 == 0){
		close(fd[1]);
		
	}
	return 0;
}