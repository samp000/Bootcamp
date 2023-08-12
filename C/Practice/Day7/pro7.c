/*
 * 	       	    1
 * 	         4  7  4
 * 	      7  10 13 10 7
 * 	   10 13 16 19 16 13 10
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		int num=1;
		
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("   ");

			for(int j=1;j<=2*i-1;j++) {
			
				printf("%-3d",num);
		
				if(j<i) {
					num=num+3;
				}else {
					num=num-3;
				}		
			}	
			
			num=num+6;
			
			printf("\n");
		}
	}
