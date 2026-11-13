#include<bits/stdc++.h>
using namespace std;

int fator(int a){

    for(int i=1;i<=a;i++){
        if(a%i==0){
            cout<<i<<" ";
        }
    }
//O(n)
}

int fator1(int a){
    vector<int> a1;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            a1.push_back(i);
            if(i!=a/i){
                a1.push_back(a/i);
            }
        }
    }
    sort(a1.begin(),a1.end());
    for(auto it:a1){
        cout<<it<<" ";
    }

}

int main(){
fator1(16);
}