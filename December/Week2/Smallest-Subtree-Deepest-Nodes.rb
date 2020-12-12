class TreeNode
    attr_accessor :val, :left, :right
    def initialize(val = 0, left = nil, right = nil)
        @val = val
        @left = left
        @right = right
    end
end

class DepthTracker
    attr_accessor :node, :depth
    def initialize(node = nil, depth = 0)
        @node = node
        @depth = depth
    end
end

def depthFirstSearch(root)
    return DepthTracker.new() unless root

    left = depthFirstSearch(root.left)
    right = depthFirstSearch(root.right)

    if left.depth > right.depth
        return DepthTracker.new(left.node, left.depth + 1)
    end

    if left.depth < right.depth
        return DepthTracker.new(right.node, right.depth + 1)
    end

    DepthTracker.new(node, left.depth + 1)
end

def subtree_with_all_deepest(root)
    return depthFirstSearch(root).node
end