/*
 *	D D D D
 *	  c c c
 *	    B B
 *	      a
 */

	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		char ch = 'A'+rows-1;
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<=i;sp++) 
				printf("  ");
		
			for(int j=1;j<=rows-i+1;j++)  {
			
				if(i%2!=0) {
					printf("%c ",ch);
				}else {
					printf("%c ",ch+32);
				}
			}

			ch--;


			printf("\n");	
		}

	}
