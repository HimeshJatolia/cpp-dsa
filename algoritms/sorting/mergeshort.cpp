#include<bits/stdc++.h>
using namespace std;

void f(int low,int arr[],int high){
    if(low==high) return;
int mid=(low+high)/2;
//1st half
f(low,arr,mid);
//second half
f(mid+1,arr,high);
//merge while back tracing 

}

int main(){
    int arr[5]={1,3,6,2,4};
    f(0,arr,5);
}