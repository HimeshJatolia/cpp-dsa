#include<bits/stdc++.h>
using namespace std;

void gcd(int n1,int n2){
   for(int i=1;i<=min(n1,n2);i++){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        cout<<n2;
    }
    else{
        cout<<n1;
    }
   }
}

int main(){

    gcd(52,10);
}