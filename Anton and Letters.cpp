#include<bits/stdc++.h>

using namespace std;
vector<char> vec;
bool isContain(char c){
    for(int i=0;i<vec.size();i++){
        //char t = vec[i];
        if(vec[i] == c)
            return 1;
    }
    return 0;
}
int main(){
 string s;
 getline(cin,s);

    for(int i=1;i<s.size();i+=3){
        if(s[i]>='a' && s[i]<='z'){
           //cout<<s[i];
            if(!isContain(s[i])){
                vec.push_back(s[i]);
            }
        }

    }

    cout<<vec.size()<<endl;


//cout<<letters-counter<<endl;
}



