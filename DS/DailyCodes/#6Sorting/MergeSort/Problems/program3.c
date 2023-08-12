
	#include<stdio.h>

	void mergeSort(int arr[],int start,int end) {
	
		if(start < end) {
		
			int mid = (start+end)/2;
			
			mergeSort(arr,start,mid);
			mergeSort(arr,mid+1,end);

			printf("%d\n",mid);
		}
	}

	void main() {
	
		int arr[] = {7,1,4,-5,-3,10,8,9,3,2};
		
		int size = sizeof(arr)/sizeof(arr[0]);

		mergeSort(arr,0,size-1);
	}
