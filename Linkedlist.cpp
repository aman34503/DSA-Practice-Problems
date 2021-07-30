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
