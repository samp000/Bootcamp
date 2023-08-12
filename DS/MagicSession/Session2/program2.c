
	#include<stdio.h>

	int firstOcc(int arr[] , int size, int key) {
	
		int start=0,end=size-1,mid,indx=-1;

		if(key == arr[0]){
			return 0;
		}

		while(start <= end) {
		
			mid = (start+end)/2;

			if(arr[mid] == key) {
			       
				indx = mid;
			       
			       if(arr[mid-1] != key)
				       return mid;
				end = mid-1;

			} else {
			
				if(arr[mid] > key) 
					end = mid-1;
				else {
				
					start = mid+1;
				}
			}	
		}

		return indx;
	}

	void main() {
	
		int arr[] = {1,2,2,2,2,3,5,8,8,8,10,14,15,20};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("First Occurance:%d\n",firstOcc(arr,size,2));
	}
