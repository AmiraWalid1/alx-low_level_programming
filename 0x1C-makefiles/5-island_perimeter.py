#!/usr/bin/python3
""" This module contain island_perimeter function"""


def island_perimeter(grid):
    '''
    function returns the perimeter of the island described in grid
    '''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i-1 >= 0 and grid[i-1][j] == 1: perimeter -= 1
                if i+1 < len(grid) and grid[i+1][j] == 1: perimeter -= 1
                if j-1 >= 0 and grid[i][j-1] == 1: perimeter -= 1
                if j+1 < len(grid[0]) and grid[i][j+1] == 1: perimeter -= 1

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))