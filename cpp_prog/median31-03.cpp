#include<iostream>
using namespace std;
int getk(int a[],int n,int k){
	for(int i=0;i<n;i++){
		int count=0;
		int equal_count=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				equal_count++;
			}
			if(a[j]<a[i]){
				count++;
			}
		}
		if(count==k||(count<k && (count+equal_count)>k)){
			return a[i];
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	float median;
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2){
		median=getk(a,n,n/2);
	}
	else{
		median=getk(a,n,n/2)+getk(a,n,(n/2)-1);
		median/=2;
	}
	cout<<"Median is: "<<median<<endl;
	return 0;
}
