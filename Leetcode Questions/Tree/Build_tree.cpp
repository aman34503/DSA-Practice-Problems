#include<bits/stdc++.h>
using namespace std;

class node{

public: 
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL; 
	}
};

node* BuildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	node* n= new node(d);
	n->left=BuildTree();
	n -> right = BuildTree();

	return n;
}

int main(){
	node* root = BuildTree();
}