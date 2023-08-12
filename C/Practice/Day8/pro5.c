/*
 * 	d d d d d d d
 * 	  c c c c c
 * 	    b b b
 * 	      a
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("  ");

			char ch = 'a'+rows-i;

			for(int j=1;j<=2*(rows-i)+1;j++)
				printf("%c ",ch);

			printf("\n");
		}
	}
