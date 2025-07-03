#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> scores;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        scores.push_back(a);
    }
    sort(scores.begin(),scores.end());
    scores.erase(scores.begin());
    scores.erase(--scores.end());
    float average;
    for(int i=2;i<n;i++){
        average+=scores[i-2];
    }
    average/=(n-2);
    printf("%.2f",average);
    return 0;
}