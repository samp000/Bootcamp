/*	
 *	 D  C  B  A
 *	 C  B  A
 *	 B  A
 *	 A
 */

	#include<stdio.h>

	void main() {
		
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {

			char ch = 'A'+rows-i;
			
			for(int j=rows;j>=i;j--) {

					printf("%c  ",ch);

				ch--;

			}

			printf("\n");
		}
	}
