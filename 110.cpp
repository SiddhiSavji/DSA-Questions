#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    int height(TreeNode *root) {
        if (!root) return 0;
        int leftH = height(root->left);
        int rightH = height(root->right);
        return max(leftH, rightH) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int leftH = height(root->left);
        int rightH = height(root->right);
        if (abs(leftH - rightH) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    // Example: build a tree manually
    TreeNode* root = new TreeNode(1,
                        new TreeNode(2,
                            new TreeNode(3),
                            new TreeNode(4)),
                        new TreeNode(5));

    Solution s;
    cout << (s.isBalanced(root) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
