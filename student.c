#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "student.h"

void feature1(FILE *fin, FILE *fout) {
    
    char buffer[64];
    char *status = NULL;

    status = fgets(buffer, sizeof(buffer), fin);
    if (status != NULL) {
        fprintf(fout, "%s", buffer);
    }
    printf("\n");

    fflush(fin);
}

void feature2(FILE *fin, FILE *fout) {
    
    char buffer[70];
    char *status = NULL;

    status = fgets(buffer, sizeof(buffer), fin);
    if (status != NULL) {
        for (int i = sizeof(buffer) - 2; i >= 0; i--) {
            fprintf(fout, "%c", buffer[i]);
        }

         fprintf(fout, "%s", "\n");
    }
    
    printf("\n");
    fflush(fin);
}

void feature3(FILE *fin, FILE *fout){

    int contador = 0;
    char buffer[10];
    int resultado = 0, valoractual = 0;
    char *estado = NULL;
    estado = fgets(buffer, sizeof(buffer), fin);
    if (estado != NULL)
    {
        for (contador = 0; contador <= sizeof(buffer); contador++)
        {   fscanf(fin , "%d",&valoractual);
            resultado = resultado + valoractual; 
        }
     }
    
    fprintf(fout, "%d", resultado);
    fflush(fin);

}








    
    
    
    
    


