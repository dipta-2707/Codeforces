#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int step =0;
    cin>>x;
        if(x%5==0){
            step = x/5;
        }else{
            step = (x/5)+1;
        }
    cout<<step<<endl;
    
    return 0;
}