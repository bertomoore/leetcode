class TreeNode {
    constructor(val, left, right) {
        this.val = (val === undefined ? 0 : val)
        this.left = (left === undefined ? null : left)
        this.right = (right === undefined ? null : right)
    }
}

const increasingBST = (root) => {
    if (root) {

        const head = new TreeNode()
        let current = head

        const depthFirstSearch = (node) => {
            if (node) {

                depthFirstSearch(node.left)

                const temp = new TreeNode(node.val)
                current.right = temp
                current = current.right

                depthFirstSearch(node.right)

            }
        }
        
        depthFirstSearch(root)

        return head.right
    }

}