/*	
 *		4
 *	      4 3 4
 *	    4 3 2 3 4
 *	  4 3 2 1 2 3 4
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("  ");

			int num=rows;

			for(int j=1;j<=2*i-1;j++) {
			
				if(j<i) {
				
					printf("%d ",num--);
				}else {
					printf("%d ",num++);
				}
			}

			printf("\n");
		}
	}	
