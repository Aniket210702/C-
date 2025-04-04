#include<iostream>
using namespace std;
int manualcmp(const char str1[],const char str2[]){
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			return str1[i]-str2[i];
		}
		i++;
	}
	return str1[i]-str2[i];
}
void manualconcat(char str1[],const char str2[]){
	int i=0,j=0;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}
void manualcopy(char str1[],const char str2[]){
	int i=0;
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
}
int main(){
	char str1[50],str2[50],str3[100],str4[50];
	cout<<"First String: ";
	cin>>str1;
	cout<<"Second String: ";
	cin>>str2;
	int cmpresult=manualcmp(str1,str2);
	if(cmpresult==0){
		cout<<"String 1 and String 2 are same."<<endl;
	}
	else if(cmpresult<0){
		cout<<"String 1 is smaller than String 2 based on ASCII value."<<endl;
	}
	else{
		cout<<"String 1 is larger than String 2 based on ASCII value."<<endl;
	}
	manualcopy(str3,str1);
	manualconcat(str3,str2);
	cout<<"Concatenated String: "<<str3<<endl;
	manualcopy(str4,str1);
	cout<<"Copied string from String 1: "<<str4<<endl;
	return 0;
}
