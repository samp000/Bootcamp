
	#include<stdio.h>

	void main() {
	
		int rows;
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				printf("%-4d ",num);
				num+=2;
			}

			printf("\n");
		}
	}
