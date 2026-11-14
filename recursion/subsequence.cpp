#include<bits/stdc++.h>
using namespace std;

void f(int i,int arr[],vector<int> &s,int n){
    if(i==n){
        for(auto it:s){
            cout<<it<<" ";
            
        }
        if(s.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //not selected a[i]
    f(i+1,arr,s,n);
    s.push_back(arr[i]);
    //selected a[i]
    f(i+1,arr,s,n);
    s.pop_back();

}

int main(){
    int arr[3]={33,44,55};
    vector<int> s;
    f(0,arr,s,3);    
}