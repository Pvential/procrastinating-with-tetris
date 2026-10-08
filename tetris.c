#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


struct Shape{
    char shape[] = {};
};


int findAddress(int x, int y){
    return (((y-1) * 32) + x);
}

int resetGrid(int *ptrGrid){
    // 1024 characters, 32 * 32 grid#
    int i;
    for(i=0; i < 1024; i++){
        ptrGrid[i] = ' ';
    }
    return 0; // gold experience requiem???
}

int renderGraphicsInAscii(int *ptrGrid){
    // 1024 characters, 32 * 32 grid
    int i;
    for(i=0; i < 1024; i++){
        printf("%c", ptrGrid[i]);
        if(i%32 == 0){
            printf("\n");
        }
    }
    return 0; // gold experience requiem???
}

int draw(int *ptrGrid, int x, int y, char c){
    
    int addr = findAddress(x, y);
    if (addr > 1024){ return 0; }
    ptrGrid[addr] = c;
    return 0;
}



int main() {
    // ooo scary pointers!!!!
    int *ptr = malloc(1024 * sizeof(char*)); // make the grid
    resetGrid(ptr)
    int i = 0;
    while (1) {
        i+=1;
        renderGraphicsInAscii(ptr);
        usleep(0.1 * (1000000));
    }
    free(ptr);
    return 0;
}
