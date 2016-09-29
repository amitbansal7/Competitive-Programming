test = int(input())
for j in range(test):
    n = int(input())
    h = list(map(int,input().split( )))
    h.sort()
    mindif  = 1000000000
    for i in range(1,n):
        if(mindif >(h[i] - h[i-1]) ):
            mindif = h[i] - h[i-1]
    print(mindif)
