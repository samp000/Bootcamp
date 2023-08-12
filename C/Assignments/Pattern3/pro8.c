/*	Program 8:
 *
 * 	16  15  14  13
 * 	L   K   J   I
 * 	8   7   6   5
 * 	D   C   B   A
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num = rows*rows;
		char ch = 'A'+num-1;


		for(int i=1;i<=rows;i++) {

			for(int j=1;j<=rows;j++) {
	
				if(i%2==0)
					printf("%-4c",ch);	
				else
					printf("%-4d",num);	

				num--;
				ch--;
			}


			printf("\n");
		}
	}
