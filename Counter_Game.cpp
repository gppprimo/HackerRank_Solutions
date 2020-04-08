//
// Created by Peppe on 04/08/20.
//
#include "func.h"

bool check_pow_tow_iter(){

}

bool check_pow_two(long n){
    int num_bits = log2(n), curr_bit = 0;
    while(not (n % 2)){
        n = n / 2;
        ++curr_bit;
    }
    return n == 1 and curr_bit == num_bits;
}

inline long next_lower_pow_two(long n){
    return pow(2, floor(log2(n)));
}

string counterGame(long n) {
    int turn = 0;
    while(n != 1){
        if(check_pow_two(n))
            n /= 2;
        else
            n -= next_lower_pow_two(n);
        ++turn;
    }
    return turn % 2 ? "Louise" : "Richard";
}