#include "func.h"

double solve(vector<vector<int>> coordinates) {
    double max_x = 0, min_x = 0, max_y = 0, min_y = 0;
    for(int i = 0; i < coordinates.size(); ++i){
        for(int j = 0; j < coordinates[i].size(); ++j){
            if(j == 0){
                if(coordinates[i][j] > max_x)
                    max_x = coordinates[i][j];
                if(coordinates[i][j] < min_x)
                    min_x = coordinates[i][j];
            } else {
                if(coordinates[i][j] > max_y)
                    max_y = coordinates[i][j];
                if(coordinates[i][j] < min_y)
                    min_y = coordinates[i][j];
            }
        }
    }
    double x_max_dist = std::abs(max_x - min_x);
    double y_max_dist = std::abs(max_y - min_y);
    return std::max(std::max(x_max_dist, y_max_dist), sqrt((pow(std::max(max_x, std::abs(min_x)), 2) + pow(std::max(max_y, std::abs(min_y)), 2))));
}