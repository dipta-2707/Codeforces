#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;


void solve(){
    int n,t,counter = 0;
    vector<int> a;
    cin>>n;
    t = n/1000;
    if( t != 0){
        //cout<< t*1000<<endl;
        counter++;
        a.push_back(t*1000);
    }
    n = n - (t*1000);
    t = n/100;
    if(t!=0){
        //cout<<t*100<<endl;
        counter++;
        a.push_back(t*100);
    }
    n = n - (t*100);
    t = n/10;
    if(t!=0){
        //cout<<t*10<<endl;
        counter++;
        a.push_back(t*10);
    }
    n -=t*10;
    if(n!=0){
        //cout<<n<<endl;
        counter++;
        a.push_back(n);
    }
    cout<<counter<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
