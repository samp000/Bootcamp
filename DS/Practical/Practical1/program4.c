
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdbool.h>

	typedef struct Demo {
	
		int data;
		struct Demo *next;

	}Demo;

	Demo *head = NULL;

	void addNode() {
	
		Demo *newNode = (Demo*)malloc(sizeof(Demo));
		
		printf("Enter data:");
		scanf("%d",&newNode->data);
		
		newNode->next = NULL;

		if(head == NULL)
			head = newNode;
		else {
		
			Demo *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		Demo *tmp = head;

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->next;
		}

		printf("NULL\n");
	}

	int nodeSum() {
	
		int sum=0;
		Demo *tmp = head;

		while(tmp != NULL) {
		
			sum+=tmp->data;
			tmp = tmp->next;
		}

		return sum;
	}

	int firstNLastSum() {
	
		int sum=0;
		Demo *tmp = head;

		if(tmp == NULL) {
			return -1;
		} else if(tmp->next == NULL) {
		
			return tmp->data;
		}else {	
			sum+=tmp->data;
		}

		while(tmp->next != NULL)
			tmp = tmp->next;

		sum+=tmp->data;

		return sum;
	}
	
	int maxData() {
	
		int max=0;

		Demo *tmp = head;
		
		if(tmp == NULL) {
			return -1;
		} else if(tmp->next == NULL) {
			return tmp->data;
		}

		while(tmp != NULL) {
		
			if(max < tmp->data)
				max = tmp->data;

			tmp = tmp->next;
		}

		return max;
	}

	int minData() {
	
		int min=999999;
		Demo *tmp = head;
		
		if(tmp == NULL) {
			return -1;
		} else if(tmp->next == NULL) {
			return tmp->data;
		}

		while(tmp != NULL) {
		
			if(min > tmp->data)
				min = tmp->data;

			tmp = tmp->next;
		}

		return min;
	}

	bool isPrime(int n) {
	
		int cnt=0;

		for(int i=2;i<n;i++) {
		
			if(n%i==0)
				cnt++;
		}

		if(cnt <= 1)
			return true;

		return false;
	}

	bool isPrimePresent() {

		Demo *tmp = head;

		while(tmp != NULL) {
		
			if(isPrime(tmp->data))
				return true;
		
			tmp = tmp->next;
		}

		return false;
	}



	void main() {

		int n;
		printf("How much nodes you want to create:");
		scanf("%d",&n);

		for(int i=0;i<n;i++)
			addNode();
		
		printList();

		printf("Sum of data of all nodes:%d\n",nodeSum());
		printf("Sum of data of first and last nodes:%d\n",firstNLastSum());
		printf("Maximum data in list is %d\n",maxData());
		printf("Minimum data in list is %d\n",minData());
	
		if(isPrimePresent())
			printf("Prime no is present in list\n");
		else
			printf("Prime no is not present in list\n");
	}

