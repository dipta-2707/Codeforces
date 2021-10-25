#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    int x = m*n;
    if(x%2==0){
        cout<<x/2;
    }else{
        cout<<(x-1)/2;
    }
    return 0;
}