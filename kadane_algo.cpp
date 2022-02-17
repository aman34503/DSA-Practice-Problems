#include<iostream>
using namespace std;

int kadane( int arr[], int n){
	int current = 0;
	int max_sum = 0;
	for(int i=0; i<n; i++){
		current = current +arr[i];
		if(current<0){
			current =0;
		}
		max_sum = max(max_sum, current);
	}		
	return max_sum;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<kadane(arr, n) <<endl;
	

	return 0;
}