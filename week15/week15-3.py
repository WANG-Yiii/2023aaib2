#week15-3.py 寫到一半的Python 版,等一下還有{寫到一半的c版}
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N = len(s)
        for i in range(N): #先用Python 把字串的迴圈寫出來
            print( s[i], t[i]) #字串的陣列

        ans = 0
        return ans    