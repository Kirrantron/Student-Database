#include<stdio.h>
#include "student.h"

void menu();

int main()
{
 char op;
 struct st *head=0;
 load_file(&head);
do
{
    menu();

    printf("Enter your choice : ");
    scanf(" %c",&op);

    switch(op)
    {
        case 'A':
        case 'a':
            add_stud(&head);
            break;

        case 'D':
        case 'd':
            del_stud(&head);
            break;

        case 'E':
        case 'e':return 0;

        case 'S':
        case 's': show_stud(head);break;

        case 'V':
        case 'v': save_file(head);break;

       /* case 'M':
        case 'm': mod_stud(head);break;*/

        case 'L':
        case 'l': delete_all(&head);break;

        case 'T':
        case 't': sort_stud(head);break;

        case 'R':
        case 'r': reverse_list(&head);break;

        default:
            printf("Wrong option\n");
    }

}while(op!='E' && op!='e');
}

void menu()
{
    printf("               **** STUDENT RECORD MENU ****\n\n");
    printf("               A/a : Add New Record\n");
    printf("               D/d : Delete A Record\n");
    printf("               S/s : Show the List\n");
  //  printf("               M/m : Modify A Record\n");
    printf("               V/v : Save\n");
    printf("               E/e : Exit\n");
    printf("               T/t : Sort the List\n");
    printf("               L/l : Delete All Records\n");
    printf("               R/r : Reverse The List\n");
}
