#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):

    nv_list = []
    for h in range(0, list_length):
        try:
            div = my_list_1[h] / my_list_2[h]
        except TypeError:
            print("wrong type")
            div = 0
        except ZeroDivisionError:
            print("division by 0")
            div = 0
        except IndexError:
            print("out of range")
            div = 0
        finally:
            nv_list.append(div)
    return (nv_list)
