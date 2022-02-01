#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n], q[n];

    int counter=0;

    for(int i=0;i<n;i++){
        cin>>p[i]>>q[i];

        if(p[i]<q[i]-1){
            counter++;
        }
    }
    cout<<counter<<endl;

return 0;
}
