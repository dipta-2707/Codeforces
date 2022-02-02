#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, counter = 0;
    string magnet,temp;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>magnet;

        if(i == 0){
            temp = magnet;
            continue;
        }
        if(temp[1] == magnet[0]){
           counter++;
        }

        temp = magnet;

    }
        counter++;
    cout<<counter<<endl;

return 0;
}
