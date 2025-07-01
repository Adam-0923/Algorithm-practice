#include<bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    int year;
    int month;
    int day;
};
int main(){
    int n;
    cin>>n;
    stu stus[n];
    for(int i=0;i<n;i++){
        cin>>stus[i].name>>stus[i].year>>stus[i].month>>stus[i].day;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(stus[i].year<stus[j].year){
                stu c;
                c=stus[i];
                stus[i]=stus[j];
                stus[j]=c;
            }
            else if(stus[i].year==stus[j].year){
                if(stus[i].month<stus[j].month){
                    stu c;
                    c=stus[i];
                    stus[i]=stus[j];
                    stus[j]=c;
                }else if(stus[i].month==stus[j].month){
                    if(stus[i].day<stus[j].day){   
                        stu c;
                        c=stus[i];
                        stus[i]=stus[j];
                        stus[j]=c;
                    }else if(stus[i].day==stus[j].day){
                        stu c;
                        c=stus[i];
                        stus[i]=stus[j];
                        stus[j]=c;
   
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<stus[i].name<<endl;
    }
    return 0;
}