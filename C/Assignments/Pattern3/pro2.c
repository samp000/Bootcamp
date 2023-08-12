/*	Program 2:
 *	
 *	3 b 1 d
 *	a 2 c 0
 *	3 b 1 d
 *	a 2 c 0
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num=rows;
		char ch;

		for(int i=1;i<=rows;i++) {

			ch = 'a';


			for(int j=1;j<=rows;j++) {

				if((i%2!=0 && j%2!=0) || (i%2==0&&j%2==0))
					printf("%-3d ",rows-j);
				else
					printf("%-3c ",ch);

				ch++;
			}

			printf("\n");
		}
	}
