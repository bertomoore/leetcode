class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class BSTIterator:

    def __init__(self, root: TreeNode):
        self.nodes = []
        
        while root:
            self.nodes.append(root)
            root = root.left

    def next(self) -> int:
        temp = self.nodes.pop()
        current = temp.right
        
        while current:
            self.nodes.append(current)
            current = current.left
            
        return temp.val

    def hasNext(self) -> bool:
        return len(self.nodes)