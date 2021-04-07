//
//  main.cpp
//  Algorithms C++
//
//  Created by Taniusa :* on 07.04.2021.
//

#include <iostream>
#include "count_even_numbers.h"

int main (){
    int list[10] = {2,4,3,5,7,9};
    int list_size = sizeof(list) / sizeof(list[0]);

    std:: cout << evenNumbers(list, list_size) << "\n";
    
    std:: cout << sum (5, 10) << "\n";
    
    return 0;
}

