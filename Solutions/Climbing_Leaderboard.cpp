//
// Created by Peppe on 04/20/20.
//

#include "func.h"

vector<int> climbingLeaderboard(const vector<int> &scores, const vector<int> &alice) {
    vector<int> res = {};
    vector<int> rank_scores;
    int curr_score = -1;

    // O(n)
    for(int score : scores){
        if(score != curr_score)
            rank_scores.push_back(curr_score = score);
    }

    // O(n^2)
    for(int a : alice){
        for(int i = 0; i < rank_scores.size(); ++i){
            if(a >= rank_scores[i] or (i == 0 and a >= rank_scores[i])){
                res.push_back(i + 1); break;}
            else if(i == rank_scores.size() - 1 and a < rank_scores[i]){
                res.push_back(i + 2); break;}
        }
    }

    return res;
}