#include<iostream>
#include<sstream>
using namespace std;

int main()
{
   long long int n;
   cin >> n;   
   
   ostringstream ss;
   ss<<n;
  string x =  ss.str();
    int count = 0;

   for (int i = 0; i < x.size(); i++)
   {
       /* code */
       if(x[i] == '4' || x[i] == '7'){
           count++;
       }
   }
   if(count == 4 || count == 7){
       cout << "YES" << endl;
   }else{
       cout << "NO" << endl;
   }
   

    return 0;
}