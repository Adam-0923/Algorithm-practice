#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int count=0;
    vector<int> M;
    auto j=M.begin();
    for(int i=0;i<n;i++){
        int a;
        goal:
        cin>>a;
        for(int x=0;x<m;x++){
            if(*(j+x)==a){
                i++;
                goto goal;
            }
        }
        M.push_back(a);
        j++;
        count++;
    }
    cout<<count<<endl;
    return 0;
}