#include<iostream>
using namespace std;
void getbits(int num,int n){
	cout<<"Extracted "<<n<<" bits: ";
        for(int i=n-1;i>=0;i--){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}
int main(){
	int num,n;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Enter the number of bits to be extracted: ";
	cin>>n;
	getbits(num,n);
	return 0;
}
