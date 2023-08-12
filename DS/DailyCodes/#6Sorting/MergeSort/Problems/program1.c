
	#include<stdio.h>
	#include<stdlib.h>
	

	void sortArr(int arr[],int size) {
	
		for(int i=0;i<size;i++) {
		
			for(int j=0;j<size-1-i;j++){
			
				if(arr[j] > arr[j+1]) {
				
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}

	int *mergeArr(int *arr1,int *arr2,int sz1,int sz2) {
	
		int *res = (int*)calloc(sz1+sz2,sizeof(int));

		int p1=0,p2=0,p3=0;

		while(p1 < sz1 && p2 < sz2) {
		
			if(arr1[p1] < arr2[p2]) 
				res[p3++] = arr1[p1++];
			else
				res[p3++] = arr2[p2++];
		}

		if(p1 < sz1) {
			while(p1 < sz1) 
				res[p3++] = arr1[p1++];
		}
		
		if(p2 < sz2) {
			while(p2 < sz2) 
				res[p3++] = arr2[p2++];
		}

		return res;
	}
	
	void main() {
	
		int sz1,sz2;
		
		printf("Enter size of array1:");
		scanf("%d",&sz1);
		
		printf("Enter size of array2:");
		scanf("%d",&sz2);

		int arr1[sz1],arr2[sz2];

		printf("Enter elements in array1:");
		for(int i=0;i<sz1;i++)
			scanf("%d",&arr1[i]);

		printf("Enter elements in array2:");
		for(int i=0;i<sz2;i++)
			scanf("%d",&arr2[i]);

		sortArr(arr1,sz1);
		sortArr(arr2,sz2);

		printf("Array 1 is:");
		for(int i=0;i<sz1;i++)
			printf("%d ",arr1[i]);
		
		printf("\nArray 2 is:");
		for(int i=0;i<sz2;i++)
			printf("%d ",arr2[i]);
		
		int *res = mergeArr(arr1,arr2,sz1,sz2);

		printf("\nResultant array:");
		for(int i=0;i<sz1+sz2;i++)
			printf("%d ",res[i]);

		printf("\n");
	}
