#include<bits/stdc++.h>
using namespace std;

struct node{
  int val;
  node *next;

  node(int x){
    val =x;
    next = NULL;
  }
};

int main(){
  node *A = new node(5); //5-> NULL
  node *B = new node(6); //6-> NULL
  node *C = new node(7); //7-> NULL

  A->next = B;  // 5->6->NULL
  B->next = C; // 5->6->7->NULL

  node *ptr = A;

  while(ptr != NULL){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
  return 0;
}



//Insert At Beginning 
//Code:

#include<bits/stdc++.h>
using namespace std;

struct node{
  int val;
  node *next;

  node(int x){
    val =x;
    next = NULL;
  }
};

node *head = new node(0);

void insertatbegin(int x){
  node *newnode = new node(x);
  newnode ->next =head;
  head=newnode;
}

void printll(){
  node *ptr= head;
  while(ptr != NULL){
    cout<< ptr->val <<" ";
    ptr = ptr->next;
  }
  cout<< endl;
}

int main(){
  /*
  node *A = new node(5); //5-> NULL
  node *B = new node(6); //6-> NULL
  node *C = new node(7); //7-> NULL

  A->next = B;  // 5->6->NULL
  B->next = C; // 5->6->7->NULL

  node *ptr = A;

  while(ptr != NULL){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
  */

  printll();
insertatbegin(5);
printll();
insertatbegin(6);
printll();
  return 0;
}
