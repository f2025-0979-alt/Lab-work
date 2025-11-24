#include <iostream>
using namespace std;
bool checkevenOdd(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
} 
int main(){
    int num;
    cout<<"Enter the number  :";
    cin>>num;
    bool x= checkevenOdd( num); 
    cout<<x;


 

    return 0;
}
