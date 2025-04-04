#include<iostream>
using namespace std;
int main(){
	unsigned int a;
	cout<<"Enter the value: ";
	cin>>a;
	int org=a;
	int count=0;
	for(int i=0;i<sizeof(a);i++){
		bool m=a&1;
		if(m==1){
			count++;
		}
		a=a>>1;
	}
	cout<<"Number of setbits: "<<count<<endl;
	return 0;
}
