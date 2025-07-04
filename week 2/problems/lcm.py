
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return abs(a * b) // gcd(a, b)

a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))

print("The LCM of the two numbers is:", lcm(a, b))
