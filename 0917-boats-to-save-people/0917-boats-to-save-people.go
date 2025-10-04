func numRescueBoats(people []int, limit int) int {
    sort.Ints(people)

    var r = len(people) - 1
    var l = 0
    var count = 0

    for l<=r {
        if people[l] + people[r] <= limit{
            count++
            l++
            r--
        }else{
            count++
            r--
        }
    }

    return count
}