#include<bits/stdc++.h>
using namespace std;

int sum1(int n){
     if(n<1) return 1;
     return n*sum1(n-1);
 }

 int main(){
cout<<sum1(5);
 }