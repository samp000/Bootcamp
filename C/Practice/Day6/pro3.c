/*
 * 	d d d d
 * 	  c c c
 * 	    b b
 * 	      a
 *
 */

	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		char ch = 'a'+rows-1;
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<=i;sp++) 
				printf("  ");
		
			for(int j=rows;j>=i;j--) 
				printf("%c ",ch);

			ch--;

			printf("\n");	
		}

	}
