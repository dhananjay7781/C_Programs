#include <stdio.h>

void main() {
	int arr [3] [3];                          //int arr[3] [] -> error yeto,,,,, int arr[][3] -> error yeto,,,,,,,,, int arr[][3] = {}; -> chalata asa initializeer list dyavi lagte

	printf("Enter the numbers\n");
	for (int i = 0; i<=2; i++){
		for(int j = 0; j<=2; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("-------------------------\n");
	for (int i = 0; i<=2; i++){
		for(int j = 0; j<=2; j++){
			printf("%d\n", arr[i][j]);
		}
	}
}
