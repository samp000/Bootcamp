/*
 * 	9  64  7
 * 	36 5  16
 * 	3  4  1
 * 	
 */

	#include<stdio.h>

	void main() {
	
		int row;

		printf("Enter rows:");
		scanf("%d",&row);

		int num = row*row;

		for(int i=1;i<=row;i++) {
		
			for(int j=1;j<=row;j++) {
			
				if(num%2==0)
					printf("%-4d ",num*num);
				else
					printf("%-4d ",num);
			
				num--;
			}

			printf("\n");
		}
	}
