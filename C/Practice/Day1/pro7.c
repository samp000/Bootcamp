
	#include<stdio.h>

	void main() {
	
		int rows;
		scanf("%d",&rows);

		int num=rows*rows;

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				printf("%d ",num--);
			}

			printf("\n");
		}
	}
