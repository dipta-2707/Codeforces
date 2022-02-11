#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int k,r,t;
    cin>>k>>r;
    t = k;
    int i=1;
    while(1){
        if(k%10==0){
            cout<<i<<endl;
            break;
        }
        if((k-r)%10==0){
            cout<<i<<endl;
            break;
        }
        i++;
        k+=t;
    }
}
