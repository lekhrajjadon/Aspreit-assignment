#include <algorithm>
#include <climits> 
#include <iostream>
 using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

 
int solve(TreeNode* root, int& maxSum) {
   
    if (root == nullptr) return 0;
  
    int left = max(solve(root->left, maxSum), 0);  
    int right = max(solve(root->right, maxSum), 0); 
    

    maxSum = max(maxSum, left + right + root->val);
    return max(left, right) + root->val;
}


int getMaxPathSum(TreeNode* root) {
    
    int maxSum = INT_MIN;
    

    solve(root, maxSum);
    
    return maxSum;
}

 
int main() {
    // example is: [1,2,3]
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    
    cout << "Maximum Path Sum: " << getMaxPathSum(root1) << endl; 
     return 0;
}