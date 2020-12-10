class Solution {
    func validMountainArray(_ arr: [Int]) -> Bool {
        
        if arr.count < 3 {return false}
        
        if arr[0] > arr[1] {return false}
        
        var reachedPeak = false
        var lastPoint = -1
        
        for point in arr {
            
            if point == lastPoint {return false}
            
            if reachedPeak && point > lastPoint {return false}
            
            reachedPeak = point < lastPoint
            
            lastPoint = point
        }
        
        return reachedPeak
    }
}