
	#include<stdio.h>

	int isItDuplicate(int arr[] ,int size) {
	
		int start=0,end=size-1,mid;

		while(start <= end) {
		
			mid = (start+end)/2;

			if(start == end)
			       return arr[start];
			else {
			
				if(arr[mid] == arr[mid+1]) 
					end = mid-1;
				else {
				
					start = mid+1;
				}
			}	
		}

		return 0;
	}

	void main() {
	
		int arr[] = {-1,1,1,2,2,3,3,4,4,7,7};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("Not Duplicate:%d\n",isItDuplicate(arr,size));
	}
