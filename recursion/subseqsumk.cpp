#include<bits/stdc++.h>
using namespace std;


bool f(int i,int arr[],vector<int> &s,int n,int k,int sum){
    if(i==n){
        if(sum==k){
            
            for(auto it:s){
            cout<<it<<" ";
            
        }

        cout<<endl;
        return true;
        }
        
        return false;
    }
    if(f(i+1,arr,s,n,k,sum)==true) return true;
    s.push_back(arr[i]);
    sum=sum+arr[i];
    if(f(i+1,arr,s,n,k,sum)==true) return true;
    s.pop_back();
    return  false;
}

int main(){
    int arr[3]={1,2,1};
    vector<int> s;
    f(0,arr,s,3,2,0);

}