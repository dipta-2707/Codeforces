#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
 int n,counter=0;
 string s;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>s;
    if(!s.compare("Tetrahedron")){
        counter+=4;
    }else if(!s.compare("Cube"))
        counter+=6;
    else if(!s.compare("Octahedron"))
        counter+=8;
    else if(!s.compare("Dodecahedron"))
        counter+=12;
    else
        counter+=20;
 }
 cout<<counter<<endl;
}
