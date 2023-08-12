/*
 *         1
 *      4  7
 * 10  13 16
 *
 *           1
 *        5  9
 *    13 17 21
 * 25 29 33 37
 * */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		int num=1;

		for(int i=1;i<=rows;i++) {
	

			for(int space=rows-1;space>=i;space--)
				printf("    ");

			for(int j=1;j<=i;j++) {
			
				printf("%-4d",num);
				num+=rows;
			}

			printf("\n");
		}
	}
 
