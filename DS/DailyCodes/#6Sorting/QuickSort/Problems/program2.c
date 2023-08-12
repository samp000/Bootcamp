	
	#include<stdio.h>

	void swap(int *a,int *b) {
	
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	int sz;

	int partition(int arr[],int start,int end) {
	
		int pivot = arr[end];
		int itr = start-1;

		for(int i=start;i<end;i++) {
		
			if(arr[i] < pivot) {
			
				itr++;
				swap(&arr[i],&arr[itr]);
			}
		}

		swap(&arr[itr+1],&arr[end]);

		return itr+1;
	}
	
	int quickSort(int arr[],int start,int end) {
	
		if(start < end) {
		
			int pivot =  partition(arr,start,end);
			quickSort(arr,start,pivot-1);
			quickSort(arr,pivot+1,end);
		}
	}

	void findMid(int arr[],int size) {
	
		quickSort(arr,0,size-1);
		printf("\nMid of sorted array is:%d\n",arr[(sz-1)/2]);
	}
	

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);
		
		sz = n;

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printf("\nArray elements before sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		findMid(arr,n);

		printf("\nArray elements after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		//printf("Stack count:%d\n",sCnt);

		printf("\n");
	}

