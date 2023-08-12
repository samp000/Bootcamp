//MergeSort program

	#include<stdio.h>
	

	void merge(int arr[],int start,int mid,int end) {
	
		int sz1 = mid-start+1;
		int sz2 = end-mid;

		int arr1[sz1],arr2[sz2];

		for(int i=0;i<sz1;i++) 
			arr1[i] = arr[i+start];
		
		for(int i=0;i<sz2;i++) 
			arr2[i] = arr[mid+i+1];

		int ptr1=0;	//for 1st array
		int ptr2=0;	//for 2nd array
		int ptr3=start;	//for original array, start is always variable so we have'n assigned 0 

		while(ptr1<sz1 && ptr2<sz2) {
		
			if(arr1[ptr1] < arr2[ptr2])
				arr[ptr3++] = arr1[ptr1++];
			else
				arr[ptr3++] = arr2[ptr2++];
		}

		while(ptr1<sz1)
			arr[ptr3++] = arr1[ptr1++];
		
		while(ptr2<sz2)
			arr[ptr3++] = arr2[ptr2++];
	}


	void mergeSort(int arr[],int start,int end) {		
	
		if(start < end) {
		
			int mid = (start+end)/2;
			
			mergeSort(arr,start,mid);
			mergeSort(arr,mid+1,end);

			merge(arr,start,mid,end);	//merging divided array
		}
	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printf("\nArray elements before sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		mergeSort(arr,0,n-1);	

		printf("\nArray elements after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		printf("\n");
	}
