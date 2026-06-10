#include<stdio.h>
#include<string.h>
#include "student.h"

void sort_stud(struct st *head)
{
    char op;

    struct st *ptr1;
    struct st *ptr2;

    int temp_roll;
    int temp_marks;
    char temp_name[20];

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("\nSort Menu\n");
    printf("N/n : Sort By Name\n");
    printf("P/p : Sort By Percentage\n");

    printf("Enter choice : ");
    scanf(" %c",&op);

    /* SORT BY NAME */

    if(op=='N' || op=='n')
    {
        for(ptr1=head; ptr1; ptr1=ptr1->next)
        {
            for(ptr2=ptr1->next; ptr2; ptr2=ptr2->next)
            {
                if(strcmp(ptr1->name,ptr2->name) > 0)
                {
                    temp_roll = ptr1->roll;
                    ptr1->roll = ptr2->roll;
                    ptr2->roll = temp_roll;

                    temp_marks = ptr1->marks;
                    ptr1->marks = ptr2->marks;
                    ptr2->marks = temp_marks;

                    strcpy(temp_name,ptr1->name);
                    strcpy(ptr1->name,ptr2->name);
                    strcpy(ptr2->name,temp_name);
                }
            }
        }

        printf("Sorted by Name\n");
    }

    /* SORT BY MARKS */

    else if(op=='P' || op=='p')
    {
        for(ptr1=head; ptr1; ptr1=ptr1->next)
        {
            for(ptr2=ptr1->next; ptr2; ptr2=ptr2->next)
            {
                if(ptr1->marks > ptr2->marks)
                {
                    temp_roll = ptr1->roll;
                    ptr1->roll = ptr2->roll;
                    ptr2->roll = temp_roll;

                    temp_marks = ptr1->marks;
                    ptr1->marks = ptr2->marks;
                    ptr2->marks = temp_marks;

                    strcpy(temp_name,ptr1->name);
                    strcpy(ptr1->name,ptr2->name);
                    strcpy(ptr2->name,temp_name);
                }
            }
        }

        printf("Sorted by Percentage\n");
    }

    else
    {
        printf("Invalid Choice\n");
    }
}
