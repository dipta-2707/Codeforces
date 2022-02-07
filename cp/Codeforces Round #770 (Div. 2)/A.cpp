#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::reverse;
bool palrin(string s){
string t = s;
reverse(t.begin(),t.end());
if(t == s)
    return true;
else
    return false;

}

int main(){
int t,n,k;
cin>>t;


for(int i =0;i<t;i++){
    cin>>n>>k;
    string s;
    cin>>s;

    if(k==0){
        cout<<1<<endl;
        continue;
    }
    if(k>=1){
        if(palrin(s)){
            cout<<1<<endl;
            continue;
        }else{
            cout<<2<<endl;
            continue;
        }
    }

}


return 0;
}
