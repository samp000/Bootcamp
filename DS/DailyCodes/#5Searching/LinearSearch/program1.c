
	#include<stdio.h>

	int isPresent(int *arr,int size,int key) {
	
		for(int i=0;i<size;i++) {
		
			if(*(arr+i) == key)
				return i;
		}

		return -1;
	}

	int lastOcc(int *arr,int size,int key) {
	
		int indx = -1;

		for(int i=0;i<size;i++) {
		
			if(*(arr+i) == key)
				indx = i;
		}

		return indx;
	}
	
	int SecondlastOcc(int *arr,int size,int key) {
	
		int indx1 = -1 , indx2 = -1;

		for(int i=0;i<size;i++) {
		
			if(*(arr+i) == key) {
				
				indx2 = indx1;
				indx1 = i;
			}
		}

		return indx2;
	}

	void main() {
	
		int arr[] = {7,4,2,1,5,3,9,2};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",isPresent(arr,size,9));
		printf("%d\n",lastOcc(arr,size,2));
		printf("%d\n",SecondlastOcc(arr,size,1));
	}
