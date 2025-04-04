#include "inherit.h"
#include "inherit_con.h"
#include "inherit_fun.h"
#include<iostream>
#include<cstring>
int main(){
cout<<"Child class is called."<<endl;
D1 C(22,"Aniket");
C.display();
return 0;
}
