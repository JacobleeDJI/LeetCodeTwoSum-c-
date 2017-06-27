//
//  main.cpp
//  leeCode_1
//
//  Created by Jacoblee on 2017/6/26.
//  Copyright © 2017年 Jacoblee. All rights reserved.
//

#include "Solution.h"
#include "Solution.cpp"

int main() {
    vector<int> numbers = {2,7,11,15};
    vector<int> res;
    int target;
    Solution solution;
    
    cin >> target;
    res = solution.twosum(numbers, target);
    cout << "The numbers you input's indecies is : " << endl;
    for (int i=0; i < 2; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}

