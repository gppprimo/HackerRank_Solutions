//
// Created by Peppe on 06/06/20.
//

#include "func.h"


int boardCutting(vector<int> &cost_x, vector<int>& cost_y) {
    unsigned long long cross_y = 1, cross_x = 1, min_cost = 0;

    sort(cost_y.begin(), cost_y.end(), greater<>());
    sort(cost_x.begin(), cost_x.end(), greater<>());

    unsigned int i = 0, j = 0;

    while(i < cost_x.size() and j < cost_y.size()){
        if(cost_y[j] > cost_x[i]){
            min_cost += cost_y[j] * cross_x;
            ++cross_y;
            ++j;
        }
        else if(cost_x[i] >= cost_y[j]){
            min_cost += cost_x[i] * cross_y;
            ++cross_x;
            ++i;
        }
    }
    while(i < cost_x.size()){
        min_cost += cost_x[i] * cross_y;
        ++i;
    }
    while(j < cost_y.size()){
        min_cost += cost_y[j] * cross_x;
        ++j;
    }
    return (int) (min_cost % (1000000007));
}



