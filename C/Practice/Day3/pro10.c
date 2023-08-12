/*
 * 	10
 * 	I  H
 * 	7  6  5
 * 	D  C  B  A
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		int num=rows*2+2;
		char ch = 'A'+rows*2+1;
	
		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=i;j++) {
			
				if(i%2==0)
					printf("%-3c ",ch);
				else
					printf("%-3d ",num);
				
				num--;
				ch--;

			}

			printf("\n");
		}
	}
	
