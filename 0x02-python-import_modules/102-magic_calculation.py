#!/usr/bin/python3
def magic_calculation(a, b):
    from magic_calculation_102 import add, sub

    if a < b:
        result = add(a, b)
    else:
        result = sub(a, b)

    for i in range(4, 6):
        result = add(result, i)

    return result

if __name__ == "__main__":
    import dis
    dis.dis(magic_calculation)
