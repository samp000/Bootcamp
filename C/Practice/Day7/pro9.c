/*
 * 	       	    5
 * 	       	  7 6 5
 * 	       	5 4 3 4 5
 * 	      5 6 7 8 7 6 5 
 * 	    5 6 7 8 9 8 7 6 5
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		int num=rows;
		
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("   ");

			for(int j=1;j<=2*i-1;j++) {
			
				printf("%-3d",num);
		
				if(j<i) {
					num++;
				}else {
					num--;
				}		
			}	
			
			num++;
			
			printf("\n");
		}
	}
