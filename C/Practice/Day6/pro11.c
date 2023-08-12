/*
 * 	A b C d
 * 	  e G i
 * 	    K n
 * 	      q
 */


	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	 
		char ch = 'A';

		for(int i=1;i<=rows;i++) {

			for(int sp=1;sp<=i;sp++) 
				printf("  ");

			for(int j=i;j<=rows;j++) {

				if(j%2==0) {
					printf("%c ",ch+32);
				}else {
					printf("%c ",ch);
				}
					ch+=i;
			}

			printf("\n");
		}
	}
