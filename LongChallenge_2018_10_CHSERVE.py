# code_report Solution
# https://youtu.be/GMY0D60TPWE

t = int(input())
for _ in range(t):
    a, b, k = [int(i) for i in input().split()]
    print('CHEF') if (a + b) % (2 * k) < k else print('COOK')
