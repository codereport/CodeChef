# code_report Solution
# https://youtu.be/CvJz_RgTYgU

n = int (input ())

for i in range (n):
   x = int (input ())
   print (-1 if x % 5 != 0 else (0 if x % 2 == 0 else 1))
