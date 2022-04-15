#include<bits/stdc++.h>
using namespace std;

int targetsum(int ind, vector<int> &vec, int n,  int sum, int s, int arr[]){
	if( ind == n){
		if(s == sum){
			for(auto it : vec)
				cout<<it<<endl;
			}
			return 0;
	}
	vec.push_back(arr[ind]);
	s+=arr[ind];
	targetsum(ind+1,vec,s,sum,arr,n);
	s-=arr[ind];
	vec.pop_back();

		targetsum(ind+1,vec,s,sum,arr,n);

}


int main(){
	int arr[] = {3,1,2,546,47,234,6456};
	int n = 7;
	int sum = 5;
	vector<int> vec;
	targetsum(0,vec,arr,n,0,sum);
}