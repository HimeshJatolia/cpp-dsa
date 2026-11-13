#include<bits/stdc++.h>
using namespace std;

void vector1(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[1]<<endl;

    // vector declare with values
    vector<int> v1(5,100);
    cout<<v1[3]<<endl;//5 time 100 in vector arry 
    vector<int> v2(5); // 5time 0 in vector aary
    cout<<v2[3]<<endl;
}

void vector2(){
    vector<pair<int,int>> p;
    p.push_back({1,2});
    p.emplace_back(3,4);
    cout<<"pair is :("<<p[0].first<<","<<p[1].second<<")";
    
}

void iterator1(){
    vector<int> v1(5,100);
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"for each :"<<endl;
    for(auto i:v1){
        cout<<i<<" ";
    }
    v1.push_back(2);
    cout<<endl<<v1.back();
}

void vectorcrud(){
    vector<int> v={12,23,4,5,6};

    //Delete funtions
    // v.erase(v.begin()+1); noraml earse /
    // delete in range
    v.erase(v.begin()+1,v.begin()+3);

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl<<"insertion:"<<endl;
    //insert funtion's
    vector<int> v2(5,100);
    //single iinserst
    // v2.insert(v2.begin()+2,500);
    //multiple insert 
    //v2.insert(v2.begin()+1,2,60);
    //copy v in v2
    v2.insert(v2.end(),v.begin(),v.end());
    //delete last elemnet of v2
    v2.pop_back();
    //spwan v an dv2
    v.swap(v2);
    
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++){
        cout<<*(it)<<" ";
    }
}

int main(){
    // vector1();
    // vector2();
    // iterator1();
    vectorcrud();
}