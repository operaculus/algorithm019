class Solution:
    def firstUniqChar(self, s: str) -> int:
        counter = {}
        if len(s) == 0:
            return -1
        for c in s:
            if c in counter:
                counter[c] += 1
            else:
                counter[c] = 1

        for k, v in counter.items():
            if v == 1:
                return s.index(k)
        return -1
