def island_perimeter(grid):
    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0
    for i range(height):
        for j range(width):
            if grid[i][j] == 1:
                size += 1
                if(j > 0 and grid[i][j-1] == 1):
                    edge += 1
                    if(i > 0 and grid[i-1][i] == 1):
                        edge += 1
return((size*4)-edge*2)
