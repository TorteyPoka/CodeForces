n,k = map(int, input().split())
n = (n+1)/2
n = int(n)
if(n >= k):
    print((k*2)-1)
else: print(int(k-n) * 2)