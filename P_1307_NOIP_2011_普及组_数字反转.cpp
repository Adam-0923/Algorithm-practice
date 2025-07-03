#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<0) cout<<'-';
    num=abs(num);
    bool flag=false;
    if(num==0) cout<<0;
    while(num!=0){
        if(num%10!=0) flag=true;
        if(flag){
            int a=num%10;
            cout<<a;
        }
        num/=10;
    }
    cout<<endl;
    return 0;
}