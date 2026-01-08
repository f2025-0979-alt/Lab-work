#include<iostream>
using namespace std;
int main() {
    bool runner=true;
    while (runner) {
        cout << endl<<"press 1 to find area of circle \n press 2 to find are of triangle \n  press 3 to find area of rectangle \n  press 4 to exit the program  \n ";
        int option;
        cin>>option;
        switch (option) {
            case 1: {
                float radius;
                cout<<"enter radius of circle = ";
                cin>>radius;
                float area = radius * radius * 3.14;
                cout<<"\narea of circle is = "<<area;
                break;
            }
            case 2: {
                float height;
                float width;
                cout<<"enter height of rectangle = ";
                cin>>height;
                cout<<"\nenter widhth of rectangle = ";
                cin>>width;
                cout<<"\nenter area of rectangle = "<<height*width;
                break;
            }
            case 3: {
                float height;
                float base;
                cout<<"enter height of triangle = ";
                cin>>height;
                cout<<"\nenter base of triangle = ";
                cin>>base;
                cout<<"\narea of triangle = "<<0.5*height*base;
                break;
            }
            case 4:
                cout<<"exiting the program";
              runner=false;
                break;
        }
         cout<<"\n  enter a valid input  \n"; break;
    }
    return 0;
}