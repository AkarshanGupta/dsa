def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Taking input and converting to int
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Calling the function
print("GCD is:", gcd(a, b))
      