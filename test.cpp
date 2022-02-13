#include<iostream>
using namespace std;


bool isarraysorted(int arr[], int n){
	if(n==1 || n==0){
		return true;
	}
	if(arr[0] > arr[1]) {
		return false;
	}

	bool isSmallerSorted = isarraysorted(arr + 1, n-1);
	return isSmallerSorted
}

int main(){
	int n;
	cin>>n;

	if(n%2==0){
		cout<<n;
	}
	else{
		cout<<n+5<<endl;
	}
	
	return 0;
}