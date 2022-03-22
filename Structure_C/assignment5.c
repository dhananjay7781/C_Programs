#include <stdio.h>


struct person{
	int age;
	char name[30];
	char location[25];
	char car[20];
	double networth_million_dollers;
	char profession[25];
	float height_meter;

};
void main() {
	struct person mkbhd = {28,"Marques Brownlee","US","Tesla_Model_S-plaid",12.5,"Youtuber-FrisbeePlayer",1.9};
	struct person *mkb = &mkbhd; 
	printf("%d\n",mkb->age);
	printf("%s\n",(*mkb).name);
	printf("%s\n",mkbhd.location);
	printf("%s\n",mkbhd.car);
	printf("%lf\n",mkbhd.networth_million_dollers);
	printf("%s\n",mkbhd.profession);
	printf("%f\n",mkbhd.height_meter);
}
