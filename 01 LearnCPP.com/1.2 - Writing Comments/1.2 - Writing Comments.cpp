#include <iostream>

// This is a single line comment, used for short descriptions

/*
This is a multi-line comment, used for more lengthy descriptions.
It is important not to wrap multi-line comments within other multi-line comments - this is because the comment would be compiled as if it were code.
*/

/*
Comments are used for a given library, program or function to help explain what it is used for.
This is especially important when others are reading your code, or if you are returning to older code you have written because it is easy to forget!
*/

// Below I have commented out code / transformed comments into code:

int main()
{
    std::cout << "Hello World!";
    // std::cout << "1";
    return 0;
}