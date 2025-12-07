class MyHashSet:

    def __init__(self):
        self.hashset = {}
        

    def add(self, key: int) -> None:
        self.hashset[key] = True
        

    def remove(self, key: int) -> None:
        self.hashset.pop(key , None)
        

    def contains(self, key: int) -> bool:
        
        return key in self.hashset
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)