#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int n = a.length();
    char x[n];
    //cout<<a.length()<<"--"<<n<<endl;
    for(int i =0; i<n; i++){
        if(a[i] == b[i]){
            x[i] = '0';
        }else{
            x[i] = '1';
        }
    }
    for(int i=0;i<n;i++)
        cout<<x[i];

return 0;
}
