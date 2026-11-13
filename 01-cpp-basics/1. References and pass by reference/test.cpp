#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a = 10;
int* p = &a;
*p = 25;
cout << *p<<"\n"<<p<<"\n";
cout << a<<"\n"<<&a;


}