#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,m;
    cin>>n>>m;
    vector<int> kids(n+1,1);
    int flag=0;
    for(int j=0,i=1;j<n;i++){
        if(i>n) i=1;
        if(kids[i]==1){
            flag++;
        }
        if(flag==m){
            cout<<i<<' ';
            flag=0;
            kids[i]=0;
            j++;
        }
    }
}