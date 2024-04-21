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
    [maybe_unused] int w = 3;
    [maybe_unused] int q;
    int x {};
    std::cout << "var x: " << x << "\n";
    std::cin >> x;
    std::cout << "var x: " << x << '\n';
    
    int z;
    doNothing(z);
    std::cout << "var z: " << z << '\n';
}

int main()
{
    doSomething();
    return 0;
}
