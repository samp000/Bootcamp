
	#include<stdio.h>
	
	void main() {
	
		int arr[6] = {1,2,3,4,5,6};

		for(int i=0;i<6;i++)
			printf("%d ",arr[i]);
		printf("\n");
		
		++arr[1];
		
		for(int i=0;i<6;i++)
			printf("%d ",arr[i]);
		printf("\n");
	
		arr[arr[1]]++;
		
		for(int i=0;i<6;i++)
			printf("%d ",arr[i]);
		printf("\n");
	
		arr[arr[arr[1]]]++;
		
		for(int i=0;i<6;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}