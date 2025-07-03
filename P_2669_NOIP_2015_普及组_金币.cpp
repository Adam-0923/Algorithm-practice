#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,k;
    cin>>k;
    int flag=1;
    for(int i=1,j=1;i<=k;i++){
        if(j>0){ 
            count+=flag;
            j--;
        }
        else{
            flag++;
            j=flag;
            i--;
        }
    }
    cout<<count;
    return 0;
}