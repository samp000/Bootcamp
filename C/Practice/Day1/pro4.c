
	#include<stdio.h>

	void main() {
	
		int rows;
		scanf("%d",&rows);

		char ch='a';

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				printf("%c ",ch++);
			}

			printf("\n");
		}
	}
