#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
int x[4];
for(int i=0;i<4;i++)
    cin>>x[i];

std::sort(x,x+4);

cout<<x[3]-x[0]<<" "<<x[3]-x[1]<<" "<<x[3]-x[2]<<endl;


return 0;
}
