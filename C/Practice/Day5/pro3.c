/*
 *      d
 *    c c
 *  b b b
 *a a a a

 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		char ch='a'+rows-1;

		for(int i=1;i<=rows;i++) {
		

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				printf("%-2c",ch);
			}

			ch--;

			printf("\n");
		}
	}
 
