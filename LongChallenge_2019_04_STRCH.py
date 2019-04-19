# code_report Solution
# Video Link: 
# Problem Link: https://www.codechef.com/APRIL19B/problems/STRCH/

def sumN(n: int) -> int:
    return (n*(n+1)) // 2

def solve(n: int, s: str, c: chr) -> int:
    total   = sumN(n)
    missing = sum(sumN(len(i)) for i in s.split(c))
    return total - missing

t = int(input())
for _ in range(t):
    n = int(input())
    s, c = input().split()
    print(solve(n, s, c))
