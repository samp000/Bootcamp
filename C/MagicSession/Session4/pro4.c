
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		int plane,rows,cols;

		printf("Enter plane ,rows and cols:");
		scanf("%d %d %d",&plane,&rows,&cols);

		int *ptr = (int*)malloc(plane*rows*cols*sizeof(int));

		printf("Enter elements\n");
		
		for(int i=0;i<plane*rows*cols;i++) {
		
			scanf("%d",ptr+i);
		}	

		printf("elements in array are:\n");

		for(int i=0;i<plane*rows*cols;i++) {
		
			printf("%d ",*(ptr+i));

			if((i+1)%cols==0)
				printf("\n");
		}

		printf("\n");

		free(ptr);
	}
