#include "dev.h"
//cout nodes
int count_node(st *ptr)
{
	static int c=0;
	if(ptr==0)
	{
		printf("\033[31;1m0");
		return 0;
	}
	while(ptr)
	{
		c++;

		ptr=ptr->next;
	}
	return c;
}