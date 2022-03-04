#include<iostream>
using namespace std;

void rowsum(int arr[m][n]){
	
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=0; j<m; j++){
		sum += arr[i][j];	
		}
		// arr[i] + arr[i+1] = sum;
		cout<<sum<<" ";
	}
	cout<<endl;

}

int main(){

	int n;
	cin>>n;
	int m;
	cin>>m;
	int arr[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	 rowsum(arr);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<' ';
		}cout<<endl;
	}

}