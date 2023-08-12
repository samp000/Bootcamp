
/*
 * 	_ _ _ _
 * 	_ _ _
 * 	_ _
 * 	_
 *
 *
 */

	#include<stdio.h>

	void main() {
	
		int row;
		printf("Enter number of rows:");
		scanf("%d",&row);

		for(int i=1;i<=row;i++) {
		
			for(int j=1;j<=row-i+1;j++){
			
				printf("_ ");
			}
			printf("\n");
		}
	}
