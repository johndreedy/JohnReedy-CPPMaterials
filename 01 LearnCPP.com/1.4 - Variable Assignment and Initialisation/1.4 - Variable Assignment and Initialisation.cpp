#include <iostream>

int main()
{

    int x; // variable initialisation
    x = 10; // variable assignment

    int a = 5; // initialised with equal sign - copy initialisation - less efficient?

    int b(6); // initialised with parenthesis (curly brackets) - direct initialisation - more efficient?
    // but can't be used with all data

    int c{ 7 }; // initialised with braces (squiggly brackets) - best practice?
    // it doesn't round down fractional numbers for ints like the other two, or generally accept values that can't be held without a conpiler error

    int d { 8 }; // direct brace initialisation - preferred
    int e = { 9 }; // copy brace initialisation, using equals sign
    int f{}; // brace initialisation without specific value (zero or empty)

    std::cin >> f; // character input for variable "f" which will be replaced

    int g { 10 }, h { 11 }; // initialising multiple variables with braces

    int i {};
    i = 999; // initialising with braces and assigning separately

    std::cout << x << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << h << std::endl;
    std::cout << i << std::endl;

}