#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    int count = 0;
    cin>>n;
    cin>>s;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
        
    return 0;
}