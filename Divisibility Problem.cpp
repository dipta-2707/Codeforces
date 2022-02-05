#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;

        if(b>a){
            cout<<b-a<<endl;
        }else if(a%b==0){
            cout<<0<<endl;
        }else{
            cout<<(((a/b)+1)*b) - a<<endl;
        }
    }

}

