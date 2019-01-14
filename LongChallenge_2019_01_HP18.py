# code_report Solution
# Video Link: https://youtu.be/_I2MIuvbGog
# Problem Link: https://www.codechef.com/JAN19A/problems/HP18/

t = int(input())
for _ in range(t):
    n, a, b = (int(i) for i in input().split())
    l = list(map(int, input().split()))
    both, A, B = 0, 0, 0
    for i in l:
        if i % a == 0 and i % b == 0: both += 1
        elif i % a == 0: A += 1
        elif i % b == 0: B += 1       
    print('BOB') if A > B - (both > 0) else print('ALICE')
