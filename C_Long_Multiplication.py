for _ in range(int(input())):
    n = input()
    k = input()
    c = n[0]
    d = k[0]
    for i in range(1,len(n)):
        if(c > d):
            c+=min(n[i], k[i])
            d+=max(n[i], k[i])
        else:
            c+=max(n[i], k[i])
            d+=min(n[i], k[i])
    print(c)
    print(d)