//
//  bank_deposit.cpp
//  Algorithms C++
//
//  Created by Taniusa :* on 12.04.2021.
//

#include "bank_deposit.hpp"

int bank_deposit(int x, int y, int p) {
    int i = 0;
    int p2 = (p * x) / 100;
    while (x < y){
        x += p2;
        i++;
    }
    return i;
}
