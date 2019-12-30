#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[], char ** envp) {
  while(1){
  char bufArr[1000];
  printf("\naccountant >>");
  fgets(bufArr, 1000, stdin);
  char * commandLine;
  int countOfWord = 0;
  char * array[1000];
  char * p = strtok(bufArr, " ");
  int number;
  while (p != NULL) {
    array[countOfWord] = p;
    p = strtok(NULL, " ");
    countOfWord++;
  }
  commandLine = array[0];
  char * values[countOfWord];

  for (int k = 0; k < countOfWord; k++) {
    if (k == countOfWord - 1) {
      values[k] = NULL;
    } else {
      values[k] = array[k + 1];
    }

  }
  if(strcmp(bufArr,"exit") == 0){
    exit(0);

  }
  if(strcmp(bufArr,"readall") == 0){
    FILE *fp;
    char str[1000];
    fp = fopen("database.txt", "r");

    while (fgets(str, 1000, fp) != NULL)
        printf("%s", str);
    fclose(fp);
  }
  
     if(strcmp(bufArr,"clear")==0){
            system("clear");
         }
  number =  strtol(values, NULL, 10);
                if(number >= 0){
                  printf("");
                }
                else{
                  goto hata;
            }

  if (strcmp(commandLine, "inserter") == 0) {
      int f;
      int h;
      f = fork();
      if (f == 0) {

        h = execve("inserter", values, envp);


      } else {
 
        wait( & h); // forku bekle

       }
     }

    
  if(strcmp(commandLine,"calculator") == 0){
      int d;
      int e;
      d = fork();
      if(d == 0){
      e=execve("calculator",values,envp);
      }
      else {
     wait(&e);
        }
    }

   }
    hata: printf("Parametreler yalnızca pozitif tam sayılar olmalıdır.");
 }



