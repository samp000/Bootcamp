
	#include<stdio.h>

	int findCeil(int *arr,int size,int key) {

		int start = 0,end = size-1;
		int mid,ceil;

		while(start <= end) {
		
			mid = (start+end)/2;

			if(key < arr[0])
				return arr[0];
			if(key > arr[size-1])
				return -1;

			if(arr[mid] == key) {	
				return mid;

			} else {
			
				if(arr[mid] > key) {
					
					ceil = arr[mid];
					end = mid-1;
				
				}else {
					start = mid+1;

				}
			}
		}

		return ceil;
	}

	void main() {
	
		int arr[] = {3,7,11,13,14,17,19,25,35,50};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",findCeil(arr,size,15));
	}
