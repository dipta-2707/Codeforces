#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
    string guest,host,door;
    cin>>guest;
    cin>>host;
    cin>>door;
    bool isFound = false;

    guest.append(host);

    //matching letters size
    if(guest.size() == door.size()){
        //matching door letters with given letters
        for(int i=0;i<door.size();i++){
            isFound = false;
            for(int j=0;j<guest.size();j++){
                if(door[i]==guest[j]){\
                   guest[j] = '@';
                   isFound = true;
                   break;
                }

            }
            if(!isFound)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(isFound)
            cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
