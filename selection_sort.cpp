#include <iostream>
using namespace std;

int selection_sort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int current = a[i];
		int min_pos = i;

		for(int j=i; j<n; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[min_pos], a[i]);
	}
}



int main(){
	int n;
	cin>>n;
		int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	selection_sort(a, n);

	for(int i= 0; i<n; i++){
		cout<<a[i]<<endl;
	}

	return 0;
}