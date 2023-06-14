#!/usr/bin/python3

def weight_average(my_list=[]):
    if not isinstance(my_list, list) or len(my_list) == 0:
        return (0)

    scr = 0
    w = 0
    for tup in my_list:
        scr += (tup[0] * tup[1])
        w += tup[1]
    return (scr / w)
