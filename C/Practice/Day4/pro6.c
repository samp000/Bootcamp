/*
 * 	a  b  c d
 * 	a  b  c
 * 	a  b
 * 	a
 *
 */

	#include<stdio.h>

	void main() {
		
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			char ch='a';

			for(int j=rows;j>=i;j--) {

				printf("%c  ",ch++);
			}

			printf("\n");
		}
	}
