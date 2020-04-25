//
// Created by Peppe on 04/22/20.
//

#include "func.h"

int jumpingOnClouds(const vector<int> &c, int k) {
    int i = 0;
    int e = 100;
    do{
        if(c[i] == 1)
            e -= 3;
        else e -= 1;

        i = (i + k) % c.size();
    } while(i != 0);
    return e;
}