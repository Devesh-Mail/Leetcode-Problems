class ProductOfNumbers:

    def __init__(self):
        self.array=[]

    def add(self, num: int) -> None:
        if num==0:
            self.array=[]
        elif len(self.array)==0: 
            self.array.append(num)
        else:
                self.array.append(self.array[-1]*num)

    def getProduct(self, k: int) -> int:

        if k>len(self.array):
            return 0

        if k==len(self.array):
            return self.array[-1]
        div=self.array[-k-1]
        return self.array[-1]//(1 if div==0 else div)


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)