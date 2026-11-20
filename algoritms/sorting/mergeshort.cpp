#include <bits/stdc++.h>
using namespace std;

void merge1(int low,vector<int> &arr ,int mid, int high) {
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
     while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

};

void mergesort(int low,vector<int> &arr, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    // 1st half
    mergesort(low,arr, mid);
    // second half
    mergesort(mid + 1,arr, high);
    // merge while back tracing
    merge1(low,arr, mid,high);
}

int main()
{
    vector<int> arr;
    arr = {1, 3, 6, 2, 4};
    mergesort(0,arr, 4);
    for(auto it:arr){
        cout<<it<<endl;
    }
}