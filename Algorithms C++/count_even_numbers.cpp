//
//  count_even_numbers.cpp
//  Algorithms C++
//
//  Created by Taniusa :* on 07.04.2021.
//

#include <iostream>
#include "count_even_numbers.h"
using namespace std;


int evenNumbers(int list[],int list_size){
    int count = 0;
    
    //loop to read all the values in the array
    
    for (int i = 0; i < list_size; i++){
        if (list[i] % 2 != 0){ //checking if a number is completely divisible by 2
            count++;
        }
    }
    return count;
}

int sum(int x, int y){
    int s = x +y;
    return s;
}


