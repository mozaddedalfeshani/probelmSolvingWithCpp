class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:

        sum: int = numBottles
        last: int = numBottles
        reminder: int = 0
        while True:
            last = int(numBottles / numExchange)  # 1
            sum += last
            print(sum)

            reminder = numBottles % numExchange  # 2
            numBottles = last + reminder

            if numBottles < numExchange:
                break

        return int(sum)

#-----------------------------------------------------------------------

e1 = Solution()
ans = e1.numWaterBottles(15, 4)
print(ans)

