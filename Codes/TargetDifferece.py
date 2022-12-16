if __name__=='__main__':
    arr = list(map(int, input().split()))
    x = 3
    freq = dict()
    for num in arr:
        freq[num] = freq.get(num,0)+1
    for key, value in freq.items():
        if key-x in freq:
            print(key, key-x)