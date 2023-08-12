
	//open addressing in hashing

	#include<stdio.h>
	#include<stdlib.h>
	#include<time.h>
	#define SIZE_OF_TABLE 10

	
	int table[SIZE_OF_TABLE];
	
	int hash(int key){

		return key % SIZE_OF_TABLE;
	}
	
	int searchINTable(int key) {
	
		int hash_value = hash(key);
		
		if(table[hash_value] == key )
			return hash_value;
		else {
		
			for(int i=0;i<SIZE_OF_TABLE;i++) {
			
				hash_value = ++hash_value % SIZE_OF_TABLE;
				
				if(table[hash_value] == key){
					return key;
				}
			}
		}

		return -1;
	}

	void insertINTable(int key) {
	
		int hash_value = hash(key);
		
		if(table[hash_value] == 0 )
			table[hash_value] = key;
		else {
		
			for(int i=0;i<SIZE_OF_TABLE;i++) {
			
				hash_value = ++hash_value % SIZE_OF_TABLE;
				
				if(table[hash_value] == 0){
					table[hash_value] = key;
					break;
				}
			}
		}
	}

	void printTable() {
	
		for(int i=0;i<SIZE_OF_TABLE;i++) {
		
			printf("\t%d\t",i);
			printf("\t%d\n",table[i]);
		}
	}


	void main() {

		//tem arr to store keys for testing purpose only
		int arr[10];

		srand(time(NULL));

		for(int i=0;i<10;i++) {
			int key = rand()%10000;
			arr[i] = key;
			insertINTable(key);
		}

		int idx = searchINTable(arr[5]);
		
		if(idx!= -1)
			printf("%d is found at position %d\n",arr[5],idx);
		else
			printf("%d not found\n",arr[5]);

		printTable();
	}
	
	
