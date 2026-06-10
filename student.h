struct st
{
 int roll;
 char name[20];
 int marks;
 struct st *next;
};

void add_stud(struct st **);
void del_stud(struct st **);
void show_stud(struct st *);
void mod_stud(struct st *);
void save_file(struct st *);
void load_file(struct st **);
void delete_all(struct st **);
void sort_stud(struct st *);
void reverse_list(struct st **);
