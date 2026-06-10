#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student.h"

void del_stud(struct st **ptr)
{
    char op;
    int del_roll;
    char del_name[20];
    struct st *temp;
    struct st *prev;
    if(*ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("\nDelete based on:\n");
    printf("R/r : Roll No\n");
    printf("N/n : Name\n");
    printf("\n");
    printf("Enter choice : ");
    scanf(" %c",&op);
    if(op=='R' || op=='r')
    {
        printf("Enter roll no : ");
        scanf("%d",&del_roll);
        temp = *ptr;
        prev = NULL;
        while(temp)
        {
            if(temp->roll == del_roll)
            {
                if(prev == NULL)
                    *ptr = temp->next;
                else
                    prev->next = temp->next;
                free(temp);
                printf("Record deleted successfully\n");
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Roll number not found\n");
    }
    else if(op=='N' || op=='n')
    {
        int found = 0;
        printf("Enter name : ");
        scanf("%s",del_name);
        temp = *ptr;
        printf("\nMatching records:\n");
        while(temp)
        {
            if(strcmp(temp->name,del_name)==0)
            {
                printf("Roll:%d  Name:%s  Marks:%d\n",
                       temp->roll,
                       temp->name,
                       temp->marks);
                found = 1;
            }
            temp = temp->next;
        }
        if(found == 0)
        {
            printf("Name not found\n");
            return;
        }
        printf("\nEnter roll number to delete : ");
        scanf("%d",&del_roll);
        temp = *ptr;
        prev = NULL;

        while(temp)
        {
            if(temp->roll == del_roll)
            {
                if(prev == NULL)
                    *ptr = temp->next;
                else
                    prev->next = temp->next;
                free(temp);
                printf("Record deleted successfully\n");
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Roll number not found\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}
