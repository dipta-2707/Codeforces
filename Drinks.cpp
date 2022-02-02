#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,s=0,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        s+=t;
    }
    cout<<fixed<<setprecision(12);
    cout<<s/n<<endl;
return 0;
}
