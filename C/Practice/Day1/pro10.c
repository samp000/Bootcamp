
	#include<stdio.h>

	void main() {
	
		int rows;
		scanf("%d",&rows);

		int num=1;
		char ch='a';

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				if(i%2==0)
					printf("%c ",ch++);
				else
					printf("%d ",num++);
			}

			printf("\n");
		}
	}
