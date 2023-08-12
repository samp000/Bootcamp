
	//finding is even number appeared twice in an array

	#include<stdio.h>
	#include<stdbool.h>

	bool evenTwice(int *arr , int n) {

		static int cnt = 0;

		if(n == 0)
			return false;

		if(*(arr+n-1)%2 == 0)
			cnt++;

		if(cnt == 2)
			return true;

		return evenTwice(arr,n-1) || false ;
	}

	void main() {

		int arr[] = {1,2,3,4};

		if(evenTwice(arr,sizeof(arr)/sizeof(arr[0])))
				printf("Array contains even number more than 2\n");
		else
				printf("Array contains less than 2 even numbers\n");
	}
