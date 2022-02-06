#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    int n;
    bool found = false;
    cin>>n;
    string s;
    string t = "abcdefghijklmnopqrstuvwxyz";

    cin>>s;
    int i;
    if(n<26){
        cout<<"NO"<<endl;
    }else{

        for( i=0;i<26;i++){

            for(int j=0;j<n;j++){
                s[j] = tolower(s[j]);
                if(t[i] == s[j]){
                    found = true;
                    break;
                }

            }
            if(!found){
                break;
            }
            found = false;
        }
        if(i == 26){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
