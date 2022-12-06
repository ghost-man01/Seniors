def Sor(arr):
    dict = {}
    one, two, zero = 0, 0, 0
    for i in arr:
        if arr[i] == 0:
            zero+=1
        elif arr[i] == 1:
            one += 1
        else:
            two += 1
    k= 0
    while(zero>0):
        arr[k]=0
        zero-=1
        k += 1
    while(one>0):
        arr[k]=1
        one-=1
        k += 1
        
    while(two>0):
        arr[k]=2
        two-=1
        k += 1
    print(arr)
            

arr = [0, 2, 1, 1, 0, 1, 2]
Sor(arr)