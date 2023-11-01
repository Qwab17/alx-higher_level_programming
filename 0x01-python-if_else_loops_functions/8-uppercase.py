#!/usr/bin/python3

def uppercase(str):
    """
    Print a string in uppercase followed by a new line.

    Args:
        str (str): The input string.

    Returns:
        None
    """
    for char in str:
        if 'a' <= char <= 'z':
            uppercase_char = chr(ord(char) - 32)
        else:
            uppercase_char = char
        print("{}".format(uppercase_char), end='')

    print()  # Print a new line at the end
