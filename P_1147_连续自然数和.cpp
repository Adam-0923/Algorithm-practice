#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=sqrt(2*m);i>1;i--){
        int x;
        if((2*m)%i==0){
            x=(2*m/i-i+1)/2;
            if((2*m/i-i+1)%2==0)
            cout<<x<<' '<<x+i-1<<endl;
        }
    }

    return 0;
}