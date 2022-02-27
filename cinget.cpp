#include <iostream>
using namespace std;

int main(){
	char temp;
	  temp = cin.get();

	 int digits =0;
	 int alphabets =0;
	 int spaces =0;

	int len = 1;
	while(temp != '\n'){
				cout<<temp;
		temp =cin.get();

		if(temp>='0' and temp<='9'){
			digits++;
		}
		if((temp>='a' and temp<='z') or (temp>='A' and temp<='Z')) {
			alphabets++;
		}
		if(temp>=' ' and temp<='\n'){
			alphabets++;
		}
		temp = cin.get();
	}
	cout<<"Alphabets are"<<alphabets<<endl;
	cout<<"Digits are"<<digits<<endl;
	cout<<"spaces are"<<spaces<<endl;
	
return 0;
}