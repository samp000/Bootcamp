/*
 *	Program 2:
 *
 * 	1  2  3
 * 	a  b  c
 * 	1  2  3
 * 	a  b  c
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			char ch='a';

			for(int j=1;j<=rows;j++) {
			
				if(i%2==0)
					printf("%c  ",ch++);
				else
					printf("%d  ",j);
			}
			printf("\n");
		}

	}
