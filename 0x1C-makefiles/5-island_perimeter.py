#!/usr/bin/python3
"""
island_perimeter module
"""


def island_perimeter(grid):
    """ island_perimeter - returns the perimeter of the
                            island described in grid
    Args:
        grid (list): a list of list of integers
    Return: the perimeter of the island
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    side = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                size += 1
                if row > 0 and grid[row - 1][col] == 1:
                    side += 1
                if col > 0 and grid[row][col - 1] == 1:
                    side += 1
    return (size * 4) - (side * 2)
