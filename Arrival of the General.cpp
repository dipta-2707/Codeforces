#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mini=0,maxi=0,mai=0,mii=0,sec=0;
    cin>>n;
    int s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
        if(i==0)
            mini = s[i];
        if(s[i]>maxi){
            maxi=s[i];
            mai=i;
        }
        if(s[i]<=mini){
            mini = s[i];
            mii = i;
        }


    }
    mii++;
    mai++;
   // cout<<"min "<<mii<<" max "<<mai<<endl;

    if(mai>mii){
        sec = mai -1;
        sec += n - mii - 1;
    }else{
        sec = (mai-1)+(n-mii);
    }

    cout<<sec;

}
