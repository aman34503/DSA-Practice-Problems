#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
	cout<< "Vector Size "<<v.size()<<endl;
	for(int i=0; i<v.size(); i++){
		cout <<v[i] <<" ";
		

		
	}
	cout<<endl;
}


int main(){
	vector<int>v;
	// int n;
	// cin>>n;
	// for(int i=0; i<n; i++){
	// 	cout<<v.size()<<endl;
	
	// 	int x;
	// 	cin>>x;
	// 	v.push_back(x);
	// }

	v.push_back(45);
	v.push_back(34);

	vector<int>v2 = v; // O(N) Complexity Because make a copy of every vector
	v2.push_back(5);
	
	printvec(v);
	printvec(v2);

}