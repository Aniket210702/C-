#include<iostream>
using namespace std;
void minmax(int arr[],int size, int &min,int &max){
	min=max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min,max;
	minmax(arr,n,min,max);
	cout<<"Largest number of the array: "<<max<<endl;
	cout<<"Smallest number of the array: "<<min<<endl;
	return 0;
}
