#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    for h in range(len(matrix)):
        for b in range(len(matrix[h])):
            print("{:d}".format(matrix[h][b]), end="")
            if b != (len(matrix[h]) - 1):
                print(" ", end="")
        print("")
