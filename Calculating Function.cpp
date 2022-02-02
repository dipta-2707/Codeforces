#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,fn=0;
    cin>>n;

    if(n%2==0)
        fn = n/2;
    else
        fn = (++n/2)*(-1);
    cout<<fn<<endl;
return 0;
}
