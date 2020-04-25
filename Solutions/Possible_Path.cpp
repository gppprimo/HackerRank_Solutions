//
// Created by Peppe on 04/24/20.
//

#include "func.h"

//gcd(5, 6) = 1
//gcd(4, 16) = 4

// great common divisor
long gcd(long a, long b){
    while(b != 0){
        long x = b;
        b = a % b;
        a = x;
    }
    return a;
}

// Complete the solve function below.
string solve(long a, long b, long x, long y) {
    return gcd(a, b) == gcd(x, y) ? "YES" : "NO";
}