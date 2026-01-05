class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        # Brute force0
        # result_tuple = permutations(s1)

        # for res in result_tuple:
        #     string = "".join(res)

        #     if string in s2:
        #         return True

        # return False

        #  TC :- O(26 * n)
        # if len(s1) > len(s2):
        #     return False

        # mp = {}

        # for ch in s1:
        #     mp[ch] = 1 + mp.get(ch , 0)

        # mp2 = {}

        # l = 0
        # r = len(s1) - 1

        # for i in range(l , r + 1):
        #     mp2[s2[i]] = 1 + mp2.get(s2[i] , 0)

        # while r < len(s2):
        #     if mp == mp2:
        #         return True
        #     mp2[s2[l]] -= 1
        #     if mp2[s2[l]] <= 0:
        #         mp2.pop(s2[l])

        #     l += 1
        #     r += 1
        #     if r < len(s2):
        #         mp2[s2[r]] = 1 + mp2.get(s2[r] , 0)

        # if mp == mp2:
        #     return True
        # return False
        # return False

        #  TC :- O(26) + O(n)

        if len(s1) > len(s2):
            return False

        s1Count, s2Count = [0] * 26, [0] * 26
        for i in range(len(s1)):
            s1Count[ord(s1[i]) - ord("a")] += 1
            s2Count[ord(s2[i]) - ord("a")] += 1

        matches = 0
        for i in range(26):
            matches += 1 if s1Count[i] == s2Count[i] else 0

        l = 0
        for r in range(len(s1), len(s2)):
            if matches == 26:
                return True

            index = ord(s2[r]) - ord("a")
            s2Count[index] += 1
            if s1Count[index] == s2Count[index]:
                matches += 1
            elif s1Count[index] + 1 == s2Count[index]:
                matches -= 1

            index = ord(s2[l]) - ord("a")
            s2Count[index] -= 1
            if s1Count[index] == s2Count[index]:
                matches += 1
            elif s1Count[index] - 1 == s2Count[index]:
                matches -= 1
            l += 1
        return matches == 26
