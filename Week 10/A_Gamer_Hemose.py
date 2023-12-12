t = int(input())

for _ in range(t):
    n, h = map(int, input().split())
    a = list(map(int, input().split()))
    
    a.sort()
    a1 = a[n - 1]
    a2 = a[n - 2]

    total_moves = (h // (a1 + a2)) * 2
    h %= (a1 + a2)

    if h > a1:
        total_moves += 2
    elif h > 0:
        total_moves += 1

    print(total_moves)
