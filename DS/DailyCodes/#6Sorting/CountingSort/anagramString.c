

	//this code runs in O(n.log n) time complexity this drawback is fullfilled by counting sort

	#include<stdio.h>
	#include<string.h>
	
	void merge(char arr[],int start,int mid,int end) {
	
		int sz1 = mid-start+1;
		int sz2 = end-mid;

		char arr1[sz1],arr2[sz2];

		for(int i=0;i<sz1;i++)
			arr1[i] = arr[start+i];
		
		for(int i=0;i<sz2;i++)
			arr2[i] = arr[mid+i+1];

		int i=0,j=0,k = start;

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

	void mergeSort(char arr[],int start,int end) {
	
		if(start < end){
		
			int mid = (start+end)/2;

			mergeSort(arr,start,mid);
			mergeSort(arr,mid+1,end);
			merge(arr,start,mid,end);
		}
	}

	void toLowerCase(char str[]) {
	
		while(*str != '\0') {
		
			if(*str >= 65 && *str <= 90) 
				*str = *str+32;

			str++;
		}
	}
	
	void isAnagram(char str1[],char str2[]) {
	
		int flg = 1;

		char tmp1[30],tmp2[30];

		strcpy(tmp1,str1);
		strcpy(tmp2,str2);

		int len1 = strlen(str1);
		int len2 = strlen(str2);

		if(len1 != len2) {
		
			flg=0;
		}else {

			toLowerCase(str1);
			toLowerCase(str2);

			mergeSort(str1,0,len1-1);
			mergeSort(str2,0,len2-1);

			for(int i=0;i<len1-1;i++) {
			
				if(str1[i] != str2[i]) {
					flg = 0;
					break;
				}
			}
		}	
		

		if(!flg)
			printf("%s and %s are not anagram strings\n",tmp1,tmp2);
		else
			printf("%s and %s are  anagram string\n",tmp1,tmp2);

	}

	void main() {
	
		char str1[30],str2[30];

		printf("Enter string1:");
		scanf("%s",str1);
		printf("Enter string2:");
		scanf("%s",str2);

		isAnagram(str1,str2);
	}

