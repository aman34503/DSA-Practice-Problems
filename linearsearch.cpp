#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int target){
	for(int i=0; i<n; i++){
		if(arr[i] == target){
			return i;
		}
		
	}
	return -1;
}

int Binarysearch(int arr[], int n, int target){
	int start = 0;
	int end = n-1;

	while(start<=end){
		int middle = (start+end)/2;
		if(arr[middle] == target)
			return middle;
		else if(arr[middle]>target){
			end =middle-1;
		}
		else{
			start = middle+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int target;
	cin>>target;
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	// int index = linearsearch(arr, n, target);
	int index = Binarysearch(arr, n, target);
	if(index != -1){
		cout<<target<<" present at "<<index<<endl;
	}
	else{
		cout<<target<<"/n"<<" not found"<<endl;
	}

	return 0;
}