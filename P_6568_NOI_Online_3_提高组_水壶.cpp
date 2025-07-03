#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> all(n),pres(n);
    cin>>all[0];
    pres[0]=all[0];
    for(int i=1;i<n;i++){
        cin>>all[i];
        pres[i]=pres[i-1]+all[i];
    }
    int max=pres[k];
    for(int i=1;i<n-k;i++){
        if(max<pres[i+k]-pres[i]+all[i]) max=pres[i+k]-pres[i]+all[i];
    }
    cout<<max;
    return 0;
}