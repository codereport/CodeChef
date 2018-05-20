# code_report Solution
# https://youtu.be/y03Oe5RRVeQ

def secret_recipe (x1, x2, x3, v1, v2):
    t1 = (x3 - x1) / v1
    t2 = (x2 - x3) / v2

    if t1 < t2:   print ("Chef")
    elif t1 > t2: print ("Kefa")
    else:         print ("Draw")

t = int (input ())

for i in range (t):
   s = input ()
   x1, x2, x3, v1, v2 = (int (n) for n in s.split ())
   secret_recipe (x1, x2, x3, v1, v2)   
 
