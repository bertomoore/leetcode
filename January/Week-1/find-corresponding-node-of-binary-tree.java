/**
 * Given two binary trees original and cloned 
 * and given a reference to a node target in the original tree. 
 * The cloned tree is a copy of the original tree. 
 * Return a reference to the same node in the cloned tree. 
 * Note that you are not allowed to change any of the two trees 
 * or the target node and the answer must be a reference 
 * to a node in the cloned tree.
 */


public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    TreeNode result;
    
    public final TreeNode getTargetCopy(final TreeNode original, 
                                        final TreeNode cloned, 
                                        final TreeNode target) {
                                            
        inorder(original, cloned, target);
        
        return result;
    }
    
    private void inorder(TreeNode original, TreeNode cloned, TreeNode target) {
        
        if (original == null || result != null) return;
            
        if (original == target) result = cloned;
            
        inorder(original.left, cloned.left, target);
        inorder(original.right, cloned.right, target);
    }
    
}