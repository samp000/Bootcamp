/*
 * 	a  B  c
 * 	d  E  f
 * 	g  H  i
 *
 */

	#include<stdio.h>

	void main() {
	
		int row;

		printf("Enter rows:");
		scanf("%d",&row);

		char ch = 'A';

		for(int i=1;i<=row;i++) {

			for(int j=1;j<=row;j++) {
			
				if(j%2!=0)
					printf("%c ",ch+32);
				else
					printf("%c ",ch);

				ch++;
			}

			printf("\n");
		}
	}
