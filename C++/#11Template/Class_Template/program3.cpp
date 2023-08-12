
	#include<iostream>

	template<typename T>
	struct Node {	
		T data;
		Node *next;
	};
	
	template<typename T>
	struct DNode {	
		T data;
		DNode *next,*prev;
	};

	template<typename T>
	class LinkedList {
	
		Node<T> *head = NULL;
		int count=0;

		public:

			Node<T>* createNode();
			void printList();
			
			void addFirst();
			void addLast();
			void addAtPos();
	
			void deleteFirst();
			void deleteLast();
			void deleteAtPos();

	};
	
	template<typename T>
	class LinkedList1 {
	
		DNode<T> *head = NULL;
		int count=0;

		public:

			DNode<T>* createNode();
			void printList();
			
			void addFirst();
			void addLast();
			void addAtPos();
	
			void deleteFirst();
			void deleteLast();
			void deleteAtPos();

	};
	
			template<typename T>
			DNode<T>* LinkedList1<T>::createNode() {
			
				DNode<T> *newNode = new DNode<T>();

				std::cout << "Enter data:";
				std::cin >> newNode->data;
				newNode->next = newNode->prev = NULL;
				
				
				return newNode;	
			}


			template<typename T>
			void LinkedList1<T>::addFirst() {
			
				DNode<T>*newNode = createNode();
				
				
				if(head == NULL) {
					head = newNode;	

				}else {

					head->prev = newNode;
					newNode->next = head;
					head = newNode;
				
				}
				count++;
			}

			
			template<typename T>
			void LinkedList1<T>::addLast() {
			
				DNode<T>*newNode = createNode();

				if(head == NULL) {
				
					head = newNode;
				}else {
				
					DNode<T> *tmp = head;

					while(tmp->next != NULL)
						tmp = tmp ->next;

					tmp->next = newNode;
					newNode->prev = tmp;
				}
				count++;
			}
	
			template<typename T>
		       	void LinkedList1<T>::addAtPos() {
			
				int pos ;
				std::cout << "Enter poition";
				std::cin >> pos;
	
				if(pos < 1 || pos > count+1) {
				
					std::cout << "INVALID POSITION" << std::endl;
				}else if(pos == 1) {
				
					addFirst();
				}else if(pos == count+1) {
				
					addLast();
				}else {
				
					DNode<T> *newNode = createNode();
					DNode<T> *tmp = head;

					while(pos-2) {
						
						tmp = tmp->next;
						pos--;			
					}

					newNode->next = tmp->next;
					newNode->prev = tmp;
					tmp->next = newNode;
					
				}

				count++;
			}

			template<typename T> 
			void LinkedList1<T>::deleteFirst() {
				
				DNode<T> *tmp = head;
				head = head->next;
				head->prev = NULL;

				free(tmp);

				count--;
			}

			template<typename T>
			void LinkedList1<T>::deleteLast(){

				DNode<T> *tmp = head;

				while(tmp->next->next != NULL)
					tmp = tmp->next;

				free(tmp->next);

				tmp->next = NULL;
				
				count--;		
			}
	
			template<typename T>
			void LinkedList1<T>::deleteAtPos() {
		
				int pos ;
				std::cout << "Enter poition";
				std::cin >> pos;
	
				if(pos < 1 || pos > count) {
				
					std::cout << "INVALID POSITION" << std::endl;
				}else if(pos == 1) {
				
					deleteFirst();
				}else if(pos == count) {
				
					deleteLast();
				}else {
				
					DNode<T> *tmp = head;

					while(pos-2) {
						
						tmp = tmp->next;
						pos--;			
					}

					DNode<T> *tmp1 = tmp->next;

					tmp->next = tmp->next->next;
					free(tmp->next->prev);
					tmp->next->prev = tmp;
					
				}

				count--;
			}			

			
			template<typename T>
			void LinkedList1<T>::printList() {
			
				if(head == NULL) {
				
					std::cout << "List is empty" << std::endl;
				}else {
				
					DNode<T> *tmp = head;

					
					std::cout<<"\n=============================\n";
					while(tmp->next != NULL) {
					
						std::cout << tmp->data << "->";
						tmp = tmp->next;
					}
					std::cout << tmp->data << std::endl;
					
					std::cout<<"=============================\n";

				}
			}

			
			template<typename T>
			Node<T>* LinkedList<T>::createNode() {
			
				Node<T> *newNode = new Node<T>();
				
				std::cout << "Enter data:";
				std::cin >> newNode->data;
				newNode->next =  NULL;
				return newNode;	
			}
			

			template<typename T>
			void LinkedList<T>::addFirst() {
			
				Node<T>*newNode = createNode();

				newNode->next = head;
				head = newNode;
				
				count++;
			}

			
			template<typename T>
			void LinkedList<T>::addLast() {
			
				Node<T>*newNode = createNode();

				if(head == NULL) {
				
					head = newNode;
				}else {
				
					Node<T> *tmp = head;

					while(tmp->next != NULL)
						tmp = tmp ->next;

					tmp->next = newNode;
				}
				count++;
			}
	
			template<typename T>
		       	void LinkedList<T>::addAtPos() {
			
				int pos ;
				std::cout << "Enter poition";
				std::cin >> pos;
	
				if(pos < 1 || pos > count+1) {
				
					std::cout << "INVALID POSITION" << std::endl;
				}else if(pos == 1) {
				
					addFirst();
				}else if(pos == count+1) {
				
					addLast();
				}else {
				
					Node<T> *newNode = createNode();
					Node<T> *tmp = head;

					while(pos-2) {
						
						tmp = tmp->next;
						pos--;			
					}

					newNode->next = tmp->next;
					tmp->next = newNode;
					
				}

				count++;
			}

			template<typename T> 
			void LinkedList<T>::deleteFirst() {
				
				Node<T> *tmp = head;
				head = head->next;

				free(tmp);

				count--;
			}

			template<typename T>
			void LinkedList<T>::deleteLast(){

				Node<T> *tmp = head;

				while(tmp->next->next != NULL)
					tmp = tmp->next;

				free(tmp->next);

				tmp->next = NULL;
				
				count--;		
			}
	
			template<typename T>
			void LinkedList<T>::deleteAtPos() {
		
				int pos ;
				std::cout << "Enter poition";
				std::cin >> pos;
	
				if(pos < 1 || pos > count) {
				
					std::cout << "INVALID POSITION" << std::endl;
				}else if(pos == 1) {
				
					deleteFirst();
				}else if(pos == count) {
				
					deleteLast();
				}else {
				
					Node<T> *tmp = head;

					while(pos-2) {
						
						tmp = tmp->next;
						pos--;			
					}

					Node<T> *tmp1 = tmp->next;

					tmp->next = tmp1->next;
					free(tmp1);
					
				}

				count--;
			}		
			
			template<typename T>
			void LinkedList<T>::printList() {
			
				if(head == NULL) {
				
					std::cout << "List is empty" << std::endl;
				}else {
				
					Node<T> *tmp = head;

					
					std::cout<<"\n=============================\n";
					while(tmp->next != NULL) {
					
						std::cout << tmp->data << "->";
						tmp = tmp->next;
					}
					std::cout << tmp->data << std::endl;
					
					std::cout<<"=============================\n";

				}
			}

			

	int main() {

		LinkedList1<int> obj;

		int ch;

		while(1) {
		
			std::cout << "\n---------------------------------\n";
			std::cout << "1.addFirst" << std::endl;
			std::cout << "2.addLast" << std::endl;
			std::cout << "3.addAtPos" << std::endl;
			std::cout << "4.deleteFirst" << std::endl;
			std::cout << "5.deleteLast" << std::endl;
			std::cout << "6.deleteAtPos" << std::endl;
			std::cout << "7.printList" << std::endl;
			std::cout << "8.exit" << std::endl;
			std::cout << "\n---------------------------------\n";
		
			std::cout << "\nSelect any option:";
			std::cin >> ch;

			switch(ch) {
				
				case 1:
					obj.addFirst();
					break;
				case 2:
					obj.addLast();
					break;
				case 3:
					obj.addAtPos();
					break;
				case 4:
					obj.deleteFirst();
					break;
				case 5:
					obj.deleteLast();
					break;
				case 6:
					obj.deleteAtPos();
					break;
				case 7:
					obj.printList();
					break;
				case 8:
					exit(0);
					break;

			}
		}

		return 0;
	}
