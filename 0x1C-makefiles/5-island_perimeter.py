#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    num_columns = len(grid[0])
    num_rows = len(grid)
    total_edges = 0
    total_land_cells = 0

    for i in range(num_rows):
        for j in range(num_columns):
            if grid[i][j] == 1:
                total_land_cells += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    total_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    total_edges += 1
    return total_land_cells * 4 - total_edges * 2
