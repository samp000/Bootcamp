
	#include<stdio.h>

	void printEle(int ele) {
	
		printf("%d\n",ele);
	}

	void main() {
	
		int arr[] = {10,20,30,40,50};

		int sz = sizeof(arr)/sizeof(arr[0]);

		for(int i=0;i<sz;i++) {
		
			printEle(arr[i]);
		}	
	}
