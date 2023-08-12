
	#include<stdio.h>

	int sCnt=0;

	void swap(int *a ,int *b) {
	
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	int partition(int arr[],int start,int end) {
	
		printf("\npartition  start:%d  end:%d\n",start,end);
		sCnt++;
		
		int pivot = arr[end];
		int itr = start-1;

		for(int i=start;i<end;i++) {

			if(arr[i] < pivot) {
			
				itr++;
				swap(&arr[i],&arr[itr]);
			}
		}
			
		swap(&arr[itr+1],&arr[end]);			//swaping pivot 

		return itr+1;
	}

	void quickSort(int arr[],int start,int end) {
	
		printf("\nquicksort  start:%d  end:%d\n",start,end);
		sCnt++;

		if(start < end) {
		
			int pivot = partition(arr,start,end);

			quickSort(arr,start,pivot-1);
			quickSort(arr,pivot+1,end);
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

		quickSort(arr,0,n-1);	

		printf("\n\n\nArray elements after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		printf("Stack count:%d\n",sCnt);

		printf("\n");
	}

