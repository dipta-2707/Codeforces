#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

void solve(){
    int n,villen = 0,police = 0,free=0;
    bool onDuty = false;
    cin>>n;
    int event[n];

    for(int i=0;i<n;i++){
        cin>>event[i];
        if(event[i] != -1){
            police+=event[i];
            onDuty=true;
        }else if(event[i] == -1 && !onDuty){
            free++;
        }else{
            if(villen>0)
                villen--;
            police--;
            if(police==0)
                onDuty=false;
        }
        //cout<<police<<" "<<villen<<endl;

    }
    cout<<villen+free<<endl;

}

int main(){
    solve();
}

