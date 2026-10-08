#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
int main() {
    printf("pid = %d\n", getpid());
    fflush(stdout);
    /*
    if (argc != 3) {
        fprintf(stderr, "invalid number of arguments\n");
        return EXIT_FAILURE;
    }
    
    int numBytes = atoi(argv[1]) * 1024 * 1024;
    int duration = atoi(argv[2]);
    
    // char has a size of 1 byte
    char *arr = (char *) malloc(numBytes * sizeof(char));
    
    struct timeval start;
    gettimeofday(&start, NULL);
    
    struct timeval current = start;
    
    while (current.tv_sec - start.tv_sec < duration) {
        for (int i = 0; i < numBytes; i++) {
            arr[i] += 1;
        }
    
        gettimeofday(&current, NULL);
        printf("running...\n");
        
    }
    
    free(arr);
    */
    return EXIT_SUCCESS;
}