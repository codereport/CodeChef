# code_report Solution
# Video link: https://youtu.be/xZKd3lkYLdE
# Problem Link: https://www.codechef.com/JAN19A/problems/FANCY

# BETTER SOLUTION:

t = int(input())
for _ in range(t):
    s = set(input().strip().split())
    if 'not' in s: print('Real Fancy') 
    else:          print('regularly fancy')

# BAD SOLUTION

def isFancy(s):
    n = len(s)
    return s == 'not' or \
           (n >= 4 and (s[:4]  == 'not ' or \
                        s[-4:] == ' not' or \
                        ' not ' in s))
                    
t = int(input())
for _ in range(t):
    s = input().strip()
    print('Real Fancy') if isFancy(s) else print('regularly fancy')
