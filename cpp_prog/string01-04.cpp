#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	cout<<"String: ";
	cin>>str;
	char str2[100];
	int j=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			str2[j]='A';
			j++;
			str2[j++]='u';
	}
		else{
			str2[j++]=str[i];
		}
	}
	cout<<"New string: "<<str2<<endl;
	return 0;
}
