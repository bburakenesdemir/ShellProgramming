#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char * str[30];
     int number1=atoi(argv[2]);
     int number2=atoi(argv[3]);
     strcpy(str,argv[1]);
     FILE *uploadedFile;
     uploadedFile = fopen("database.txt", "r"); 
     int i;
     int size=getSizeArr();
     int numberArr[size];

     

    for (i = 0; i < size; i++)
    {
       fscanf(uploadedFile, "%d", &numberArr[i]);
     
    }
    if(strcmp(str,"-s")==0)
    {
        printf("Toplam: %d\n\n", numberArr[number1]+numberArr[number2]);
    }
    else if(strcmp(str,"-r")==0)
    {
        int sum=0;
        int minValue=findMinValue(number1,number2);
        int maxValue = findMaxValue(number1,number2);
    for (i =minValue-1; i < maxValue; i++) 
    {
        
        sum=sum+numberArr[i];
    }
        printf("Ara Toplam: %d\n\n", sum);
   
    }
 
    return 0;
}
  
 
    int findMaxValue(int num1,int num2){
    if(num1>num2){
        return num1;
        }
    return num2;
    }
    int findMinValue(int num1,int num2){
    if(num1<num2){
     return num1;
    }
    return num2;
    }

   int getSizeArr(){
    int sizeValue;   
    FILE *uploadFile;
    uploadFile = fopen("database.txt", "r"); 
    fseek(uploadFile, 0L, SEEK_END);
    sizeValue = (ftell(uploadFile))/2;
    return sizeValue;
    }

