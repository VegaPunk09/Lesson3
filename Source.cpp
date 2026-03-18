#include <iostream>

int main()
{
    bool a, b;

    std::cout << "Operator: ||" << std::endl;

    a = true;  b = true;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a || b) ? "true" : "false") << std::endl;

    a = false; b = true;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a || b) ? "true" : "false") << std::endl;

    a = true;  b = false;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a || b) ? "true" : "false") << std::endl;

    a = false; b = false;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a || b) ? "true" : "false") << std::endl;


    std::cout << "Operator: &&" << std::endl;

    a = true;  b = true;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a && b) ? "true" : "false") << std::endl;

    a = false; b = true;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a && b) ? "true" : "false") << std::endl;

    a = true;  b = false;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a && b) ? "true" : "false") << std::endl;

    a = false; b = false;
    std::cout << (a ? "true" : "false") << '\t' << (b ? "true" : "false") << '\t' << ((a && b) ? "true" : "false") << std::endl;

    return EXIT_SUCCESS;
}