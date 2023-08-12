
	#include<stdio.h>

	void main() {

		int size;
		printf("Enter size of array:");
		scanf("%d",&size);

		int arr[size];

		printf("Enter array elements:");

		for(int i=0;i<size;i++) 
			scanf("%d",arr+i);

		int max1=arr[0],max2=0;

		for(int i=0;i<size;i++)  {
		
			if((max2<max1) && (max1>*(arr+i)) && (max2<*(arr+i))) {
			
				max2 = *(arr+i);
			
			}else if(max1 < *(arr+i)) {
			
				max2 = max1;
				max1 = *(arr+i);
			}
		}

		printf("\nSecond largest element in an array is:%d\n",max2);


		for(int i=0;i<size;i++) 
			printf("%d ",*(arr+i));

		printf("\n");
	}
