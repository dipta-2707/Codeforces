#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int n,k,time = 0, remain = 0, solved = 0;

    cin>>n>>k;
    remain = 240 - k;
    for(int i=1;i<=n;i++){
        time += i*5;
        if(remain>=time){
            solved++;
        }else{
            break;
        }
    }
    cout<<solved<<endl;

}
