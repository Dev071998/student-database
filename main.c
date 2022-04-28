#include "dev.h"
int main()
{
	st *headptr=0;
	int op,t_node=0;
	char cont;
	while(1)
	{
		printf("\033[34;1m\t\t\t\tWELCOME TO THE ST DATABSE\n");
		printf("\033[34;1mChoose the option:\n");
		printf("\033[34;1m1)Add new student\t2)Print Data Base\t3)count Data Base\n");
		printf("\033[34;1m4)save data into file\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : add_node(&headptr);break;
			case 2 : print_node(headptr);break;
			case 3 : t_node=count_node(headptr);break;
			case 4 : save_file(headptr);break;
		}
	}
}