#include<bits/stdc++.h>
using namespace std;

void expair(){
    pair<int,int> p={7,3};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<int,pair<int,int>> u={8,{4,5}};
    cout<<u.first<<"next pair:("<<u.second.first<<","<<u.second.second<<")"<<endl;

    pair<int,int>arr[]={{1,2},{2,2},{3,4},{6,7}};
    cout<<arr[1].first<<","<<arr[1].second;
}
int main(){
    expair();
}