#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,w,n;
    int total=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        total +=i*k;
    }
    if(total>n){
            cout<<total-n<<endl;
    }else{
        cout<<0<<endl;
    }

    return 0;
}