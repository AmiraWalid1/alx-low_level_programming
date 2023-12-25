#!/usr/bin/python3
""" This module contain island_perimeter function"""


def island_perimeter(grid):
    '''
    function returns the perimeter of the island described in grid
    '''
    width = 0
    height = 0
    for i in range(len(grid)):
        curr_width = 0
        for item in grid[i]:
            curr_width += item
        width = max(width, curr_width)

    for j in range(len(grid[0])):
        curr_height = 0
        for i in range(len(grid)):
            curr_height += grid[i][j]
        height = max(height, curr_height)

    return (width * 2) + (height * 2)
