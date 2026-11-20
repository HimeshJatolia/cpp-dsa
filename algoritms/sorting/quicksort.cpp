#include<bits/stdc++.h>
using namespace std;

int f1(int low,int high,int arr[]){
    int i=low;
    int j=high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[low],arr[j]);
    return j;
}

void f(int low,int high,int arr[]){
    if(low>=high){
        return;
    }
    int midindex=f1(low,high,arr);
    f(low,midindex-1,arr);
    f(midindex+1,high,arr);

}

int main(){
    int arr[5]={4,2,1,6,3};
    f(0,4,arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
}