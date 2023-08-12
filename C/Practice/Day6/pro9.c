/*
 * 	a B c D
 * 	  e F g
 * 	    H i
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

			for(int j=rows;j>=i;j--) {

				if(flg==1) {
					printf("%c ",ch);
					flg=0;
				}else {
					printf("%c ",ch-32);
					flg=1;
				}
				ch++;
			}

			printf("\n");
		}
	}
