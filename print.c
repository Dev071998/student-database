#include "dev.h"
void print_node(st *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1mRecords not avilable\n");
		return;
	}
	while(ptr)
	{
		printf("\033[32m%d %s %s %d\n",ptr->rollno,ptr->name,ptr->addr,ptr->class);

		ptr=ptr->next;
	}
}