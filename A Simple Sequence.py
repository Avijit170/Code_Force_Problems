t = int(input())
for _ in range(t):
    n = int(input())
    a = list(range(n,1,-1))
    a.insert(0,1)
    print(*a)