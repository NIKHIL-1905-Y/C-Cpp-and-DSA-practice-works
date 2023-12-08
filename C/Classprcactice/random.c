#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short i, j, n;

    printf("Enter the order  of  square the matrix:\n ");
    scanf("%hu", &n);

    for(i = 0; i < n;i++) {
    	for(j = 0; j < n;j++) {

    		printf("%d ", rand()%15);
    	}
    	printf("\n");
    }

	return 0;
}