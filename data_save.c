#include "dev.h"
void save_file(st *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1mRecords not avilable\n");
		return;
	}
	FILE *fp=fopen("student.txt","w");
	while(ptr)
	{
		fprintf(fp,"\033[32m%d %s %s %d\n",ptr->rollno,ptr->name,ptr->addr,ptr->class);

		ptr=ptr->next;
	}
	printf("\033[32;1mDONE\n");
	fclose(fp);
}
