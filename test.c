#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// TODO: FIX OUTPUT DIPLAY OF RESULT
// do the sorting in both arrays

char *getName(){
  char name[50];
  if (fgets(name, sizeof(name), stdin) != NULL){
    size_t len = strlen(name);
    if (name[len-1] == "\n"){
      name[len-1] = "\0";
    }
    char *line = malloc(len + 1);
    if (line != NULL) {
      strcpy(line, name);
    }
    return line;

  }

  return NULL;

}

int scoreCalc() {
    int j;
    int total = 0;
    int score = 0;
    char input[10];

    for (j = 0; j < 3; j++) {
        printf("Judge score: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            if (sscanf(input, "%d", &score) == 1) {
                total += score;
            } 
            else {
                printf("Invalid input. Please enter an integer.\n");
                j--; // Repeat this iteration
            }
        }
    }
    return total;
}


int sorting(int array[4], int N){
  int i = 0;
  int j = 0;
  int temp = 0;

  for(i=0; i < N; i++){
    for(j=i+1; j < N; j++){

      if (array[i] < array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

      }
    }
  }
  int k=0;
  for (k=0; k < N; k++){
    printf("%d,", array[k]);

  } 
  return 0;
}

int main(){
    int students = 5;
    size_t count = 0;
    size_t capacity = 5;

    int *vathmos = NULL;
    char **name = NULL;

    vathmos = malloc(capacity * sizeof(int));
    name = malloc(capacity * sizeof(char *));

    if (name == NULL || vathmos == NULL){
      fprintf (stderr, "List memory allocation error.");
      return 1;
    }

    
    int i;
    for(i = 0; i < students; i++){
      // Eisagwgh onomatos
      printf("Student name:  \n");
      char *input = getName();
      name[count] = input;


      // vathmologies kritwn apo funtion
      vathmos[count] = scoreCalc();
      count ++;
  

    }
    
    for(size_t i=0; i <= count; i++){
      printf("%s", name[i]);
      printf("%d,", vathmos[i]);
      free(name[i]);

    }
     free(name);
     free(vathmos);

  return 0;
}