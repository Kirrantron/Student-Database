#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void load_file(struct st **head)
{
    FILE *fp;
    struct st temp;
    struct st *newnode;
    struct st *last;
    fp = fopen("student.dat","rb");
    if(fp == NULL)
        return;
    while(fread(&temp,sizeof(struct st),1,fp))
    {
        newnode = (struct st *)malloc(sizeof(struct st));

        *newnode = temp;
        newnode->next = NULL;

        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            last = *head;

            while(last->next)
                last = last->next;
            last->next = newnode;
        }
    }
    fclose(fp);
}
