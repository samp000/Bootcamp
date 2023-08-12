/*
 * 		1
 * 	      A b A
 * 	    1 2 3 2 1
 * 	  A b C d c b A
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		
		for(int i=1;i<=rows;i++) {
		
			int num=1;
			char ch ='A';

			for(int sp=rows;sp>i;sp--)
				printf("   ");

			for(int j=i;j<=i*3-2;j++) {
		

				if(i%2==0) {
				
					if(j%2==0)
						printf("%-3c",ch);
					else
						printf("%-3c",ch+32);
				
				}else {
				
						printf("%-3d",num);
				}
				
				
				if(j<i*2-1) {
					num++;
					ch++;
				}else {
					num--;
					ch--;
				}		
			}	
			
			printf("\n");
		}
	}
