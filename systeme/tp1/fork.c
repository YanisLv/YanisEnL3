#include <stdio.h>
#include <unistd.h>
#include<fcntl.h>
//1)
/*
int main(){
	int x = 100;
	//printf("Avant fork : x = %d\n", x);
	fork();
	printf("Après fork : x = %d\n", x);
	return 0;
}
*/
//2)
int main(){
	int a = open("fork.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	printf("descripteur = %d \n", a);
	pid_t pid = fork();
	 if (pid == 0) {
        // Processus enfant
        write(a);
    } else {
        // Processus parent
        write(a, "PARENT\n", 7);
    }


}