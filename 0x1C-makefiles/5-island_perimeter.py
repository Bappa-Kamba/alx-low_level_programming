#!/usr/bin/python3
"""
    Island - Perimeter function
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the total island in `grid`
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][col] == 0:
                    perimeter -= 1  # Decrease by 2 for the top side
                if col > 0 and grid[row][col - 1] == 0:
                    perimeter -= 1  # Decrease by 2 for the left side
                if row < rows - 1 and grid[row + 1][col] == 0:
                    perimeter -= 1  # Decrease by 2 for the bottom side
                if col < cols - 1 and grid[row][col + 1] == 0:
                    perimeter -= 1  # Decrease by 2 for the right side

    return perimeter
