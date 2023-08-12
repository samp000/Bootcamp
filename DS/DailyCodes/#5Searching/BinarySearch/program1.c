
	#include<stdio.h>

	int binSearch(int *arr,int size,int key) {

		int start = 0,end = size-1;
		int mid ;
		int step = 0;

		while(start <= end) {
		
			if(start == end && arr[start] == key)	//at last step when start == end , to redeuce one iteration
				return start;


			printf("Step no:%d\n",++step);

			mid = (start+end)/2;

			if(arr[mid] == key) {
				
				return mid;

			} else {
			
				if(arr[mid] > key)
					end = mid-1;
				else
					start = mid+1;
			}
		}

		return -1;
	}

	void main() {
	
		int arr[] = {3,7,11,13,14,17,19,25,35,50};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",binSearch(arr,size,3));
	}
