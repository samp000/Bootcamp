/*
 *	Program 7:
 *	
 *	1   2   3   4
 *	25  36  49  64
 *	9   10  11  12
 *	169 196 225 256
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {
		

			for(int j=1;j<=rows;j++) {
			
				if(i%2!=0) {
					printf("%-5d",num);
				}else {
					printf("%-5d",num*num);
				}
				num++;
			}
			printf("\n");
		}

	}
