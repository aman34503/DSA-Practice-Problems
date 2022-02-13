#include <iostream>
using namespace std;



void reverse(int n){
	if(n != 1){
		return ;
	}
	reverse(n-1);
	cout<<n<<endl;

}

int main(){
	reverse(12);

}
