#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "student.h"

void feature1(FILE *fin, FILE *fout) {
    
    char buffer[80];
    char *status = NULL;
    status = fgets(buffer, sizeof(buffer), fin);

    if(status != NULL) {
        fprintf(fout, "%s", buffer);
    }
}

void feature2(FILE *fin, FILE *fout) {
    
    char buffer[80];
    char *status = NULL;
    status = fgets(buffer, sizeof(buffer), fin);

    if(status != NULL) {
        int var = strlen(buffer);
        for (int i = var -2; i >= 0; i--) {
        fprintf(fout, "%c", buffer[i]);
        }
    }
}

void feature3(FILE *fin, FILE *fout){

    char buffer[80];
    char *status = NULL;
    char *ptr;
    char *savePtr;
    int i = 0;
    status = fgets(buffer, sizeof(buffer), fin);

    if (status != NULL) {
        int resultado = 0;
        savePtr = buffer;
        while (*savePtr != 0x0a) {
            resultado += strtol(savePtr, &ptr, 10);
            savePtr = ptr;
        }
        fprintf(fout, "\n%d", resultado);
    }


}



/*void feature4(FILE *fin, int **parr, int *length, char **op);
void feature5(FILE *fout, int *parr, int length, char *op);
void feature6(FILE *fin, struct Obj_t *pobj);
void feature7(FILE *fout, struct Obj_t *pobj);
void feature8(FILE *fin, struct Obj_t **pobj,int *length);
void feature9(FILE *fout, struct Obj_t *pobj,int length); */

