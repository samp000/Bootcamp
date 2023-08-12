/*
 * 	d  d  d  d
 * 	c  c  c  c
 * 	b  b  b  b
 * 	a  a  a  a
 */

	#include<stdio.h>

	void main() {
	
		int row;

		printf("Enter rows:");
		scanf("%d",&row);

		for(int i=1;i<=row;i++) {
		
			char ch = 'a'+row-i;

			for(int j=1;j<=row;j++) {
			
				printf("%c ",ch);
			}

			printf("\n");
		}
	}
