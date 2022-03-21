#include<iostream>
using namespace std;

int main(){
	int x =10;
	float y=10;

	int *xptr = &x;
	float *yptr = &y;

	cout<< xptr<<endl;
	cout<< yptr<<endl;

}