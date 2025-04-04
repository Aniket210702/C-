#include<iostream>
using namespace std;
void getbits(int num,int p,int n){
	cout<<"Extracted "<<n<<" bits: ";
	for(int i=0;i<n;i++){
		cout<<((num>>(p-i))&1);
	}
	cout<<endl;
}
int main(){
	int num,pos,n;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Enter the starting position: ";
	cin>>pos;
	cout<<"Enter the number of bits to be printed: ";
	cin>>n;
	getbits(num,pos,n);
	return 0;
}
