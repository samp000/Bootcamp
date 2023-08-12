/*
 * 	*
 * 	* *
 * 	* * *
 * 	* * * *
 * 	* * *
 * 	* *
 * 	*
 */
	

	#include<stdio.h>

	void main() {
	
		int rows,cols;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=2*rows-1;i++) {
		
			if(i<=rows)
				cols = i;
			else
				cols--;//cols = 2*rows-i

			for(int j=1;j<=cols;j++) {
			
				printf("* ");
			}

			printf("\n");
		}
	}
