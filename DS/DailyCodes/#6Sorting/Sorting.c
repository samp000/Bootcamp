
	#include<stdio.h>
	#include<stdlib.h>
	#include<time.h>

	clock_t start,end;
	double cpu_time_used;

	
	void bubbleSort(int arr[],int n) {

		start = clock();

		for(int i=0;i<n;i++) {
		
			for(int j=0;j<n-1-i;j++) {
				
				
				if(arr[j+1] < arr[j]) {
					
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;	
				}
			}
		}

		end = clock();
		cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
		printf("Time taken by Bubble Sort:%lf\n",cpu_time_used);

	}

	void selectionSort(int arr[],int n) {


		start = clock();	
		for(int i=0;i<n;i++) {

			int minIndx = i;
		
			for(int j=i+1;j<n;j++) {

				if(arr[j] < arr[minIndx])
					minIndx = j;
			}

			int tmp = arr[i];
			arr[i] = arr[minIndx];
			arr[minIndx] = tmp;

		}

		end = clock();
		cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
		printf("Time taken by Selection Sort:%lf\n",cpu_time_used);
	}

	void insertionSort(int arr[],int n) {
	
		start = clock();
		for(int i=0;i<n;i++) {
		
			int val = arr[i];
			int j = i-1;

			for(;j>=0 && arr[j]>val;j--)
				arr[j+1] = arr[j];

			arr[j+1] = val;
		}
		
		end = clock();
		cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
		printf("Time taken by Insertion Sort:%lf\n",cpu_time_used);
	}

	void merge(int arr[],int start,int mid,int end) {
	
		int lSize = mid-start+1;
		int rSize = end-mid;

		int lArr[lSize],rArr[rSize];

		for(int i=0;i<lSize;i++)
			lArr[i] = arr[i+start];
		
		for(int i=0;i<rSize;i++)
			rArr[i] = arr[i+mid+1];

		int i=0,j=0,k=start;

		while(i<lSize && j<rSize) {
		
			if(lArr[i] < rArr[j])
				arr[k] = lArr[i++];
			else
				arr[k] = rArr[j++];

			k++;
		}

		while(i<lSize)
			arr[k++] = lArr[i++];
		
		while(j<rSize)
			arr[k++] = rArr[j++];
	}

	void mergeSort(int arr[],int start,int end) {
	


		if(start < end) {
		
			int mid = start + (end-start)/2;

			mergeSort(arr,start,mid);
			mergeSort(arr,mid+1,end);

			merge(arr,start,mid,end);
		}

	}

	void swap(int *a,int *b) {
	
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	int partition1(int arr[],int start,int end) {
	
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

	void quickSort1(int arr[],int start,int end){
	
		if(start < end) {
		
			int pivot = partition1(arr,start,end);
			quickSort1(arr,start,pivot-1);
			quickSort1(arr,pivot+1,end);
		}
	}

	int partition2(int arr[],int start,int end) {
	
		int pivot = arr[start];
		int i = start-1;
		int j = end+1;

		while(1) {
		
			do{
				i++;
			}while(arr[i]<pivot);
			
			do{
				j--;
			}while(arr[j]>pivot);

			if(i>=j) {
			
				return j;
			}

			swap(&arr[i],&arr[j]);
		}
	}

	 void quickSort2(int arr[],int start,int end){

                if(start < end) {

                        int pivot = partition1(arr,start,end);
                        quickSort1(arr,start,pivot);
                        quickSort1(arr,pivot+1,end);
                }
        }
	 
	int partition(int arr[],int start,int end) {
	
		int pivot = arr[start + (end-start)/2];
		int tmp[end-start+1];
		int indx = 0;

		for(int i=start;i<end;i++) {
			if(arr[i] < pivot)
				tmp[indx++] = arr[i];
		}

		int pos = indx;
		tmp[indx++] = pivot;
		
		for(int i=start;i<end;i++) {
			if(arr[i] > pivot)
				tmp[indx++] = arr[i];
		}

		for(int i=start;i<=end;i++)
			arr[i] = tmp[i];


		return pos;
	}

	void quickSort3(int arr[],int start,int end){

                if(start < end) {

                        int pivot = partition1(arr,start,end);
                        quickSort1(arr,start,pivot-1);
                        quickSort1(arr,pivot+1,end);
                }
        }




	void printArray(int arr[],int n) {
	
		printf("\nArray is:");
		
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		printf("\n\n");
	}
	
	void main() {
	
		FILE *myFile;
    		myFile = fopen("random_numbers.txt", "r");

		int n = 100000;
   
		int arr[n];
    		int i;

    
		for (i = 0; i < n; i++)
       	 		fscanf(myFile, "%4d", &arr[i]);


		int ch;
		while(1) {
		
			printf("1.Bubble Sort\n");
			printf("2.Insertion Sort\n");
			printf("3.Selection Sort\n");
			printf("4.Merge Sort\n");
			printf("5.Quick Sort1(Lomuto Approch)\n");
			printf("6.Quick Sort2(Hoare's Approch)\n");
			printf("7.Quick Sort3(Naive Approch)\n");
			printf("8.Print Array\n");
			printf("9.Exit\n\n");

			printf("Select any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:	bubbleSort(arr,n);
					break;
				
				case 2:	insertionSort(arr,n);
					break;
	
				case 3:	selectionSort(arr,n);
					break;
				
				case 4:	{
						start = clock();

						mergeSort(arr,0,n-1);
					
						end = clock();
                				cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
               	 				printf("Time taken by Merge Sort:%lf\n",cpu_time_used);
					
						break;
					}
				case 5:	{
						start = clock();

						quickSort1(arr,0,n-1);
					
						end = clock();
                				cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
               	 				printf("Time taken by Quick Sort1:%lf\n",cpu_time_used);
					
						break;
					}
				case 6:	{
						start = clock();

						quickSort2(arr,0,n-1);
					
						end = clock();
                				cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
               	 				printf("Time taken by Quick Sort2:%lf\n",cpu_time_used);
					
						break;
					}
				case 7:	{
						start = clock();

						quickSort2(arr,0,n-1);
					
						end = clock();
                				cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
               	 				printf("Time taken by Quick Sort3:%lf\n",cpu_time_used);
					
						break;
					}
	
				case 8: printArray(arr,n);
					break;

				case 9:	exit(0);
					break;
			}
		}
	
		printf("\n");
	}

