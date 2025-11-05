#include <stdio.h>

int main() {
    int a[5][5], i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(j == 4 - i) 
                a[i][j] = 0;           
            else if(j < 4 - i)
                a[i][j] = 1;          
            else
                a[i][j] = -1;        
        }
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }

    return 0;
}
