#pragma once
#include<stdio.h>
#include<stdlib.h>

char *exec_r(char* cmd) {
    FILE *outputFile = fopen("./output.txt", "w");
    char exec_cmd[255];
    if(outputFile)
    {
      printf("There was an error opening output.txt");   
      return 1;             
    }
    fprintf(outputFile, "%s", cmd);

    char* response = (char*)malloc(sizeof(char)*255+1); 
    fread(response, 255, 1, outputFile); 
    fclose(outputFile);
    
    return response;
}
