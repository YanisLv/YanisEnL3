#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<stddef.h>

typedef struct job{
    int id;
    int arrival;
    int unblock;
    int exectime;
    float ioratio;
    struct job* next ;
}job;

typedef struct spec{
    int arrival;
    int exectime;
    float ioratio;
}spec;

spec specs[] = {
    {0, 10, 0.0},
    {0, 30, 0.7},
    {0, 20, 0.0},
    {40, 80, 0.4},
    {60, 30, 0.3},
    {120, 90, 0.3},
    {120, 40, 0.5},
    {140, 20, 0.2},
    {160, 10, 0.3},
    {180, 20, 0.3},
    {0, 0, 0} // dummy job
};

job *readyq = NULL;
job *blockedq = NULL;
job *doneq = NULL;

void init() {
    int i = 0;
    while (specs[i].exectime != 0) {
        job *new = (job *) malloc(sizeof(job));
        new->id = i + 1;
        new->arrival = specs[i].arrival;
        new->unblock = specs[i].arrival;
        new->exectime = specs[i].exectime;
        new->ioratio = specs[i].ioratio;
        block(new);
        i++;
    }
}