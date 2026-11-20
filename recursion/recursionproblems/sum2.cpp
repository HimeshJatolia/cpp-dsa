#include<bits/stdc++.h>
using namespace std;

void f(int indx,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int target){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    if(indx==arr.size()){
        return;
    }
    for(int i=indx;i<arr.size();i++){
        if(arr[i]==arr[i-1] && i>indx) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        f(i+1,arr,ds,ans,target-arr[i]);
        ds.pop_back();
    }


}

int main(){
vector<int> ds;
vector<int> arr={1,1,1,2,2};
sort(arr.begin(),arr.end());
vector<vector<int>> ans;
int target=2;
f(0,arr,ds,ans,target);

for(auto it:ans){
    for(auto ti:it){
        cout<<ti<<"";
    }
    cout<<endl;
}

}