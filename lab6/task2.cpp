#include <iostream>
using namespace std;
int main() {
   float fahrenheit,celcius;
int choice;
cout<<"Enter the choice  :";
cin>>choice;

if(choice==1){
    cout<<"enter the fahrenheit   :";
    cin>>fahrenheit;
    celcius=(fahrenheit-32)*5/9;
    cout<<"the value in celcius  is :"<<celcius<<endl;
    
}
else if(choice==2){
    cout<<"enter the celcius   :";
    cin>>celcius;
    fahrenheit=(celcius*9/5)+32;
    cout<<"the value in fahrenheit  is :"<<fahrenheit<<endl;
}
else {
    cout<<"Enter the valid choice  :";
    
}
    return 0;
}