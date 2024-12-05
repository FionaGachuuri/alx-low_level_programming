#!/usr/bin/python3
"""
Module 5-island_perimeter
Defines a function to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): A 2D list where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:  # Land cell
                # Add 4 for the current cell
                perimeter += 4

                # Check upper neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
