#write a python
#!/usr/bin/python3
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
            if(i >  and grid[i-1] == 1):
                edge += 1
return((size*4) - edge*2)
