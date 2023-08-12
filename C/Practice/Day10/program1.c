
	#include<stdio.h>

	void main() {
	
		int rows,cols,space;

		printf("Rows:");
		scanf("%d",&rows);

		for(int i=0;i<rows;i++) {

			for(space=0;space<i;space++)
				printf(" ");		

			for(cols=rows;cols>i;cols--) {
			
				printf("* ");
			}

			printf("\n");
		}
	}
