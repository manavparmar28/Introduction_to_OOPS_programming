#include<stdio.h>
#include<string.h>

char task[5][100];
int taskStatus[5]={0};
int taskCount=0;

void markTaskDone(int index){
    if(index>=0 && index<taskCount)
    {
        taskStatus[index]=1;
    }
}

int main(){

    int choice;

    printf("----Enter Tasks----\n");

    for(int i=0;i<5;i++)
    {
        printf("Enter task %d: ",i+1);
        fgets(task[i],100,stdin);

        task[i][strcspn(task[i],"\n")]= '\0';

        taskCount++;
    }

    printf("Enter your choice:");
    scanf("%d",&choice);

    markTaskDone(choice-1);

    printf("\n----All Tasks----\n");

    for(int i=0;i<taskCount;i++)
    {
        if(taskStatus[i]==1)
        {
            printf("Task %d: %s - DONE\n",i+1,task[i]);
        }
        else
        {
        printf("Task %d: %s - NOT DONE\n",i+1,task[i]);
        }
    }

    return 0;
}
