#!/usr/bin/python3
"""Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    patch = 0
    bord = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                patch += 1
                if row != len(grid) - 1:
                    if grid[row + 1][col] == 1:
                        bord += 1
                    if col != len(grid[row]) - 1:
                        if grid[row][col + 1] == 1:
                            bord += 1
    perimeter = (patch * 4) - (bord * 2)
    return perimeter
