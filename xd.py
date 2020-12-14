def Fibonacci(n):
    if n <= 1:
        return n
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)

def ReverseString(s):
    if len(s) == 0:
        return s
    else:
        return ReverseString(s[1:]) + s[0]

#Main
print(Fibonacci(5))
print(ReverseString("Natasha!"))