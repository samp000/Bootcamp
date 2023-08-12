/*
 *          1
 *        A b
 *      1 2 3
 *    A b C d
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {
	
			char ch = 'A';
			int num=1;

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				if(i%2==0 && j%2!=0) {
					printf("%-2c",ch++);
				}else if(i%2==0){
					printf("%-2c",ch+32);
					ch++;
				}else if(i%2!=0) {
				
					printf("%-2d",num++);
				}
			}

			printf("\n");
		}
	}
 
