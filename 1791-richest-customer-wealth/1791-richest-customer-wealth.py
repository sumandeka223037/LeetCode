class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maximum = 0
        for i in accounts:
            list_Sum = sum(i)
            if list_Sum > maximum:
                maximum = list_Sum
        return maximum   
        