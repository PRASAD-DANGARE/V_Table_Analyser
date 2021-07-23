////////////////////////////////////////////////////////////////////////////
//
// Class Name    :  Base, Derived
// Description   :  Demonstration Of VPTR And VTABLE
// Input         :  None
// Output        :  None
// Author        :  Prasad Dangare
// Date          :  23 July 2021
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class Base
{
    public :

    int i, j; 

    void fun() // 1000
    {
        cout << "\nBase Fun";
    }

    virtual void gun() // 2000
    {
        cout << "\nBase Gun";
    }

    virtual void sun() // 3000
    {
        cout << "\nBase Sun";
    }

    virtual void run() // 4000
    {
        cout << "\nBase Run";
    }
};

class Derived : public Base
{
    public :

    int x, y;

    void fun()
    {
        cout << "\nDerived Fun"; // 5000
    }

    void gun()
    {
        cout << "\nDerived Gun"; // 6000
    }

    virtual void Mun() // 7000
    {
        cout << "\nDerived Mun";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;

    bp = &dobj; // Up Casting
    dp = &dobj; // No Casting
    bp = &dobj; // Up Casting
    //dp = &bobj; Down Casting, Not Allowed

    bp -> fun(); // Base fun
    bp -> gun(); // Base gun, Virtual, Derived gun
    bp -> sun(); // Base sun
    bp -> run(); // Base run
    //bp -> mun(); Error

    cout << "\nSize Of bobj is : " << sizeof(bobj); // 12 bytes
    cout << "\nSize Of dobj is : " << sizeof(dobj); // 20 bytes

    return 0;
}
