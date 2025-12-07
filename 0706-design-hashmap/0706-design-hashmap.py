class MyHashMap:

    def __init__(self):
        self.hashmap = {}
        

    def put(self, key: int, value: int) -> None:
        self.hashmap[key] = value 
        

    def get(self, key: int) -> int:
        return self.hashmap.get(key , -1)
            
        

    def remove(self, key: int) -> None:
        
        
        return  self.hashmap.pop(key , None)
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)