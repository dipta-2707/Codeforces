#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,y,flag=0;
   cin>>n;
   cin>>x;
   int a[x];
   for(int i=0;i<x;i++)
    cin>>a[i];

   cin>>y;
   int b[y];

   for(int i=0;i<y;i++)
    cin>>b[i];

    int *ptr;
   for(int i=1;i<=n;i++){
    ptr = find(a,a+x,i);
    if(ptr == a+x){
        ptr = find(b, b+y, i);
        if(ptr == b+y){
            flag = 1;
            break;
        }
    }
    if(flag==1)
        break;

   }


    if(flag == 1)
        cout<<"Oh, my keyboard!"<<endl;
    else
        cout<<"I become the guy."<<endl;

    return 0;
}
