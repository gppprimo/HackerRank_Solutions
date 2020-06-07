//
// Created by Peppe on 03/10/20.
//

#ifndef TEST_FUNC_H
#define TEST_FUNC_H

#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <map>
#include <functional>

using std::string;
using std::stringstream;
using std::vector;
using std::cout;
using std::endl;
using std::unordered_map;
using std::unordered_set;
using std::pow;
using std::pair;
using std::map;
using std::greater;


string counterGame(long n);
double solve(vector<vector<int>>);
vector<int> climbingLeaderboard(const vector<int>&, const vector<int>&);
int jumpingOnClouds(const vector<int> &, int );
string solve(long, long, long, long);
int equalizeArray(const vector<int> &);
int boardCutting(vector<int>&, vector<int>&);


#endif //TEST_FUNC_H
