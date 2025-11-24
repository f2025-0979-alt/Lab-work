#include <iostream>
using namespace std;
int main() { 
    int rows;
    string character;
    cout <<"enter the number of rows  :";
    cin >>rows;
     cout<< "enter the atoms of pyramid  :";
     cin >>character;
     for(int i=1;i<=rows;i++){
         for(int j=1;j<=i;j++){
             cout <<character;
         }
         cout<<endl;
     } 
   

    return 0;
}