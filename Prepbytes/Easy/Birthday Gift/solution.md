We check every edge case here.

check if b==a, If so, we return true

If a > b && c > 0 OR a < b && c < 0 then we return NO because this way, we'll never be able to reach our target value 'b'

Now if c == 0 and a == b then return true, but everything else will fail where c == 0 because difference is equal to zero and will never qualify for achieving b.

finally, we calculate difference of b and a which gives 'u'.

This 'u' must be divisible by difference 'c' in order to attain b. If the condition is satisfied, return true, else return false.
