#include <stdio.h>
#include <string.h>

// TODO: array of student names with dynamic memory allocation as much as possible.
// TODO: sorting of arrays in decreasing order

// eftiaksa 2 functions: vathmous(scoreCalc), taksinomhsh(sorting)
int scoreCalc(){
    int j;
    int total = 0;
    int score = 0;
    for(j=0; j < 3; j++){
    
      printf("judge score: \n");
      scanf("%d", &score);
      total += score;
    
  }
  return total;
}



int sorting(int array[4], int N){
  int i = 0;
  int j = 0;
  int temp = 0;

  for(i=0; i < N; i++){
    for(j= i+1; j < N; j++){

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

// sthn main evala ola ta upoloipa
// tis zitoumenes listes tis evala me mikra gia pio grigora :)
int main(){
    int students = 5;
    int i;
    int size = 0;
    int vathmos[5];
    char name[50];
    char nameList[5][50];
    for(i = 0; i < students; i++){
      
      printf("Student name: ");
      scanf("%s", &name);
      printf("Name: %s\n", name);
      int strSize = strlen(name);
      vathmos[size] = scoreCalc();
      nameList[size] = name;
      size++;
      // prospathisa me tin metavlith size h opoia auksanetai na ftiaksw
      //kati san thn append function tis python
      // an exete na mou proteinetai kapio kalutero tropo tha to ektimousa polu
    }
    int j;
    for(j=0; j <= 4; j++){
    printf("%d,", vathmos[j]);
    printf("%s,", nameList[j]);
    }

  return 0;
}