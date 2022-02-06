#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int n,m=0;
    cin>>n;

    if(n>=100){
        m+=n/100;
        n-=100*m;
    }
    if(n>=20){
        m+=n/20;
        n-=20*(n/20);
    }
    if(n>=10){
        m+=n/10;
        n-=10*(n/10);
    }
    if(n>=5){
        m+=n/5;
        n-=5*(n/5);
    }
    if(n>=1){

        m+=n/1;
    }
    cout<<m<<endl;
}
