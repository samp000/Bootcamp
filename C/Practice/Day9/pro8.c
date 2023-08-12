/*
 * 	D
 * 	C D
 * 	B C D
 * 	A B C D
 * 	B C D
 * 	C D
 * 	D
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows,cols;
		printf("Enter Rows:");
		scanf("%d",&rows);

		char ch;

		for(int i=1;i<=2*rows-1;i++) {
				
			if(i<=rows) {
				cols = i;
				ch = 'A'+rows-i;
			}else {
				cols = 2*rows-i;
				ch = i-rows+'A';
			}

			for(int j=1;j<=cols;j++)
				printf("%c ",ch++);

			printf("\n");
		}
	}
