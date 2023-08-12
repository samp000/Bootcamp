/*
 * 	1 3 5 7 9
 * 	  9 7 5 3
 * 	    3 5 7
 * 	      7 5
 * 	        5
 */

	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		int num= 1;
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<=i;sp++) 
				printf("  ");
		
			for(int j=1;j<=rows-i+1;j++)  {
			
				if(i%2!=0) {
					printf("%d ",num);
					num+=2;
				}else {
					num-=2;
					printf("%d ",num);
				}
			}


			printf("\n");	
		}

	}
