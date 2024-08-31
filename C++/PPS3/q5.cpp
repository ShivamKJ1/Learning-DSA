#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base display()" <<endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived display()" <<endl;
    }
};

int main() {
    Base* ptr;

    Base baseObj;
    Derived derivedObj;

    ptr = &baseObj;
    ptr->display(); // Calls Base::display()

    ptr = &derivedObj;
    ptr->display(); // Calls Derived::display()

    return 0;
}


    /*We have a base class Base with a virtual function display().
    We derive a class Derived from Base and override the display() function.
    In main(), we create objects of both Base and Derived classes.
    We then create a pointer of type Base* and point it first to the Base object and then to the Derived object.
    When calling display() through the pointer, it calls the appropriate version of the function based on the type of object being pointed to, demonstrating runtime polymorphism.
    Conditions i to vi are implicitly met in this example.*/
    