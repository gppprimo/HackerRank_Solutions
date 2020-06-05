//
// Created by Peppe on 06/05/20.
//
#include "func.h"

int getMinimumCost(int k, vector<int> c) {
    sort(c.begin(), c.end(), greater<int>());
    int res = 0;
    for(int i = 0; i < c.size(); ++i)
        res += ((i / k) + 1) * c[i];
    return res;
}
