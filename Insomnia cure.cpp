#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,l,m,n,d,counter=0;
    cin>>k>>l>>m>>n>>d;
    vector<bool> isDamaged(d,0);

    int i = k;
    while(i<=d){
        counter++;
        isDamaged[i] = true;
        i+=k;
    }
    i = l;
    while(i<=d){
        if(!isDamaged[i]){
            counter++;
            isDamaged[i] = true;
        }
        i+=l;
    }
    i = m;
    while(i<=d){
        if(!isDamaged[i]){
            counter++;
            isDamaged[i] = true;
        }
        i+=m;
    }
    i = n;
    while(i<=d){
        if(!isDamaged[i]){
            counter++;
            isDamaged[i] = true;
        }
        i+=n;
    }
    cout<<counter<<endl;

return 0;
}
