#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

void solve(){
    int a,b,counter=0,temp=0;
    cin>>a>>b;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    (a<b)?temp=b-a:temp=a-b;
    int i =10;
    while(temp > 0){
        if(temp>=i){
            counter += temp/i;
            temp -= counter*i;
        }

        i--;
    }
    cout<<counter<<endl;
    return;


}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        solve();
    }

}

