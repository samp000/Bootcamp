/*
 * 	a B c D
 * 	  E f G
 * 	    h I
 * 	      J
 *
 */

	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		char ch = 'a';
		int flg=1;
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<=i;sp++) 
				printf("  ");
		
			for(int j=i;j<=rows;j++)  {
			
				if(j%2!=0) {
					printf("%c ",ch);
				}else {
					printf("%c ",ch-32);
				}
				ch++;
			}


			printf("\n");	
		}

	}
