/*
 *	Program 2:
 *
 * 	3  2  1
 * 	c  b  a
 * 	3  2  1
 * 	c  b  a
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			char ch='c';

			for(int j=rows-1;j>=1;j--) {
			
				if(i%2==0)
					printf("%c  ",ch--);
				else
					printf("%d  ",j);
			}
			printf("\n");
		}

	}
