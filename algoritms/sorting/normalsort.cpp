#include<bits/stdc++.h>
using namespace std;

void sor1(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[j],arr[i]);
                
            }
        }
    }
}

void bubblesort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int t=0;
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                t=1;
            }
           
        }
         if(t==0) break;
        cout<<"run"<<i<<endl;
    }
}

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"ENter number :"<<endl;
        cin>>arr[i];
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }

    }
}

int main(){
    int arr[5]={1,2,6,7,5};
    //sort1(arr,5);
    //bubblesort(arr,5);
    insertionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}