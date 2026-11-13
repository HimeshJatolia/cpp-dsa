#include<bits/stdc++.h>
using namespace std;

int revnum(int n){
    int temp=0;
    int num=0;
    while(n>0){
        temp=n%10;
        num=(num*10)+temp;
        n=n/10;
    }
    return num;
}

int main(){

    cout<<"Reverse is :"<<revnum(768);
}