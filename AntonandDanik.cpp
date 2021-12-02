#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin>> s;
    int ca  = 0;
    int cd = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        (s[i] == 'A')? ca++ : cd++ ; 
    }
    if(ca>cd){
        cout << "Anton" << endl;
    }else if(cd>ca){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    

    return 0;
}