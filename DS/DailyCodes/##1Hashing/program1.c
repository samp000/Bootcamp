
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<stdbool.h>
	#define TABLE_SIZE 10

	typedef struct Node {

		char *name;
		int age;
		struct Node *next,*prev;

	}Node;

	//creating HASHTABLE of specific size
	Node* table[TABLE_SIZE];
	
	Node* createNode(char *name,int age)  {

		Node *newNode = (Node*)malloc(sizeof(Node));
		newNode->name = name;
		newNode->age = age;
		newNode->next = newNode->prev = NULL;

		return newNode;
	}

	//func() make all the fields "NULL" initially
	void iniTable() {
	
		for(int i=0;i<TABLE_SIZE;i++)
			table[i] = NULL;
	}

	
	//hash function calculates hash value based on string 
	int hash(char *key) {

		unsigned int hash_value = 0;
		
		for(int i=0;i<strlen(key);i++) {
		
			hash_value = hash_value + key[i];
			hash_value = (hash_value*key[i]) % TABLE_SIZE;
		
		}
	
		return hash_value ;
	}

	//this funxtion findx key in hashtable if present return its address
	Node* lookup(char *key) {
	
		int table_indx = hash(key);

		//key is present or missing
		if(table[table_indx] != NULL) { 
			//searching in list
			Node *tmp = table[table_indx];

			while(tmp != NULL) {
			
				if(strcmp(tmp->name,key) == 0)
					return tmp;
				tmp = tmp->next;
			}
		}

		return NULL;
	}

	//function adds value in hashtable
	void put(char *name,int age) {
	
		//taht means element is alredy present
		if(lookup(name) != NULL)
			return;

		int tableIndx = hash(name);
		

		//printf("hash_value:%d of %s\n",tableIndx,name);

		Node *ele = createNode(name,age);

		
		
		//this acts as a head of linked list
		Node **head = &table[tableIndx];

		if(*head != NULL){
			
			ele->next = *head;
			(*head)->prev = ele;
			*head = ele;
		}else {
		
			*head = ele;
		}
	}

	
	void printTable() {
	
		for(int i=0;i<TABLE_SIZE;i++) {
		
			if(table[i] == NULL) {
			
				printf("%d\tNULL",i);
			}else {
			
				//printing list 
				Node *tmp = table[i];


				printf("%d\t",i);
				while(tmp->next != NULL) {
				
					printf("||%s|%d||->  ",tmp->name,tmp->age);
					tmp = tmp->next;
				}
					
				printf("||%s|%d||",tmp->name,tmp->age);
			}
			


			printf("\n\n");
		}
	}

	void main() {
	
		//initializing HASHTABLE (i.e setting all fields "NULL")
		iniTable();
		printTable();

		printf("\n\n===========\n");
	
		put("Sandesh",21);
		put("Ayush",22);
		put("Suraj",21);
		put("Avishkar",21);
		put("Suyog",22);
		put("Omkar",24);
		
		printTable();
		
	}
