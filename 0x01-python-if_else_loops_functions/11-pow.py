#!/usr/bin/python3

def pow(a, b):
    """
    Compute a to the power of b and return the value.

    Args:
        a (int): The base.
        b (int): The exponent.

    Returns:
        int or float: The result of a ^ b.
    """
    result = 1

    if b < 0:
        a, b = 1 / a, -b

    for _ in range(b):
        result *= a

    return result
