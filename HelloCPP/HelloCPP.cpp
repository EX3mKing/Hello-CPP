#include <plog/Log.h> // include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>
// #include "New.h"
#include <iostream>
// comment a
// comment b */ comment c */
/*
 * comment d
*/

void doNothing(int&){}

void doSomething()
{
    std::cout << "Hello, World!" << std::endl;
    [[maybe_unused]] int w = 3;
    [[maybe_unused]] int q;
    int x {};
    std::cout << "var x: " << x << "\n";
    std::cin >> x;
    std::cout << "var x: " << x << '\n';
    
    int z;
    doNothing(z);
    std::cout << "var z: " << z << '\n';
#define DEBUG
#ifdef DEBUG
    std::cerr << "DEBUG" << std::endl;
#endif
}

int main()
{
    // plog::debug -> logging ON
    // plog::none  -> logging OFF
    plog::init(plog::debug, "Logfile.txt"); // initialize the logger with logfile name
    PLOGD << "wazzzap" << std::endl;

    std::cout << "hoi";
    
     doSomething();
    // std::cout<<"Jooo: " << add(4, 5) << std::endl;
    // std::cout << mult4(2) << std::endl;

    
    return 0;
}
