#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
int main(){
    int r,l;
    bool isRight = false; //for even i value swap
    cin>>r>>l;
    //for rows
    for(int i=1;i<=r;i++){
        //for columns
        for(int j=1;j<=l;j++){
            if(i%2!=0)
                cout<<"#";
            else if(isRight && j==l){
                cout<<"#";
            }else if(!isRight && j==1){
                cout<<"#";
            }else
                cout<<".";

        }
        printf("\n");
        if(i%2!=0){
            if(isRight)
                isRight = false;
            else
                isRight = true;
        }

    }

}
