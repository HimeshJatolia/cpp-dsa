#include<bits/stdc++.h>
using namespace std;


int f(int i,int arr[],int n,int k,int sum){
    if(i==n){
        if(sum==k){
          return 1;  
        }
        return 0;
    }
    int l=f(i+1,arr,n,k,sum);
    sum=sum+arr[i];
    int r=f(i+1,arr,n,k,sum);
    return  l+r;
}

int main(){
    int arr[3]={1,2,1};
    vector<int> s;
    cout<<f(0,arr,3,2,0);

}