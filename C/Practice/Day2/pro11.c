/*
 * 	1  2  3  4
 * 	a  b  c  d
 * 	#  #  #  #
 * 	5  6  7  8
 * 	e  f  g  h
 * 	#  #  #  #
 * 
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		int num=1;
		char ch='a';

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=4;j++) {

				if(i%3==1)			
					printf("%d ",num++);
				else if(i%3==2)
					printf("%c ",ch++);
				else
					printf("# ");
			}

			printf("\n");
		}
	
	}
