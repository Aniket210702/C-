#include<iostream>
using namespace std;
double avg(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return (double)sum/size;
}
int main(){
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Average of the elements: "<<avg(arr,n)<<endl;
	return 0;
}
