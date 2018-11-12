# code_report Solution
# https://youtu.be/xfvvyKms49Y

ns = list(map(int,input().split()))
ns.pop(0) # remove t
for n in ns:
    d = 2**n
    l = [ d//2, d//4 ]
    for i in range(2, n):
        l.append(int(l[i - 1] + l[i - 2])//2)
    print(str(l[n - 1]) + ' ' + str(d) + ' ', end='')
