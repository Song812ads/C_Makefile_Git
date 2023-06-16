#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h> 

void work(int i, FILE* fp){
    fprintf(fp, "%s %d\n", "Nguoi thu: ", i+1);
    fprintf(fp, "%s \n","Income = 500000");
}
