/*
 *	Program 7:
 *	
 *	1    2    9     4
 *	25   6    49    8
 *	81   10   121   12
 *	168  14   225   16
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {
		

			for(int j=1;j<=rows;j++) {
			
				if(j%2==0) {
					printf("%-5d",num);
				}else {
					printf("%-5d",num*num);
				}
				num++;
			}
			printf("\n");
		}

	}
