/* |IMPLEMENTATION| User.cpp file */

#include "User.h"
#include <iostream>
using namespace std;

struct User::Impl {

    Impl(){
        cout << "Impl Constructor" << endl;
    };

    ~Impl(){
        cout << "Impl Destructor" << endl;
    };

    void welcomeMessage()
    {
        cout << "Welcome, "<< endl;
    }

};

// Constructor connected with our Impl structure
User::User()
    : pimpl(new Impl())
{
    cout << "User Constructor" << endl;
    pimpl->welcomeMessage();
}

// Default Constructor
// it MUST be in the CPP File; otherwise you get an Error at Compile time.
User::~User(){
    cout << "User Destructor" << endl;
}



