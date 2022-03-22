#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee {
	int empid;
	char empname[20];	
};

void main() {
	  struct employee *sptr = (struct employee*)malloc(sizeof(int));              //same like      int *iptr = (int*) malloc(sizeof(int));

	  sptr->empid = 7;
	  strcpy(sptr->empname,"Dhananjay");                     //(*sptr).empname kel tri chalt
	  printf("%d\n",(*sptr).empid);
	  printf("%s\n",sptr->empname);
}
