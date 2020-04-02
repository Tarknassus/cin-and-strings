//
//  main.cpp
//  cin and strings
//
//  Created by Richard Cheesman on 02/04/2020.
//  Copyright © 2020 Richard Cheesman. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string mystr;
    std::cout << "What is your name? ";
    getline (std::cin, mystr);
    std::cout << "Hello " << mystr << ".\n";
    std::cout << "What is your favourite activity? ";
    getline (std::cin, mystr);
    std::cout << "Hey, I like " << mystr << " too!\n";
    return 0;
}
