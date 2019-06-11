#include <actionPage.h>
#include <stdio.h>

int main (int argc, char* argv[]){ 
    
    if (argc < 5)
    {
      printf("enter at least 4 args\n");
      return 1;
    }
    
    int seeds;
    int found2 = sscanf(argv[1], "%d", &seeds);
    if (found2 != 1){
        printf("First arg is not an int \n");
        return 1;
    }
    
    
    int mailmen;
    int found6 = sscanf(argv[2], "%d", &mailmen);
    if (found6 != 1){
        printf("Second arg is not an int \n");
        return 1;
    }
    
    int run;
    int found7 = sscanf(argv[3], "%d", &run);
    if (found7 != 1){
        printf("Third arg is not an int \n");
        return 1;
          }
    
      int scream;
    int found8 = sscanf(argv[4], "%d", &scream);
    if (found8 != 1){
        printf("Fourth arg is not an int \n");
    }

    printf("seeds: %d mailmen: %d run: %d scream: %d \n",seeds, mailmen, run, scream);
    
{

    if(seeds == 0 && mailmen == 0 && run == 0 && scream == 0){
        printf("You are a pet rock!\n");   
    } else if (seeds == 0 && mailmen == 0 && run == 0 && scream ==1){
        printf("You are a Friendly Goat!\n");
    } else if (seeds == 0 && mailmen == 0 && run == 1 && scream ==0){
        printf("You are a Cheeta!\n");
    } else if (seeds == 0 && mailmen == 0 && run == 1 && scream ==1){
        printf("You are a Chimp!\n");
    } else if (seeds == 0 && mailmen == 1 && run == 0 && scream ==0){
        printf("You are a Fox!\n");
    } else if (seeds == 0 && mailmen == 1 && run == 0 && scream ==1){
        printf("You are a Mean Goat!\n");
    } else if (seeds == 0 && mailmen == 1 && run == 1 && scream ==0){
        printf("You are a Cheeta!\n");
    } else if (seeds == 0 && mailmen == 1 && run == 1 && scream ==1){
        printf("You are a Gaurd Dog!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 0 && scream ==0){
        printf("You are a Chipmunk!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 0 && scream ==1){
        printf("You are Tasha!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 1 && scream ==0){
        printf("You are a Chicken!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 1 && scream ==1){
        printf("You are a Friendly Seagull!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 0 && scream ==0){
        printf("You are a Raccon!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 0 && scream ==1){
    } else if (seeds == 1 && mailmen == 0 && run == 0 && scream ==0){
        printf("You are a Chipmunk!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 0 && scream ==1){
        printf("You are Tasha!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 1 && scream ==0){
        printf("You are a Chicken!\n");
    } else if (seeds == 1 && mailmen == 0 && run == 1 && scream ==1){
        printf("You are a Friendly Seagull!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 0 && scream ==0){
        printf("You are a Raccon!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 0 && scream ==1){
        printf("You are a Seagull!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 1 && scream ==0){
        printf("You are a Quiet Gaurd Goose!\n");
    } else if (seeds == 1 && mailmen == 1 && run == 1 && scream ==1){
        printf("You're a Goose!\n");
    } else{
        printf("Should never run"); 
   } 
    
  int x = 10;  

  while ( x < 20 ){
  x++;
  int  Math1 = (seeds + mailmen + run + scream);
  int math = (3 * Math1 * Math1);
  printf("value of math: %d\n", math);
  return math ;
  }
return 0;
}
}

