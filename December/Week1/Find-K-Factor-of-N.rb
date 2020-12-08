def kth_factor(n, k)
    
    (1..n).each do |i|
        
        if n % i == 0 then k -= 1 end
        
        return i if k == 0
        
    end
        
    return -1 unless k == 0
    
    n
end