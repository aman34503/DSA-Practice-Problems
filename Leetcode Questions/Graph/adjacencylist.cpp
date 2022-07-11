#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int flag = 1;

	while(flag)
		if(flag==1)
			cout<<N;

		if(flag ==2)
			if(N%2==0)
				cout<<(N/2);
			else
			cout<<(N+1/2);

		if(flag ==3)
			if(n%2==0)
				cout<<n/2;
			else
				cout<<(n+1)/2;

		if(flag==4)
			cout<< 0;
	}


	return 0;
}