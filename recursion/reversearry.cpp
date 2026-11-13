#include<bits/stdc++.h>
using namespace std;

void reverse1(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    
    reverse1(i+1,arr,n);

}

int main(){
    int s[5]={1,2,3,4,5};
    reverse1(0,s,5);

    for(int i = 0; i < 5; i++) {
        cout << s[i] << " ";
    }
   
}