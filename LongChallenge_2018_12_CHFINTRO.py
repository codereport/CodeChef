# code_report Solution
# https://youtu.be/aWBkxc__VDY

import sys

n, r = map(int,input().split())
for _ in range(n):
    x = int(input())
    print("Bad boi") if x < r else print("Good boi")
    sys.stdout.flush()
