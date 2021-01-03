class Solution:
    maxLen =0
    lowIdx = 0
    def extendPalindrome(self, s, j, k):
        while j >=0 and k < len(s) and s[j] == s[k] :
            j -= 1
            k += 1
        if k - j -1 > self.maxLen:
            self.lowIdx = j+1
            self.maxLen = k - j -1

    def longestPalindrome(self, s: str) -> str:
        if len(s) < 2:
            return s

        size = len(s)
        for i in range(0, size-1):
            self.extendPalindrome(s, i, i)
            self.extendPalindrome(s, i, i+1)
        return s[self.lowIdx:self.lowIdx + self.maxLen]
