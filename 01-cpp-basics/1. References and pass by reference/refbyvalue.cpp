#include<iostream>
#include<conio.h>
using namespace std;

int change(int &x){
    x=100;
}
int main(){
    int a=369;
    cout<<a<<endl;
    change(a);
    cout<<a;

}