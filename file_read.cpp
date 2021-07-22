#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "file_read.h"

uint32_t file_read(char* fileName){
    
    uint32_t num;
    
    FILE* file = fopen(fileName, "rb"); //read binary
    
    fread(&num, 1, sizeof(uint32_t), file); //read num
    
    fclose(file);

    return num;
}
