#define ROW 3
#define COLUMN 8
#define DASH 45


void printBoard(int array[ROW][COLUMN]);
void menu();
int getPullNumberRow(int array[ROW][COLUMN], int pullNumber);
int getPullNumberColumn(int array[ROW][COLUMN], int pullNumber);
void moveUp();
void moveDown();
void moveLeft();
void moveRight();
void redoUp();
void redoDown();
void redoLeft();
void redoRight();