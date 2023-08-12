/*
 * 		d
 * 	      C C C
 * 	    b b b b b
 * 	  A A A A A A A
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("  ");

			char ch = 'a'+rows-i;

			for(int j=1;j<=2*i-1;j++) {
		
				if(i%2!=0)
					printf("%c ",ch);
				else
					printf("%c ",ch-32);
			}

			printf("\n");
		}
	}
