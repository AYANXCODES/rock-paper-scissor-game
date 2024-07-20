#include <stdio.h>
#include <stdlib.h>  
#include <time.h> 

int main (){
    printf("press 0 for choosing rock\n");
    printf("press 1 for choosing paper\n");
    printf("press 2 for choosing scissor\n");
    int  a;
    time_t t1;
    scanf ("%d", &a);
    switch (a){
      case 0:
       printf("you have choosed rock\n");
       break;
      case 1:
       printf("you have choosed paper\n");
          break;
      case 2:
       printf("you have choosed scissor\n");
       break;
    }
    srand (  time (&t1)); 
    int b;
    b=rand()%3;
    switch (b){
      case 0:
       printf("computer have choosed rock\n");
       break;
      case 1:
       printf("computer have choosed paper\n");
          break;
      case 2:
       printf("computer have choosed scissor\n");
       break;
    }
    if (a == b)
    {
        printf("match draw\n");/* code */
        
    }
    if (a==1 && b==0)
    {
       printf("you won") ;
    }
    if (a==0 &&  b==1)
    {
       printf("computer won") ;
    }
    if (a==2 &&  b==0){
         printf("computer won") ;
    }
     if (a==0 && b==2){
         printf("you won") ;
    }
    if (a==1 &&  b==2){ 
        printf("computer won");
    }
    if (a==2 && b==1){ 
        printf("you won");
    }

    
    return 0;
}