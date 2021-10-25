#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>n[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(n[i][j]==1){
                if(i<2){
                    count = 2-i;
                }
                if(i>2){
                    count += i-2;
                }
                if(j<2){
                    count += 2-j;
                }
                if(j>2){
                    count+=j-2;
                }else if(j==2 && i==2){
                    count =0;
                }
                break;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}