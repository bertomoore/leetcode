from random import randint

class ListNode:

    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:

    def __init__(self, head: ListNode):
        self.vals = []
        
        while head:
            self.vals.append(head.val)
            head = head.next

    def getRandom(self) -> int:
        index = randint(0, len(self.vals)-1)
        
        return self.vals[index]