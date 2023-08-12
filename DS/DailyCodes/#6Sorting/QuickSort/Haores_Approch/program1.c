
	//in Haores approch arr[start] is pivot

	#include<stdio.h>
	
	int sCnt = 0;

	void swap(int *a,int *b) {
	
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	int partition(int arr[],int start,int end) {
	
		sCnt++;

		int pivot = arr[start];
		int i = start-1, j = end+1;

		while(1) {
		

			do {
				i++;

			}while(arr[i] < pivot);

			do{
			
				j--;

			}while(arr[j] > pivot);


			if(i >= j) {
				
				printf("start:%d end:%d i:%d j:%d \n",start,end,i,j);
				return j;
			}

			swap(&arr[i],&arr[j]);
		}

	}

	void quickSort(int arr[],int start,int end) {

		printf("\nquicksort  start:%d  end:%d\n",start,end);
		sCnt++;

		if(start < end) {
		
			int pivot = partition(arr,start,end);
			quickSort(arr,start,pivot);
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

