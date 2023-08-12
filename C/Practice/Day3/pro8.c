/*
 *
 * 	1
 * 	2  4
 * 	3  6  9
 * 	4  8  12  16
 *
 */

	
	#include<stdio.h>

	
	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			int num=i;
		
			for(int j=1;j<=i;j++) {
			
				printf("%d  ",num);
				num+=i;
			}

			printf("\n");
		}
	}
