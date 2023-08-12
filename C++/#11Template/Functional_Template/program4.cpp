	
//linked list using template

	#include<iostream>

	template<typename T>
	struct Node{
	
		T data;
		struct Node *next;
	};

	template<typename T>
	Node<T>* createNode() {
		
		Node<T> *newNode = (Node<T>*)malloc(sizeof(Node<T>));
	
		std::cout << "Enter data:";
		std::cin >> newNode->data;
		newNode->next = NULL;

		return newNode;
	}
	
	template<typename T>
	void addFirst(Node<T> **head) {

		Node<T> *newNode = createNode<T>();

		newNode->next = *head;
		*head = newNode;
	}

	template<typename T>
	void addLast(Node<T> **head){
	
		Node<T> *newNode = createNode<T>();

		Node<T> *tmp = *head;
		
		while(tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = newNode;
	}

	
	template<typename T>
	void deleteFirst(Node<T> **head) {
	
		Node<T> *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	template<typename T>
	void deleteLast(Node<T> **head) {
	
		Node<T> *tmp = *head;

		if((*head)->next == NULL) {
			
			free(tmp);
			*head = NULL;
		}else{
		
			while(tmp->next->next != NULL)
				tmp = tmp->next;

			free(tmp->next);

			tmp->next = NULL;
		}
	}

	template<typename T>
	void printList(Node<T> **head) {
	
		if(*head == NULL) {
		
			std::cout << "List is empty\n";
			return;
		}

		Node<T> *tmp = *head;

		while(tmp != NULL) {
		
			std::cout << tmp->data <<" ";
			tmp = tmp->next;
		}

		std::cout << std::endl;
	}

	int main() {
	
		Node<int> *head = NULL;

		/*
		std::cout << "Adding data at first\n";
		for(int i=0;i<5;i++)
			addFirst<int>(&head);
		
		std::cout << "Adding data at last\n";
		for(int i=0;i<5;i++)
			addLast<int>(&head);
	*/
		addFirst(&head);

		//deleteFirst(&head);
		printList<int>(&head);
		
		deleteLast(&head);
		printList<int>(&head);

		return 0;	
	}
