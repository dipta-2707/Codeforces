#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
int main(){
 int t,n;
 cin>>t;
 for(int i=0;i<t;i++){
    cin>>n;

    if(n>2){
        if(n%2==0)
            cout<<(n-2)/2<<endl;
        else
            cout<<(n-1)/2<<endl;
    }else
        cout<<0<<endl;
 }
}
