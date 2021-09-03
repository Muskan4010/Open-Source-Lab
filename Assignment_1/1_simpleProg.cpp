#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    v.reserve(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Entered array\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}