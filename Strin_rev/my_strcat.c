#include <stdio.h>
#include <string.h>
char* mystrcat(char fstr1[],char* fstr2)
{
//	int cnt =0;
	while(*fstr1 != '\0')
       	{
	//	cnt++;
		fstr1++;
	}
//	printf("%d\n",cnt);
	while(*fstr2 != '\0') 
	{
		*fstr1 = *fstr2;
		fstr1++;
		fstr2++;
	}
		*fstr1 = '\0';
}
void main() {
	char *str1 = "Core2";
	char *str2 = "Web";
	mystrcat(str1,str2);
	printf("%s\n",str1);
}
