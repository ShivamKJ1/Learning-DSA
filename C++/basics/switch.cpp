#include <iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter a character ";
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"Hola"<<endl;
        break;

        case 'd':
        cout<<"Ciao"<<endl;
        break;

        case 'e':
        cout<<"Salut"<<endl;
        break;

        default:
        cout<<"Sorry I am still learning :) ";
        break;

    }
    
return 0;

}
