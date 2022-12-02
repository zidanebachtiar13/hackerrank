#!/bin/python3

import math
import os
import random
import re
import sys

def solve(s):
    s = s.split(" ")
    s = [i.capitalize() for i in s]
    s = " ".join(s)
    return s

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
