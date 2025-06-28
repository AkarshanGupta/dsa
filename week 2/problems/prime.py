def is_prime(n):
    if n <= 1:
        return False  # Numbers 0 and 1 are not prime

    # Try dividing n by numbers from 2 up to the square root of n
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False  # If n is divisible by i, it's not prime

    return True  # If no numbers divide it, then it's prime
