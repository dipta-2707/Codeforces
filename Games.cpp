#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,counter=0;
    cin>>n;
    int h[n], g[n];

    for(int i=0;i<n;i++){
        cin>>h[i];
        cin>>g[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(g[i] == h[j])
                counter++;
        }
    }
    cout<<counter<<endl;

}
