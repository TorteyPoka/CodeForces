def solve():
    n, k, x = map(int, input().split())  # Read n, k, x
    ar = list(map(int, input().split()))  # Read the array a
    sum_a = sum(ar)  # Calculate sum of array `a`
    
    if sum_a >= x:
        id_ = n
        sum2 = 0
        for i in range(n-1, -1, -1):  # Traverse array from end to start
            if sum2 + ar[i] >= x:
                id_ = i + 1
                break
            sum2 += ar[i]
        print(n * (k - 1) + id_)  # Print the result
        return

    if sum_a * k < x:
        print(0)  # Print 0 if sum is too small
        return

    a = x // sum_a
    b = sum_a * a
    c = x - b
    id_ = 0
    
    for i in range(n):
        if c - ar[i] <= 0:
            id_ = i
            break
        c -= ar[i]
    
    g = k - (a + (1 if x % sum_a != 0 else 0))
    h = g * n
    print(h + id_)

def main():
    T = int(input())  # Read number of test cases
    for _ in range(T):
        solve()

if __name__ == "__main__":
    main()
