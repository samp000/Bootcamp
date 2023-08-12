
	//In this approch arr[end] is pivot and we create new array 

	#include<stdio.h>
	int sCnt=0;

	int partition(int arr[],int start,int end) {

		sCnt++;

		int temp[end-start+1];		//created new array
		int pivot=arr[end];
		int index=0;

		for(int i=start;i<end;i++) {
		
			if(arr[i] < pivot) 
				temp[index++] = arr[i];
		}

		int pos = index+start;

		temp[index++] = pivot;

		for(int j=start;j<end;j++){
		
			if(arr[j] > pivot)
				temp[index++] = arr[j];
		}

		for(int i=start;i<=end;i++) {
		
			arr[i] = temp[i-start];
		}

		return pos;
	}
		

	void quickSort(int arr[],int start,int end) {
	
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
