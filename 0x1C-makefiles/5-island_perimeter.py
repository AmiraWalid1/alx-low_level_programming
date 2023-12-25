#!/usr/bin/python3
""" This module contain island_perimeter function"""


def island_perimeter(grid):
    '''
    function returns the perimeter of the island described in grid
    '''
    width = 0
    height = 0

    for i in range(len(grid)):
        flag = 0
        for item in grid[i]:
            if item == 1:
                flag = 1
                break
        width += (1 if flag else 0)

    for j in range(len(grid[0])):
        flag = 0
        for i in range(len(grid)):
            if grid[i][j] == 1:
                flag = 1
                break
        height += (1 if flag else 0)

    return (width * 2) + (height * 2)
