#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n+2),pres(n+2);
    cin>>nums[0];
    pres[0]=nums[0];
    for(int i=1;i<n;i++){
        cin>>nums[i];
        pres[i]=pres[i-1]+nums[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int t,e;
        cin>>t>>e;
        cout<<pres[e-1]-pres[t-1]+nums[t-1]<<endl;
    }
    return 0;
}