# 938

class Solution:
    result:int=0
    def rangeSumBST(self, root: TreeNode, low: int, high: int) -> int:

        def dfs(root:TreeNode):
            if root:
                if root.val<=high and root.val>=low:
                    self.result+=root.val
                dfs(root.left)
                dfs(root.right)
        

        dfs(root)
        return self.result
