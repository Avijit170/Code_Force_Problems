t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    
    mn = float('inf')
    ans = 0
    
    for i in range(n):
        mn = min(mn, p[i])
        if mn >= i + 1:
            ans += 1
        else:
            break
    
    print(ans)