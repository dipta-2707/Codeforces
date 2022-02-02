#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4],match=0;
    for(int i=0;i<4;i++)
        cin>>a[i];

    for(int i=0;i<4;i++){
        for(int j=0; j<4; j++){
          if(a[i] == a[j] && i!=j && a[j]!= -1)
          {
              match++;
              a[j] = -1;
          }

        }
    }
    cout<<match<<endl;

return 0;}


