#include <stdio.h>

void main() {
		
	int job;
	printf("Tumhi sadhya kay krtay?\n");
	printf("Job krt asal tr enter 1 nsel krt tr enter 0\n");
	scanf("%d", &job);
	if (job == 1){
		printf("job ahe\n");
		int salary;
		printf("Enter 1 jar tumhala changla pagar ahe\n");
		scanf("%d", &salary);
		if (salary == 1){
			printf("job kr\n");
		}else{
			printf("Dusra job bgh\n");
		}
	}
	else {
		int ahe;
		printf("Job nhiy\n");
		printf("enter 1 jar dukan asel tr nhitr enter 2 jar sheti asel tr\n");
		scanf("%d", &ahe);
		if (ahe == 1){
			printf("Dukan sambhal mg ata....\n");
		}else{
			printf("sheti kr....\n");
		}
	}


}
