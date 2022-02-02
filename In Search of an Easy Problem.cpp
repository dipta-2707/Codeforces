#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
return 0;
}
