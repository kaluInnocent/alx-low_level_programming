#!/usr/bin/python3
def check_palindrome():
    max = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if str(product) == str(product)[::-1]:
                if product > max:
                    max = product
    return max

print(check_palindrome())
