# code_report Solution
# https://youtu.be/yMxoRT381yQ
    
# from https://docs.python.org/3/library/bisect.html

import bisect

def find_lt(a, x):
    'Find rightmost value less than x'
    i = bisect.bisect_left(a, x)
    if i:
        return a[i-1]
    raise ValueError

def find_le(a, x):
    'Find rightmost value less than or equal to x'
    i = bisect.bisect_right(a, x)
    if i:
        return a[i-1]
    raise ValueError

def find_gt(a, x):
    'Find leftmost value greater than x'
    i = bisect.bisect_right(a, x)
    if i != len(a):
        return a[i]
    raise ValueError

def find_ge(a, x):
    'Find leftmost item greater than or equal to x'
    i = bisect.bisect_left(a, x)
    if i != len(a):
        return a[i]
    raise ValueError

# Solution

l = list ()

for i in range (0, 31):
    for j in range (0, 31):
        if (i != j): l.append (2**i + 2**j)

l.sort ()

t = int (input ())
for i in range (0, t):
    N   = int (input ())
    ans = 0

    if (N < 3): ans = 3 - N
    else:       ans = min (N - find_le (l, N), find_gt (l, N) - N)

    print (ans)
    
    
