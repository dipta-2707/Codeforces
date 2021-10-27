#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    int total = 0,max=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
            total -= a;
            total+=b;
            if(total>max){
                max = total;
            }
        
        

    }
    cout<<max<<endl;

    return 0;
}