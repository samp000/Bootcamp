/*	Program 4:
 *	
 *	a B c D
 *	b C d E
 *	c D e F
 *	d E f G
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {

			char ch = 'a'+i-1;


			for(int j=1;j<=rows;j++) {

				if(j%2==0)
					printf("%c ",ch-32);
				else
					printf("%c ",ch);

				ch++;

			}

			printf("\n");
		}
	}
