#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionTwelve{
public:
	int missingNumber(vector<int>& nums){
		int sum=nums.size()*(nums.size()+1)/2;
		for(int num: nums){
			sum-=num;
		}
		return sum;
	}
};

#endif