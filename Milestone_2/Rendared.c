#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void Randerd(){
    FILE  *file;
    char filename[] = "characteristic.txt";
    char line_buffer[100];

    file = fopen(filename, "r");

    if(file == NULL){
        printf("Nope, this game chapter is broken, please check the DLC system\n");
    } 

    while(fgets(line_buffer,sizeof(line_buffer),file) != NULL){
        printf("%s", line_buffer);
        sleep(1);
    }

    fclose(file);
}

int main(void){
    Randerd();
    return 0;
}