#include<bits/stdc++.h>
using namespace std;

void f(int i,vector<int> &s,vector<int> &ds,vector<vector<int>> &ans,int target){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    if(i==s.size()){
        return;
    }

    //yes
    if(s[i]<=target){
    ds.push_back(s[i]);
    f(i,s,ds,ans,target-s[i]);
        ds.pop_back();
    }
    
    //no
    
    f(i+1,s,ds,ans,target);
    

}

int main(){
vector<vector<int>> ans;
vector<int> ds;
vector<int> s={1,2,3};
int i=0;
int target=3;
f(i,s,ds,ans,target);
for(auto it : ans){
        cout << "[ ";
        for(auto x : it){
            cout << x << " ";
        }
        cout << "]" << endl;
    }
}