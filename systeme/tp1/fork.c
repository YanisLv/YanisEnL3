#include <stdio.h>
#include <unistd.h>
#include<fcntl.h>
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

int main(){
	
}
