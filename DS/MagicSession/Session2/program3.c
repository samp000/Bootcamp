
	#include<stdio.h>

	int findpt(int arr[] , int size) {

		for(int i=0;i<size-1;i++) {
		
			if(arr[i] > arr[i+1])
				return i;
		}

	}
	
	int findKey(int arr[] , int size , int key) {
	
		int start=0,end=size-1,pt = findpt(arr,size);

		int mid;

		if(arr[pt] == key)
			return pt;

		if(key < arr[pt] && key > arr[start]) 
			end = pt-1;
		else
			start = pt+1;

//		mid = (start+end)/2;

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

		return -1;
	}

	void main() {
	
		int arr[] = {9,8,7,6,1,2,3,4,5};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("find key:%d\n",findKey(arr,size,3));
	}
