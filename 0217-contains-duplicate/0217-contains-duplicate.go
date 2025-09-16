func containsDuplicate(nums []int) bool {
    var mp = make(map[int]int)

    for _ , num := range nums{
        if _ , ok := mp[num]; ok{
            return true
            break
        }else{
            mp[num]++
        }
    }

    return false
    
}