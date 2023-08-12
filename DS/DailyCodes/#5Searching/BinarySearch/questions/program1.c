
	#include<stdio.h>

	int findFloor(int *arr,int size,int key) {

		int start = 0,end = size-1;
		int mid,floor;

		while(start <= end) {
		
			mid = (start+end)/2;

			if(key < arr[0])
				return 0;
			if(key > arr[size-1])
				return arr[size-1];

			if(arr[mid] == key) {	
				return mid;

			} else {
			
				if(arr[mid] > key) {
					
					end = mid-1;
				
				}else {
					floor = arr[mid];
					start = mid+1;

				}
			}
		}

		return floor;
	}

	void main() {
	
		int arr[] = {3,7,11,13,14,17,19,25,35,50};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",findFloor(arr,size,100));
	}
