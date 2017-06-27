//
//  Solution.cpp
//  leeCode_1
//
//  Created by Jacoblee on 2017/6/27.
//  Copyright © 2017年 Jacoblee. All rights reserved.
//
#include <iostream>
#include <vector>
#include <map>
#include "Solution.h"

class Solution {
public:
    vector<int> twosum(vector<int> &numbers, int target) {
        int i;
        vector<int> results;
        map<int, int> hmap;
        for (i = 0; i < numbers.size(); i++) {
            if (!hmap.count(numbers[i])) {
                hmap.insert(pair<int, int>(numbers[i], i));
            }
            if (hmap.count(target - numbers[i])) {
                int n = hmap[target - numbers[i]];
                if (n < i) {
                    results.push_back(n);
                    results.push_back(i);
                    
                    return results;
                }
            }
        }
        return results;
    }
};
