func plusOne(digits []int) []int {
    n := len(digits)
    for i := n - 1 ; i >= 0 ; i-- {

        if digits[i] + 1 != 10 {
            digits[i] += 1;
            return digits
        }
        digits[i] = 0

       
    }

    return append([]int{1} , digits...)

   
    
}