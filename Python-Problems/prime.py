import math
num = int(input("Enter number: "))

# Brute force Approach
def primenum(num):
    if num <= 1:
        return False
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

# optimal Approach
def is_prime(N):
    if num < 1:
        return False
    for i in range(2, int(math.sqrt(num))):  # need to check up to the square root of num
        if num % i == 0:
            return False
    return True


# ans = primenum(num)
ans = is_prime(num)

if ans:
    print("Prime Number")
else:
    print("Not a Prime Number")
