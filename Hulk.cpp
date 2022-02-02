#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string hate = "I hate ";
    string that = "that ";
    string love = "I love ";
    string it = "it";
    string halk;

    for(int i=1;i<=n;i++){
        if(i%2==0)
            halk.append(love);
        else
            halk.append(hate);
        if(i != n)
            halk.append(that);
    }
    halk.append(it);
    cout<<halk<<endl;
return 0;
}
