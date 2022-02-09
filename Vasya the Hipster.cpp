#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

void solve(){
    int a, b;
    cin>>a>>b;
    if(a<b){
        cout<<a<<" "<<(b-a)/2;
        return;
    }
    if(a == b){
        cout<<a<<" 0"<<endl;
        return;
    }
    cout<<b<<" "<<(a-b)/2;
    return;
}

int main(){
    solve();
}
