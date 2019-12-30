#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    
    
    FILE *fd = fopen("database.txt","a");

    int array_of_ints[argc-1];
    int i;
    
    for (i = 0; i < argc; i++) //argc konsoldan gelen parametre sayısını tutar. argv nin ilk elemanı programın ismi sonrakiler ise girilen parametreler. 
    {
        array_of_ints[i] = atoi(argv[i]); //atoi chardan integera çevirme işlemi yapan bir fonksiyondur. 
        if(array_of_ints[i] < 0 ){
        printf("Parametreler yalnızca pozitif tam sayılar olmalıdır.");
        }
        else{
        fprintf(fd,"%d\n",array_of_ints[i]);
        
        }
    }
 

  
fclose(fd);
return(0);
}


