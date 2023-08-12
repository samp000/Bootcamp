/*
 *
 * 	D  D  D  D
 * 	C  C  C  C
 * 	B  B  B  B
 * 	A  A  A  A
 *
 */

	#include<stdio.h>

	void main() {
	
		int row;

		printf("Enter rows:");
		scanf("%d",&row);

		for(int i=1;i<=row;i++) {
		
			char ch = 'A'+row-i;

			for(int j=1;j<=row;j++) {
			
				printf("%c ",ch);
			}

			printf("\n");
		}
	}
