#include<iostream>
using namespace std;
int sumofdigits(int num){
	int sum=0;
	while(num>0){
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if(num<0){
		num=-num;
	}
	cout<<"Sum of digits: "<<sumofdigits(num)<<endl;
	return 0;
}
