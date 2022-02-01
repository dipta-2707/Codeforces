#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    int ca=0,cb=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;

        for(int j=0;j<s.size()-1;j++){
            if(s[j]=='a' && s[j+1] == 'b'){
                ca++;
            }
            if(s[j]== 'b' && s[j+1] == 'a'){
                cb++;
            }
        }

        if(ca == cb){
            cout<<s<<endl;
        }else{
            while (ca != cb)
            {
                  for(int j=0;j<s.size();j++){
                                if((s[j]=='b') &&  (s[j-1]!='b') && s[j+1]!='b'){
                                        s[j] = 'a';
                                        if(j==s.size()-1){
                                            ca--;
                                            break;
                                        }
                                        cb--;
                                    break;
                                }
                                if(s[j]=='a' && s[j+1]!='a' && s[j-1]!='a'){
                                    s[j] = 'b';
                                        if(j==s.size()-1){
                                            cb--;
                                            break;
                                        }
                                    ca--;
                                    break;
                                }
                  }
                                
                    // ca = 0;
                    // cb = 0;
                        //     for(int j=0;j<s.size()-1;j++){
                        //         if(s[j]=='a' && s[j+1] == 'b'){
                        //             ca++;
                        //         }
                        //         if(s[j]== 'b' && s[j+1] == 'a'){
                        //             cb++;
                        //         }
                        //    }
            }
             cout<<s<<endl;
            
        }
    }


    return 0;
}