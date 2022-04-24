#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<string, int>menu;

	menu["maggi"] = 50;
	menu["tea"] = 12;
	menu["pizza"] = 500;

	string item;
	cin>>item;

	if(menu.count(item) == 0)
		cout<<item <<" "<<"is not available";

	else
		cout<<item <<"is available"<<" "<<menu[item]<<endl;

	return 0;
}