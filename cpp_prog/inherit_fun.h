#include<iostream>
#include "inherit.h"
#include "inherit_con.h"
#ifndef INHERIT_FUN_H
#define INHERIT_FUN_H
void B1::display(){
cout<<"Father age: "<<age<<endl;
cout<<"Father name: "<<name<<endl;
}
void B2::display(){
cout<<"Mother age: "<<age<<endl;
cout<<"Mother name: "<<name<<endl;
}
void D1::display(){
cout<<"Child age: "<<age<<endl;
cout<<"Child name: "<<name<<endl;
cout<<"Parents: "<<endl;
cout<<B1::name<<" "<<B1::age<<endl;
cout<<B2::name<<" "<<B2::age<<endl;
}
#endif
