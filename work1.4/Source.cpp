#include <stdio.h>
#define ROW 10
#define COL 10

int main(void) {
    int draw[ROW][COL] = { {0,0,1,1,0,1,1,0,0,0},
                          {0,1,0,0,1,0,0,1,0,0},
                          {1,0,0,0,0,0,0,0,1,0},
                          {1,0,0,0,0,0,0,0,1,0},
                          {1,0,0,0,0,0,0,0,1,0},
                          {0,1,0,0,0,0,0,1,0,0},
                          {0,0,1,0,0,0,1,0,0,0},
                          {0,0,0,1,0,1,0,0,0,0},
                          {0,0,0,0,1,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0} };
    printf(" #| ");
    for (int i = 0; i < COL; i++) {
        printf("%d ", i);
    }
    printf("\n--+");
    for (int i = 0; i < COL; i++) {
        printf("--");
    }
    printf("\n");
    for (int i = 0; i < ROW; i++) {
        printf(" %d|", i);
        for (int j = 0; j < COL; j++) {
            if (draw[i][j] == 1) {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}