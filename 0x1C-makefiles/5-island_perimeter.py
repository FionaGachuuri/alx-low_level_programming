#!/usr/bin/python3
"""Module that defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    The grid is a list of lists of integers where:
        - 0 represents water
        - 1 represents land
        - Each cell is a square with side length 1
        - Cells are connected horizontally or vertically only
        - The grid is rectangular and surrounded by water

    Args:
        grid (list of list of int): A 2D grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
