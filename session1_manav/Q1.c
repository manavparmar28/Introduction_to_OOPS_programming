#include<stdio.h>
#include<string.h>

char task[5][100];
int taskCount=0;

int main(){

    printf("----Enter Tasks----\n");

    for(int i=0;i<5;i++)
    {
        printf("Enter task %d: ",i+1);
        fgets(task[i],100,stdin);

        taskCount++;
    }

    printf("\n----All Tasks----\n");

    for(int i=0;i<taskCount;i++)
    {
        printf("Task %d: %s",i+1,task[i]);
    }

    return 0;
}
