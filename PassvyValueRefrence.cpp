#include<iostream>
using namespace std;

//Pass By Refrence memory address passes Only!
int income(int & n) {
	float tax =0.10;
	n  = n - n *tax;

}

// Pass By Value -> It creates Two Copies in Call Stack.

// int income(int  n) {
// 	float tax =0.10;
// 	n  = n - n *tax;

// }

int main(){
	int n;
	cin>>n;

	income(n);
	cout<< n <<endl;
}