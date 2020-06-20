#include <stdio.h>
#include <stdlib.h>
int main (){
    int *arreglo=NULL, num, cont;
    printf("¿Cuantos elementos tiene el conjunto?\n");
    scanf("%d",&num);
    printf("valor antes %p\n",arreglo); //sin amperson 
    //arreglo = (int *)calloc(num, sizeof(int));     
    printf("valor despues %p \n",arreglo);
    if(arreglo!=NULL){
        printf("Vector reservado:\n\t["); 
        for (cont=0 ; cont<num ; cont++){
            printf("\t%d",*(arreglo+cont));
        }
        printf("\t]\n");
        printf("Se libera el espacio reservado.\n");
        free(arreglo);
    }
    return 0;
}
 