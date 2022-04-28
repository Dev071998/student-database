#include "dev.h"
void add_node(st **ptr)
{
	st *new,*last;
	new=(st*)malloc(sizeof(st));
	printf("\033[34;1mRoll number\t:");
	scanf("%d",&new->rollno);
	printf("\033[34;1m\nName\t\t:");
	scanf("%s",new->name);
	printf("\033[34;1mAddress\t\t:");
	scanf("%s",new->addr);
	printf("\033[34;1mClass\t\t:");
	scanf("%d",&new->class);

	if((*ptr==0) || (new->rollno < (*ptr)->rollno))
	{
		new->next = *ptr;
		*ptr = new;
	}
	else
	{
		last=*ptr;
		while((last->next != 0) && (new->rollno > last->next->rollno))
			last=last->next;
		new->next=last->next;
		last->next=new;
	}
}