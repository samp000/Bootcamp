
	#include<stdio.h>
	#include<stdlib.h>

	int *searchRange(int arr[] , int size, int key) {
	
		int *arr1 = (int *)malloc(sizeof(4*2));
		*(arr+0) = -1;
		*(arr+1) = -1;

		int start=0,end=size-1,mid;


		while(start <= end) {
		
			mid = (start+end)/2;

			if(arr[mid] == key) {
			
				if(arr[mid-1] != key) {
			       		arr[0] = mid;
					start = mid+1;
				}

				if(arr[mid+1] != key){
			
					arr1[1] = mid;
					end = mid-1;
				}
			
			}else {

				if(arr[mid] < key)
					start = mid+1;
				else
					end = mid-1;
			}

		}

		return arr;
	}

	void main() {
	
		int arr[] = {1,2,3,5,8};
		int size = sizeof(arr) / sizeof(arr[0]);

		int *ptr = searchRange(arr,size,5);

		printf("arr[0]:%d\n",*(ptr+0));
		printf("arr[1]:%d\n",*(ptr+1));
	

		//printf("%ld\n",sizeof(int)*2);
	}

