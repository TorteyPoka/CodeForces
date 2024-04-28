n,k = map(int, input().split())
h = n / (2 * (k+1))
h = int(h)
print(h, k*h, n - (k+1)* h)