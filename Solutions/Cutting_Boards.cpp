//
// Created by Peppe on 06/06/20.
//

#include "func.h"

// O(N*logN + M*logM)
int boardCutting(vector<int> &cost_x, vector<int>& cost_y) {
    unsigned long long cross_y = 1, cross_x = 1, min_cost = 0;
    vector<int> sequence = {};

    sort(cost_y.begin(), cost_y.end(), greater<>());    // O(N*log(N))
    sort(cost_x.begin(), cost_x.end(), greater<>());    // O(M*log(M))

    unsigned int i = 0, j = 0;

    while(i < cost_x.size() and j < cost_y.size()){ //  O(max(N,M))
        if(cost_y[j] > cost_x[i]){
            sequence.push_back(cost_y[j]);
            min_cost += cost_y[j] * cross_x;
            ++cross_y;
            ++j;
        }
        else if(cost_x[i] >= cost_y[j]){
            sequence.push_back(cost_x[i]);
            min_cost += cost_x[i] * cross_y;
            ++cross_x;
            ++i;
        }
    }
    while(i < cost_x.size()){
        sequence.push_back(cost_x[i]);
        min_cost += cost_x[i] * cross_y;
        ++i;
    }
    while(j < cost_y.size()){
        sequence.push_back(cost_y[j]);
        min_cost += cost_y[j] * cross_x;
        ++j;
    }

    cout << "Sequenza: ";
    for(int e : sequence)
        cout << e << " ";
    cout << endl;

    return (int) (min_cost % (1000000007));
}



