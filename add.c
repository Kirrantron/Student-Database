#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void add_stud(struct st **ptr)
{
 static int s_no = 1;
 struct st *newnode = (struct st *)malloc(sizeof(struct st));
 newnode->roll=s_no++;
 newnode->next = 0;
 printf("enter name : ");
 scanf("%s",newnode->name);
 printf("enter marks : ");
 scanf("%d", &newnode->marks);
 if(*ptr==NULL)
 {
  *ptr=newnode;
 }

 else{
  struct st * last = *ptr;
  while(last->next!=0)
  {
   last=last->next;
  }
  last->next=newnode;
 }

}
