
	#include<stdio.h>

	void main() {

		int num;
		printf("Enter number:");
		scanf("%d",&num);

		int arr[10];

		for(int i=0;i<10;i++) {
	
			*(arr+i) = num * (i+1);

			printf("%d ",*(arr+i));
		}

		printf("\n");

	}
