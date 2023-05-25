#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """Calculate the perimeter of island
    args:
        grid: 2 dimensional array representation
                of island
                0s means border of water
                1s means island cells
                return the perimeter of the grids of 1s
    """
    if (isinstance(grid, list)):
        perimeter = 0
        cords = []
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if (grid[i][j] == 1):
                    _new = (i, j)
                    cords.append(_new)
                    perimeter += -1 if (i - 1, j) in cords else 1
                    perimeter += -1 if (i, j + 1) in cords else 1
                    perimeter += -1 if (i + 1, j) in cords else 1
                    perimeter += -1 if (i, j - 1) in cords else 1
        return perimeter
