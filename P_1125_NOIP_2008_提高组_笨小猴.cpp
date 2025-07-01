#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> a;
    string input;
    for(int i='a';i<='z';i++){
        a[(char) i] = 0;
    }
    cin>>input;
    for(auto le=input.begin();le!=input.end();le++){

        a[*le]++;
    }
    int max=0;
    int min=1000000;
    for(int i='a';i<='z';i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min&&a[i]>0){
            min=a[i];
        }
    }
    if(min>100) min=0;
    int result=max-min;
    int flag=1;
    for(int i=2;i*i<=result;i++){
        if(result%i==0){
            flag=0;
        }
    }
    if(result==1||result==0) flag=0;
    if(flag){
        cout<<"Lucky Word"<<endl<<result<<endl;
    }else{
        cout<<"No Answer"<<endl<<0<<endl;
    }
    return 0;
}