#include<bits/stdc++.h>
using namespace std;



int printsub(int ind, vector<int> &vec, int arr[],int n ){
		if(ind == n) {
			for(auto it : vec){
				cout<< it << " ";
			}
			if(vec.size() == 0){
				cout<<"{}"<<endl;
			}
			cout<<endl;
			return 0;
		}
		// Pick in The Vector

		vec.push_back(arr[ind]);
		printsub(ind+1,vec,arr,n);
		
		vec.pop_back();
			// Not Pick in The Vector
		printsub(ind+1,vec,arr,n);
}

int main(){
	int arr[] = {3,1,2,546,47,234,6456};
	int n = 7;
	vector<int> vec;
	printsub(0,vec,arr,n);
}