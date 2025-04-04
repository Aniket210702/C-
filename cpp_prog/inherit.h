#ifndef INHERIT_H
#define INHERIT_H
#include<string>
using namespace std;
class B1{
public:
int age;
string name;
B1(int age, string name);
void display();
};
class B2{
public:
int age;
string name;
B2(int age, string name);
void display();
};
class D1:protected B1, private B2{
public:
int age;
string name;
D1(int age, string name);
void display();
};
#endif
