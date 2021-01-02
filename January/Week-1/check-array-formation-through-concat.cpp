/**
 * 
 * You are given an array of distinct integers arr 
 * and an array of integer arrays pieces, 
 * where the integers in pieces are distinct. 
 * Your goal is to form arr 
 * by concatenating the arrays in pieces in any order. 
 * However, you are not allowed to reorder 
 * the integers in each array pieces[i]. 
 * 
 * Return true if it is possible to form the array arr from pieces. 
 * Otherwise, return false.
 * 
 **/

#include <iostream>
#include <algorithm>
#include <vector>

using std::find;
using std::vector;

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {

        for (auto piece : pieces) {
            vector<int>::iterator it = find(arr.begin(), arr.end(), piece[0]);

            if (it == arr.end()) return false;

            if (piece.size() > 1) {
                for (int i=0; i<piece.size(); i++) {
                    if (it+i == arr.end() || *(it+i) != piece[i]) return false;
                }
            }
        }
        
        return true;
    }
};