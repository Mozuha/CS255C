//Establish fixed maze '#' is a wall, '.' is a path
char maze[12][12] = {
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
    { '#', '.', '.', '.', '#', '.', '.', '#', '.', '.', '.', '#' },
    { '.', '.', '#', '.', '#', '.', '#', '#', '.', '#', '.', '#' },
    { '#', '#', '#', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
    { '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
    { '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
    { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '#', '#' },
    { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
    { '#', '.', '.', '.', '.', '.', '.', '#', '.', '#', '.', '#' },
    { '#', '#', '#', '#', '#', '#', '.', '#', '.', '#', '.', '#' },
    { '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
};

//set starting and ending points
int startRow = 2;
int startCol = 0;
int endRow = 4;
int endCol = 11;