/*
 * User.h
 *
 *  Created on: 01.08.2022
 *      Author: Franz
 */

#ifndef MAIN_USER_H_
#define MAIN_USER_H_


/* |INTERFACE| User.h file */

#include <memory> // PImpl
#include <string>

class User {
public:
    // Constructor and Destructors

    User();
    ~User();




private:
    // Internal implementation class
    class Impl;

    // Pointer to the internal implementation
    std::unique_ptr<Impl> pimpl;
};



#endif /* MAIN_USER_H_ */
