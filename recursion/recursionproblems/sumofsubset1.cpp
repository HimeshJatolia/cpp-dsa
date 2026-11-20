#include<bits/stdc++.h>
using namespace std;
 
void f(int i,int sum,vector<int> &arr,vector<int> &ans,int n){

    if(i==n){
        ans.push_back(sum);
        return;
    }
    //yes
    f(i+1,sum+arr[i],arr,ans,n);
    //no
    f(i+1,sum,arr,ans,n);


}

int main(){
    vector<int> ans;
vector<int> arr={1,2,3};
f(0,0,arr,ans,3);
sort(ans.begin(),ans.end());
for(auto it:ans){
    cout<<it<<" ";
}
}

//TC- 2rise   to n and for sort 2 rise to n log 2 rise to n
//sc 2 rise to n