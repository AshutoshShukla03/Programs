//  Problem Statement-
// Given an m × n integer matrix, if an element is 0, set its entire row and column to 0.
// You must do it in-place.

#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    bool firstRow = false, firstCol = false;

    // Step 1: check first row & col
    for(int j = 0; j < m; j++)
        if(matrix[0][j] == 0) firstRow = true;

    for(int i = 0; i < n; i++)
        if(matrix[i][0] == 0) firstCol = true;

    // Step 2: mark
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 3: update
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }

    // Step 4: handle first row/col
    if(firstRow) {
        for(int j = 0; j < m; j++)
            matrix[0][j] = 0;
    }

    if(firstCol) {
        for(int i = 0; i < n; i++)
            matrix[i][0] = 0;
    }
}