#include<bits/stdc++.h>
using namespace std;

int c=0;

void f(){
    if(c==5) return;
    cout<<"himesh"<<endl;
    c++;
    f();
}

void f1(int a){
    if(c==a) return;
    cout<<c<<endl;
    c++;
    f1(a);
}
void f2(int a){
    if(0==a) return;
    cout<<a<<endl;
    a--;
    f2(a);
}

void f3(int i,int n)
{
    if(i<n) return;
    
    
    f3(i-1 ,n);
    cout<<i<<endl;
}

void f4(int i,int n){
     if(i>n)return;
     cout<<i<<endl;
    f4(i+1,n);
     

}
int main(){
// f();
// f1(10);
// f3(10,1);
f4(1,10);
}