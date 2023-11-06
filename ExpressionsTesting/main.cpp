//
//  main.cpp
//  ExpressionsTesting
//
//  Created by Emanuel Alfaro on 11/6/23.
//

#include <iostream>

int five()
{
    return 5;
}

int seven()
{
    return 7;
}

int main()
{
    int a{1};
    int b{five()};
    int c{a+b};
    std::cout << c << '\n';
    int d{five() + seven()};
    std::cout << d << '\n';
    return 0;
}
