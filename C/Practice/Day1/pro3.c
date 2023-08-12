
	#include<stdio.h>

	void main() {
	
		int num=1;

		for(int i=1;i<=3;i++) {
		
			for(int j=1;j<=4;j++) {
			
				printf("%-4d ",num++);
			}

			printf("\n");
		}
	}
