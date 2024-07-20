class Solution:
    def maxHeightOfTriangle(self, red, blue):
        
        def getHeight(r, b):
            i = 1
            while True:
                if r < i:
                    break
                r -= i
                i += 1
                if b < i:
                    break
                b -= i
                i += 1 
            return i - 1
        
        return max(getHeight(red, blue), getHeight(blue, red))
