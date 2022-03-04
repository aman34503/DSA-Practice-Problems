#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string> p;
	pair<int, string>p1;
	// Methods to create Pair
	p=make_pair(2, "AmAN");
	p1 = {34, "jio"};

	//Swap b/w Functions -> 
	p.swap(p1);

	//Print the Output -> 
	cout<<p.first << " " << p.second <<endl;
	cout<<p1.first << " " << p1.second <<endl;
}