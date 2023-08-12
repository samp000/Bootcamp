
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		int row=4,col=3;

		int **ptr = (int**)malloc(row*sizeof(int*));
	
	
		for(int i=0;i<row;i++) {
		
			ptr[i] = (int*)malloc(col*sizeof(int));
		}

		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				*((*ptr+i)+j)=j+10;

				printf("%d ",*((*ptr+i)+j));
			}

			printf("\n");
		}

		for(int i=0;i<row;i++) {
		
			free(ptr[i]);
		}

		free(ptr);
	}
