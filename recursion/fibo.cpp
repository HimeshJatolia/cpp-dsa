#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1) return n;
    int l=f(n-1);
    int sl=(n-2);
    return l+sl;
}

int main(){
    cout<<f(3);
}