#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    string s;
    cin>>t;
    cin>>s;

    reverse(s.begin(), s.end());
 
    if(t.compare(s)){
        cout<< "NO" << endl;
    }else{
        cout<< "YES" << endl;
    }
 

    return 0;
}