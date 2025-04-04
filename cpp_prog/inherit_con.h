#include<iostream>
#include "inherit.h"
#ifndef INHERIT_CON_H
#define INHERIT_CON_H
using namespace std;
B1::B1(int age,string name){
this->age=age;
this->name=name;
cout<<"Father"<<endl;
}
B2::B2(int age,string name){
this->age=age;
this->name=name;
cout<<"Mother"<<endl;
}
D1::D1(int age,string name):B1(age,name),B2(age,name){
this->age=age;
this->name=name;
B1::age=55;
B1::name="Baba";
B2::age=50;
B2::name="Maa";
cout<<"Child"<<endl;
}
#endif
