/* Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <iostream>
#include "User.h"

using std::cout;
using std::endl;
using std::runtime_error;

/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{
    cout << "app_main starting" << endl;


    cout << "make a new User" << endl;
    User* pu = new User();



    cout << "delete it" << endl;
    delete(pu);




    cout << "app_main done" << endl;
}
