#ifndef __MAIN_H_
#define __MAIN_H_

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h> 


#define MAX_PEOPLE 100
typedef enum {anxin, antrom, congnhan}loainguoi;
typedef struct{
    char *type;
    void *income;
    void (*action)(int,FILE*);
}someone_t;

#endif