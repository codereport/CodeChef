# code_report Solution
# https://youtu.be/w6l_tDniL34


def binary_nim (stacks, first):

   a, b = 0, 0
   for stack in stacks:
      if stack[0] == '0': a += stack.count ('0')
      if stack[0] == '1': b += stack.count ('1')

   if a == b: return ("Dum" if first == "Dee" else "Dee")
   else:      return ("Dee" if a > b          else "Dum")

# Code Execution Start

t = int(input ())

for i in range (t):
   n = input ()
   n, s = n.split ()
   n = int (n)
   v = []
   for j in range (n): 
      x = input ()
      v.append (x)

   print (binary_nim (v, s))
