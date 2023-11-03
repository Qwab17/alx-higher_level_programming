#!/usr/bin/python3

if __name__ == "__main":
    from sys import argv

    argc = len(argv)

    if argc == 1:
        print(0)
    else:
        total = sum(int(arg) for arg in argv[1:])
        print(total)
