
	#include<stdio.h>

	int findPos(int arr[] , int size, int key) {
	
		int start=0,end=size-1,mid;

		if(key > arr[size-1])
			return size;

		if(key < arr[0]){
			return 0;
		}

		while(start <= end) {
		
			mid = (start+end)/2;

			if(arr[mid] == key)
			       return mid;
			else {
			
				if(arr[mid] > key) 
					end = mid-1;
				else {
				
					start = mid+1;
				}
			}	
		}

		return start;
	}

	void main() {
	
		int arr[] = {1,3,5,7};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("floor:%d\n",findPos(arr,size,4));
	}
