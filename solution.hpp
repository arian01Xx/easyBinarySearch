#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include "struct.hpp"

using namespace std;

class SolutionEleven{
public:
	int countingTraversal(TreeNode* root, int& num){
		if(root==nullptr) return 0;
		num++;
		countingTraversal(root->left,num);
		countingTraversal(root->right,num);
		return num;
	}
	int countNodes(TreeNode* root){
		int num=0;
		countingTraversal(root,num);
		return num;
	}
};

#endif