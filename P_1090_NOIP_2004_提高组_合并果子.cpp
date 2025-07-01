#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> leaf;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        leaf.push(a);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        int a,b;
        a=leaf.top();
        leaf.pop();
        b=leaf.top();
        leaf.pop();
        leaf.push(a+b);
        count=count+a+b;
    }
    cout<<count;
    return 0;
}