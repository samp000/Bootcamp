
	#include<stdio.h>
	
	void main() {
	
		for(int i=0;i<=127;i++) {
		
			printf("%d=%c\t",i,i);

			if(i%5==0)
				printf("\n");
		}

		printf("\n");
	}
