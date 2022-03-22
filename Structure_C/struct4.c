#include <stdio.h>

struct Company {
	char cname[20];
	char type[20];
	int noofemp;
	double reven;
}caps = {"Biencaps", "Service",25,100000.00};

void main() {
	struct Company persi = {"Persistent","Service",1000,20000000.756};
	
	struct Company *Bptr = &caps;
	struct Company *pptr = &persi;
	printf("%s\n",persi.cname);
	printf("%s\n",persi.type);
	printf("%d\n",persi.noofemp);
	printf("%lf\n",persi.reven); 

	printf("%s\n",Bptr->cname);
	printf("%s\n",(*Bptr).type);
	printf("%d\n",(*Bptr).noofemp);
	printf("%lf\n",Bptr->reven);

}
