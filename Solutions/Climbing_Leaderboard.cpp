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
// O(N * M) worst case
// O(M log N) best case
vector<int> climbingLeaderboard2(const vector<int> &scores, const vector<int> &alice) {
    vector<int> res = {};
    map<int, int> scores_rank;
    int rank = 0, prev_score = -1;
    for (int s : scores)    //O(N)
        if (s != prev_score){
            prev_score = s;
            scores_rank[s] = ++rank;
        }

    for(int a : alice){ // O(M)
        if(scores_rank.find(a) != scores_rank.end()) // O(log N)
            res.push_back(scores_rank[a]);
        else{
            for(auto s_r : scores_rank){    // O(N)
                if(a == s_r.first){
                    res.push_back(s_r.second);
                    break;
                }
                if(a < s_r.first){
                    res.push_back(s_r.second + 1);
                    break;
                }
                if(s_r.second == 1)
                    res.push_back(1);
            }
        }
    }
    return res;
}