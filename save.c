#include<stdio.h>
#include "student.h"
void save_file(struct st *head)
{
    FILE *fp;
    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }
    while(head)
    {
        fwrite(head,sizeof(struct st),1,fp);
        head = head->next;
    }
    fclose(fp);
    printf("Records saved successfully\n");
}
