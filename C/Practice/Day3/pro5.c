/*
 *
 * 	a
 * 	b  c
 * 	d  e  f
 * 	g  h  i  j
 *
 */

	
	#include<stdio.h>

	
	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		char ch='a';

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=i;j++) {
			
				printf("%c  ",ch++);
			}

			printf("\n");
		}
	}
