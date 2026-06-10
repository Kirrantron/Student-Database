#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void delete_all(struct st **head)
{
    struct st *temp;

    if(*head == NULL)
    {
        printf("List is already empty\n");
        return;
    }

    while(*head)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    printf("All records deleted successfully\n");
}
