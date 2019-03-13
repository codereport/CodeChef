# code_report Solution Video
# Video Link: https://youtu.be/51Bj6NCHKL0
# Problem Link: https://www.codechef.com/MARCH19B/problems/CHNUM/

def solve(l, n):
    a = sum(1 for i in l if i < 0)
    b = n - a
    if a == n or a == 0: 
        print(n, n)
    else:
        print(max(a, b), min(a, b))

t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    solve(l, n)
