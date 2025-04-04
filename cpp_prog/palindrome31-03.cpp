#include<iostream>
#include<cstring>
using namespace std;
void strcopy(const char *source, char *dest){
	while(*source){
		*dest=*source;
		source++;
		dest++;
	}
	*dest='\0';
}
void strrev(char *str, int length){
	int left=0;
	int right=length-1;
	while(left<right){
		swap(str[left],str[right]);
		left++;
		right--;
	}
}
bool ispal(const char *og,const char *rev){
	while(*og&&*rev){
		if(*og!=*rev){
			return false;
		}
		og++;
		rev--;
	}
	return true;
}
int main(){
	char choice;
	do{
		char str[100];
		cout<<"Enter the string: ";
		cin>>str;
		char *copy=new char[strlen(str)+1];
		strcopy(str,copy);
		char *rev=new char[strlen(str)+1];
		strcopy(str,rev);
		strrev(rev,strlen(str));
		if(ispal(copy,rev)){
			cout<<"The string is palindrome."<<endl;
		}
		else{
			cout<<"The string is not palindrome."<<endl;
		}
		delete[]copy;
		delete[]rev;
		cout<<"Do you want to continue?(y/n): ";
		cin>>choice;
	}while(choice=='Y'||choice=='y');
	cout<<"Exit"<<endl
	return 0;
}
