Linked list structure:


struct node{

	struct node *prev; 
	int data;
	struct node *next;
}


Program 1.
-------------
Write a program that searches for the first occurrence of a particular element from a doubly linked list.
Submit with a proper diagram. 
Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input: Enter element: 30
Output: 3


Program 2.
-------------
Write a program that searches for the second last occurrence of a particular element from a doubly linked list. Submit with a proper diagram.
Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input Enter element: 30
Output: 5

Program 3.
------------
Write a program that searches the occurrence of a particular element from a doubly linked list. Submit with a proper diagram.
Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input Enter element: 30 
Output: 2 times

Program 4.
-----------
Write a program that adds the digits of a data element from a doubly linked list and changes the data. (sum of data element digits) Submit with a proper diagram.
Input linked list: |11|->|12|->|13|->|141|->|2|->|158| 
Output linked list: |2|->|3|->|4|->|6|->|2|->|14|

Program 5.
-----------
Write a program that searches all the Palindrome data elements from a doubly linked list. 
And Print the position of palindrome data Submit with a proper diagram. 
Input: linked list: |12|->|121|->|30|->|252|->|35|->|151|->|70|
Output:
Palindrome found at 2 
Palindrome found at 4
Palindrome found at 6

============================================================================================================================================================
struct node{
	struct node *prev;
	char str[20];
	struct node *next;
};


Program 6.
-----------
Write a program that accepts a doubly linked list from the user. Take a number from the user and print the data of the length of that number. 
Length of kanha 5 Submit with a proper diagram.

Input: 
linked list: |Shashi|->|Ashish|-> Kanha|->|Rahul|->|Badhe|
Input: Enter Length 5

Output

Kanha
Rahul
Badhe

Program 7.
-----------
Write a program that accepts a doubly linked list from the user.Reverse the data elements from the linked list. 
Submit with a proper diagram.

Input: 
linked list |Shashi|-> |Ashish|->|Kanha|->|Rahul|->|Badhe|
Output linked list
|ihsahS|->|hsihsA|->|Jahnak|->|luhaR|->|ehdaB|


Program 8.
-----------
Write a program that accepts a doubly linked list from the user. Take a number from the user and keep the elements equal in length to that number and delete other data 
elements. And print the Linked list

Input: 
linked list |Shashi|-> |Ashish|->|Kanha|->|Rahul|->|Badhe|
Length of length = 6 

Output:
linked list |Shashi|-> |Ashish
