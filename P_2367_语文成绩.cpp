#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    vector<int> scos(n+1);
    vector<int> cafe(n+1);
    cin>>scos[0];
    cafe[0]=scos[0];
    for(int i=1;i<n;i++){
        cin>>scos[i];
        cafe[i]=scos[i]-scos[i-1];
    }
    for(int i=0;i<p;i++){
        int l,r,up;
        cin>>l>>r>>up;
        cafe[l-1]+=up;
        cafe[r]-=up;
    }
    int min=cafe[0];
    int pre=cafe[0];
    for(int i=1;i<n;i++){
        pre+=cafe[i];
        if(min>pre) min=pre;
    }
    cout<<min;
    return 0;
}