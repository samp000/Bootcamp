/*
 *           A
 *         b a
 *       C E G
 *     d c b a
 *   E G I K M
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {
	
			char ch = 'A'+i-1;

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				if(i%2!=0) {
					printf("%-2c",ch);
					ch+=2;
				}else{
					printf("%-2c",ch+32);
					ch--;
				}
			}

			printf("\n");
		}
	}
 
