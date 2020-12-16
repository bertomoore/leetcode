class TreeNode:

    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right



class Solution:
    
    def isValidBST(self, root: TreeNode):
        
        def helper(root, low=-math.inf, high=math.inf):

            if not root: return True
            if not low < root.val < high: return False

            valid_left = helper(root.left, low, root.val)
            valid_right = helper(root.right, root.val, high)

            return valid_left and valid_right
        
        return helper(root)