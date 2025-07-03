#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int count=0;
    vector<int> M;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        bool found=false;
        for(auto i=M.begin();i!=M.end();i++){
            if(*i==a){
                found=true;
                break;
            }
        }
        if(!found){
            count++;
            if(M.size()>=m){
                M.erase(M.begin());
                M.push_back(a);
            }
            else{
                M.push_back(a);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}