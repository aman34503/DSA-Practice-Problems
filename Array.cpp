#include <iostream>
using namespace std;

int main(){

	int marks[100];

	marks[0] = 34;

	int n;
	int i;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>marks[i];
	}

	for(int i=1; i<n; i++){
		cout<<marks[i]<<endl;
	}
	cout<< n*2 <<endl;
	
	return 0;
}