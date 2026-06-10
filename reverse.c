#include<stdio.h>
#include "student.h"

void reverse_list(struct st **head)
{
    struct st *prev = NULL;
    struct st *curr = *head;
    struct st *next;

    if(*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;

    printf("List reversed successfully\n");
}
