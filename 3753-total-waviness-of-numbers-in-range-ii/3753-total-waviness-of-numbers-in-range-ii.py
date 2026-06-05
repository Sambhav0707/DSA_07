class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        def calc(num):
            if num < 100:
                return 0

            s = str(num)
            dp = {}

            def solve(idx, pp, p, tight, lead):
                if idx == len(s):
                    return (1, 0)

                key = (idx, pp, p, tight, lead)
                if key in dp:
                    return dp[key]

                cnt = 0
                wave = 0

                lim = int(s[idx]) if tight else 9

                for d in range(lim + 1):
                    ntight = tight and (d == lim)
                    nlead = lead and (d == 0)

                    np = 10 if nlead else d
                    npp = 10 if nlead else (10 if lead else p)

                    wavy = False
                    if pp != 10 and p != 10:
                        if (pp < p > d) or (pp > p < d):
                            wavy = True

                    c, w = solve(idx + 1, npp, np, ntight, nlead)

                    cnt += c
                    wave += w + (c if wavy else 0)

                dp[key] = (cnt, wave)
                return dp[key]

            return solve(0, 10, 10, True, True)[1]

        return calc(num2) - calc(num1 - 1)