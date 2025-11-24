#include <iostream>
using namespace std;
void babydoll(int level){
    int a,b,c;
    a=0;
    b=1;
    c=a+b;
    cout<<a<<" "<<b;
    for(int i=2;i<level;i++){
        a=b;
        b=c;
        c=a+b;
        cout<<" "<<c;
    }

}
int main() {
    int level;
    cout<<" enter the level"<<endl;
    cin>>level;
    babydoll(level);
 
    
    return 0;
}