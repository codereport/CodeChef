# code_report Solution
# https://youtu.be/EbgOk_IDl1I

t = int(input())
for _ in range(t):
    l = [1, 0, 0]
    n = int(input())
    for i in range(3, n+1):
        d = i % 26
        if d == 3:  l[0], l[1] = l[1], l[0]
        if d == 11: l[1], l[2] = l[2], l[1]
        if d == 1:  l[0], l[2] = l[2] * 2, l[0]
    print(' '.join(map(str, l)) )
