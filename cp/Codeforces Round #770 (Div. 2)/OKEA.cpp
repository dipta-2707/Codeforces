#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

void solve(){
    int n,k;
    cin>>n>>k;

    if(k==1){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
            cout<<i<<endl;
        return;
    }
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    int slash = 0;
    cout<<"YES"<<endl;
    for(int i=1;i<n*k;i+=2){
            slash++;
            cout<<i<<" ";
            if(slash == k){
                cout<<endl;
                slash = 0;
            }

    }
    slash = 0;
    for(int i=2;i<=n*k;i+=2){
            slash++;
            cout<<i<<" ";
            if(slash == k){
                cout<<endl;
                slash = 0;
            }

    }
    return;


}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        solve();
return 0;
}
