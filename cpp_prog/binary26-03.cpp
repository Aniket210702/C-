#include<iostream>
using namespace std;
int main(){
	int a,num;
	cout<<"Enter the number: ";
	cin>>a;
	for(int i=15;i>=0;i--){
		num=(a>>i)&1;
		cout<<num;
	}
	cout<<endl;
	return 0;
}
