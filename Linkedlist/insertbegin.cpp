#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;


	Node(int data){
		this -> data = data;
		next = NULL; 
	}
};



int main(){

//Statically made the Linked list

	Node n1(1);
	Node* head = &n1;

	Node n2(2);

	n1.next = &n2;

	cout<< head -> data<<endl;
	cout<< n2.data <<endl;


	//Dynamically Made the Linked List

	Node*n3 = new Node(10);
	Node *head = n3;

	Node*n4 = new Node(20);
	n3 -> next = n4;

	cout<<head->data<<endl;
	
	cout<<n4->data<<endl;

	return 0;

}