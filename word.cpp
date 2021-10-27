#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int countUpper = 0,countLower = 0;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            countUpper++;
        }else{
            countLower++;
        }
    }
    if(countUpper>countLower){
        transform(s.begin(), s.end(),s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(),s.begin(), ::tolower);
    }
    cout<<s<<endl;

    return 0;
}