#include<iostream>
using namespace std;


void numbers(int n){
	if(n<=0){
		return ;
	}
	numbers(n-1);
	cout<<n<<endl;
}


void reverse(int n){
	if(n <= 0){
		return;
	}
	cout<<n<<endl;
	reverse(n-1);
}



int fibonnaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonnaci(x-1)+fibonnaci(x-2));
   }
}



int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

// int a,b;
// cin>>a>>b;
// cout<<a+b;

 numbers(45);	
 // reverse(23);

	// int x;
	// int i=0;
	// cin>>x;

	// while(i<x) {
	// 	cout<<" ";
	// 	cout<< fibonnaci(i);
	// 	i++;
	// }

return 0;
}


