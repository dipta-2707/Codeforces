#include <bits/stdc++.h>
using namespace std;
typedef struct pair{
    int p;
    int i;
}present;

void swap(present *xp, present *yp)
{
    present temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(present arr[], int n)
{

}

int main(){
    int n;
    cin>>n;

    present p[n];

    for(int i=0; i<n;i++){
        cin>>p[i].p;
        p[i].i = i+1;
    }

    int i, j;
    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (p[j].p > p[j+1].p)
            swap(&p[j], &p[j+1]);
    for(int i=0; i<n;i++){
        cout<<p[i].i<<" ";
    }

return 0;
}
