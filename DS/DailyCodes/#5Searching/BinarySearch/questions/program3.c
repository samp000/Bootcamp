
	#include<stdio.h>

	int firstOcc(int *arr,int size,int key) {

		int start = 0,end = size-1;
		int mid,store;

		while(start <= end) {
		
			mid = (start+end)/2;

			if(key == arr[0])
				return 0;

			if(arr[mid] == key) {	
				store = mid;
				end = mid-1;

			} else {
			
				if(arr[mid] > key) {

					end = mid-1;
				
				}else {
					start = mid+1;

				}
			}
		}

		return store;
	}

	void main() {
	
		int arr[] = {3,7,7,7,7,11,11,11,11,13,13,13,14,17,19,25,35,50};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",firstOcc(arr,size,11));
	}
