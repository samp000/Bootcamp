
	#include<stdio.h>

	void main() {
	
		int arr[] = {100,200,300,400};

		int (*ptr)[4] = &arr;			//pointer to an array
	
		printf("%d ",**ptr);
		printf("%d ",*(*ptr+1));
		printf("%d ",*(*ptr+2));
		printf("%d ",*(*ptr+3));

		printf("\n");
	}
