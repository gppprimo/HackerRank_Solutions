//
// Created by Peppe on 04/27/20.
//

#include "func.h"

int equalizeArray(const vector<int> &arr) {
    vector<int> support_v(100, 0);
    for(int i : arr)
        support_v[i] += 1;
    int max = 1;
    for(int s : support_v)
        if(s > max)
            max = s;
    return arr.size() - max;
}