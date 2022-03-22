#include <stdio.h>
void main () {
	char ch;
	printf("Enter a Characater : \n");
	scanf("%c",&ch);
	printf("%d\n",ch);
		for(int i = 65; i <=90; i++){
		if(ch == i){
			printf("It is Upper cased alphabet\n");
		}
	}
		for(int i=97; i<=122;i++){
		if(ch==i){
			printf("It is Lower cased Alphabet\n");
		}
	}
	
}

/* programiz cha code
  char ch;
  printf("Enter :\n");
  scanf("%c",&c);
  if ((ch >= 'a' && c<= 'Z') || (c >= 'A' && c<='Z')){
  	printf("Alphabet\n");
  }
  else {
  	printf("Not alphabet\n");
  }
