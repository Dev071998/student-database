#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
	int rollno;
	char name[30];
	char addr[50];
	int class;

	struct student *next;
}st;

void add_node(st **);
void print_node(st *);
int count_node(st *);
void save_file(st *);