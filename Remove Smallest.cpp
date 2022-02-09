#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::sort;

void solve(){
    int t;
    cin>>t;
    int a[t];

    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a, a+t);
    for(int i=0;i<t-1;i++){
        if(a[i+1] - a[i] <= 1 ){
            continue;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;

}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        solve();
    }

}
