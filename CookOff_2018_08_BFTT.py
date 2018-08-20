# code_report Solution
# https://youtu.be/Enbht_Uf1CE

t = int (input ())
for i in range (t):
    n = int (input ()) + 1
    while (str (n).count ('3') < 3):
        n = n + 1
    print (n)
    
