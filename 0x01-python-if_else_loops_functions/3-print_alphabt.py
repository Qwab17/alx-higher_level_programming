#!/usr/bin/python3

for letter in range(ord('a'), ord('z') + 1):
    if chr(letter) not in 'qe':
        print(
            "{:c}".format(letter),
            end='' if letter < ord('z') and chr(letter + 1) not in 'qe' else ''
        )
