/*
 *
 *       D
 *     c D
 *   B c D
 * a B c D
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {
	
			char ch = 'A'+rows-i;

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				if(ch%2==0) {
					printf("%-2c",ch);
				}else{
					printf("%-2c",ch+32);
				}
				ch++;
				
			}

			printf("\n");
		}
	}
 
