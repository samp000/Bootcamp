/*
 *	Program 5:
 *
 *	D  C  B  A
 *	e  d  c  b
 *	F  E  D  C
 *	g  f  e  d
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {

			char ch = 'A'+rows+i-2;
			
			for(int j=1;j<=rows;j++) {
			
				if(i%2!=0)
					printf("%c  ",ch--);
				else
					printf("%c  ",32+ch--);

			}
			printf("\n");
		}

	}
