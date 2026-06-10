#include<stdio.h>
#include "student.h"

void show_stud(struct st *ptr)
{
    if(ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("\n------------------------------------------------------------------------------\n");
    printf("Roll\t\t\t\tName\t\t\t\tMarks\n");
    printf("------------------------------------------------------------------------------\n");

    while(ptr)
    {
        printf("%d\t\t\t\t%s      \t\t\t%d\n",ptr->roll,ptr->name,ptr->marks);

        ptr = ptr->next;
    }

    printf("------------------------------------------------------------------------------\n");
}
