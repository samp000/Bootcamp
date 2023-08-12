//find kth largest element in an array

	#include<stdio.h>
	#include<stdlib.h>


	void merge(int arr[],int start,int mid,int end) {
	
		int sz1 = mid-start+1;
		int sz2 = end-mid;

		int arr1[sz1],arr2[sz2];

		for(int i=0;i<sz1;i++)
			arr1[i] = arr[i+start];

		for(int i=0;i<sz2;i++)
			arr2[i] = arr[mid+i+1];

		int i=0,j=0,k=start;

		while(i<sz1 && j<sz2) {
		
			if(arr1[i] < arr2[j])
				arr[k++] = arr1[i++];
			else
				arr[k++] = arr2[j++];
		}

		while(i<sz1) 
			arr[k++] = arr1[i++];

		while(j<sz2) 
			arr[k++] = arr2[j++];
	}


	void mergeSort(int arr[],int start,int end) {
	
		if(start<end) {
		
			int mid = (start+end)/2;
			
			mergeSort(arr,start,mid);
			mergeSort(arr,mid+1,end);

			merge(arr,start,mid,end);
		}
	}

	int findKthLargest(int arr[],int n,int k) {
	
		mergeSort(arr,0,n-1);
		return arr[n-k];
	}	

	void main() {

		printf("--------------------------------------------------------------");
		printf("\n Find kth largest element in an array");
		printf("\n--------------------------------------------------------------\n");

                int n;
                printf("Enter size of array:");
                scanf("%d",&n);

                int arr[n],k;

                printf("Enter array elements:");
                for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);
	
		printf("Enter k:");
		scanf("%d",&k);
                
		if(k<0 || k>n) {
			printf("Invalid k\n");
			exit(0);
		}

                printf("%d th largest elment is:%d\n",k,findKthLargest(arr,n,k));
       
		printf("\nArray elements after sort:");
                for(int i=0;i<n;i++)
                        printf("%d ",arr[i]);

                printf("\n");
        }
	

