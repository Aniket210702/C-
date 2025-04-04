#include<iostream>
using namespace std;
void printbin(int num){
	bool a;
	for(int i=7;i>=0;i--){
		a=((num>>i)&1);
		cout<<a;
	}
}
void getbits(int num,int n,int pos,int val){
	cout<<"Extracted "<<n<<" bits: "<<endl;
	printbin(num);
	cout<<endl;
	for(int i=pos;i>(pos-n);i--){
		num=num&~(1<<i);
	}
	val=val<<(pos-n+1);
	num=num|val;
	cout<<"After updating, the number is: "<<endl;
	printbin(num);
	cout<<endl;
}
int main(){
	int w,x,y,z;
	cout<<"Enter the number: ";
	cin>>w;
	cout<<"Enter the number of bits to replaced: ";
	cin>>x;
	cout<<"Enter the starting position: ";
	cin>>y;
	cout<<"Enter the value to be replaced in the number: ";
	cin>>z;
	getbits(w,x,y,z);
	return 0;
}
