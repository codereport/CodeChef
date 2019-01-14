# code_report Solution
# Video Link: https://youtu.be/N7FBSGN0W24
# Problem Link: https://www.codechef.com/JAN19A/problems/DPAIRS/

n, m = (int(i) for i in input().split())
a = [[int(x), i] for i, x in enumerate(input().split())]
b = [[int(x), i] for i, x in enumerate(input().split())]
a.sort()
b.sort()
seen = set()
front = False
i, j = 0, len(a)-1
while(len(seen) < n + m - 1):
    front = not front
    x = a[i] if front else a[j]
    for y in b:
        val = x[0] + y[0]
        if val not in seen:
            print(x[1], ' ', y[1])
            seen.add(val)
        if (len(seen) == n + m - 1):
            break;
    if front: i += 1
    else: j -= 1
