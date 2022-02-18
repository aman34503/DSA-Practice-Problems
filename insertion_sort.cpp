#include <iostream>
using namespace std;

int insertion_sort(int a[], int n){

for(int i=0; i<n; i++){
	int current = a[i];

	int prev = i-1;

	while(prev >= 0 && a[prev] > current){
		a[prev+1] = a[prev];
		prev = prev-1;
	}

	a[prev+ 1] = current;  
} 


return 0;
}


int main(){
	int n;
	cin>>n;
		int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	insertion_sort(a, n);

	for(int i= 0; i<n; i++){
		cout<<a[i]<<endl;
	}

	return 0;
}