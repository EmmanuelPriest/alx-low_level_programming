#!/usr/bin/python3

'''Defines the perimeter of the island in grid'''


def island_perimeter(grid):
    '''Returns the perimeter of the island described in grid

    the grid is water = 0 and land = 1
    Args:
        grid (list): List of list of integers
    Returns:
        perimeter of the island in grid
    '''

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                size += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n-1][m] == 1):
                    edges += 1
    return size * 4 - edges * 2
