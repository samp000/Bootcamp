
	#include<stdio.h>

	int findFloor(int arr[] , int size, int key) {
	
		int start=0,end=size-1,mid,store=-1;

		if(key > arr[size-1])
			return arr[size-1];

		if(key <= arr[0]){
			printf("not found\n");
			return -1;
		}

		while(start <= end) {
		
			mid = (start+end)/2;

			if(arr[mid] == key)
			       return mid;
			else {
			
				if(arr[mid] > key) 
					end = mid-1;
				else {
				
					store = arr[mid];
					start = mid+1;
				}
			}	
		}

		return store;
	}

	void main() {
	
		int arr[] = {1,2,3,5,8,10,14,15,20};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("floor:%d\n",findFloor(arr,size,9));
	}
