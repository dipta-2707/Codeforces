#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t,lower = 0, higher = 0,amazing = 0;
    cin>>t;
    int score[t];
    cin>>score[0];
    higher = lower = score[0];
    for(int i=1;i<t;i++){
        cin>>score[i];
        if(score[i] > higher){
            higher = score[i];
            amazing++;
        }else if(score[i] < lower){
            lower = score[i];
            amazing++;
        }

    }
    cout<<amazing<<endl;
}
