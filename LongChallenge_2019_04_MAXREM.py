# code_report Solution
# Video Link: https://youtu.be/JT3AYsVtYKM
# Problem Link: https://www.codechef.com/APRIL19B/problems/MAXREM/

def solve(l: [int]) -> int:
    l = list(set(l))
    l.sort()
    return 0 if len(l) == 1 else l[-2]

_ = int(input())
l = list(int(i) for i in input().split())
print(solve(l))
