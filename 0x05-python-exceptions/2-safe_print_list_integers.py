#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):

    size = 0
    for length in my_list:
        size = size + 1

    ReturnValue = 0
    try:
        for y in range(0, x):
            if type(my_list[y]) is int:
                print("{:d}".format(my_list[y]), end="")
                ReturnValue = ReturnValue + 1
            else:
                continue

        print()
        return ReturnValue

    except IndexError:
        pass
