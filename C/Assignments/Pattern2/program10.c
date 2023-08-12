/*
 *	Program 10:
 *
 * 	D4  C3  B2  A1
 * 	A1  B2  C3  D4
 * 	D4  C3  B2  A1
 * 	A1  B2  C3  D4
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		char ch,k;

		for(int i=1;i<=rows;i++) {		

			if(i%2!=0) {
				ch='A'+rows-1;
				k = rows;
			}else {
				ch='A';
				k = 1;
			}

			for(int j=rows;j>=1;j--) {
		
					if(i%2!=0)	
						printf("%c%d  ",ch--,k--);
					else
						printf("%c%d  ",ch++,k++);
			}

			printf("\n");
		}

	}
