#include<bits/stdc++.h>
using namespace std;

void print(set<string>&set){

	for(auto it = set.begin(); it != set.end(); it++){
		cout<< (*it) <<endl;
	}
}


int main(){
	set<string>set;
	
	set.insert("abc");
	set.insert("ac");
	set.insert("ac");
	set.insert("asdbc");
	print(set);
}