
	#include<stdio.h>

	void main() {
	
		int rows;
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			char ch='A'+i-1;

			for(int j=1;j<=rows;j++) {
			
				printf("%c ",ch);
			}

			printf("\n");
		}
	}
