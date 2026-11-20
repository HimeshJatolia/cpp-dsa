#include<bits/stdc++.h>
using namespace std;
//combination 
void f(int i,int arr[],vector<int> &s,int n,int target,int sum){
    if(sum > target) return;
    if(i==n){
        
        if(sum==target){
        for(auto it:s){
            cout<<"["<<it<<"]"<<" ";
        }
        cout<<endl;
        }

        return;
    }

    f(i+1,arr,s,n,target,sum);
    s.push_back(arr[i]);
    sum=sum+arr[i];
    f(i,arr,s,n,target,sum);
    s.pop_back();

}

int main(){
    int i=0;
    int sum=0;
    int target=2;
    vector<int> s;
int arr[3]={1,2,3};
f(i,arr,s,3,target,sum);
}