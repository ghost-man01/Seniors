class Solution:
    
    def checkIsAP(self, arr, n):
        # code here
        arr.sort()
        d=arr[1]-arr[0];
        f=0
        for i in range(2,n):
            if(d!=arr[i]-arr[i-1]):
                f=1;
                return False
                break;
        if(f==0):
            return True