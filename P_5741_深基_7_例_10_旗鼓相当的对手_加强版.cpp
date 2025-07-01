#include<bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    int gra1;
    int gra2;
    int gra3;
    int allgra;
};
int main(){
    int N=1;
    cin>>N;
    stu stus[N];
    for(int i=0;i<N;i++){
        cin>>stus[i].name;
        cin>>stus[i].gra1;
        cin>>stus[i].gra2;
        cin>>stus[i].gra3;
        stus[i].allgra=stus[i].gra1+stus[i].gra2+stus[i].gra3;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(abs(stus[i].gra1-stus[j].gra1)<=5&&abs(stus[i].gra2-stus[j].gra2)<=5&&abs(stus[i].gra3-stus[j].gra3)<=5&&abs(stus[i].allgra-stus[j].allgra)<=10){
                if(stus[i].name>stus[j].name){
                    cout<<stus[j].name<<' '<<stus[i].name<<endl;
                }else{
                    cout<<stus[i].name<<' '<<stus[j].name<<endl;
                }
            }
        }
    }
    return 0;
}