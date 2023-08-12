/*
 * 		D
 * 	      c D c
 * 	    B c D c B
 * 	  a B c D c B a
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("  ");

			char ch = 'A'+rows-i;
			
			for(int j=i;j<=2*i;j++) {
	
				
				if(j<i) {
					
					if(j%2==0)
						printf("%c ",ch);
					else
						printf("%c ",ch+32);
					ch++;
				}else{
					if(j%2==0)
						printf("%c ",ch);	
					else
						printf("%c ",ch+32);
					ch--;
				}
			}

			printf("\n");
		}
	}
