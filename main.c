#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = (rand()^rand())%100;
    int guess;
    while (1){
        printf("Please enter a number to guess:\n");
        scanf("%d",&guess);
        if (guess>random){
            printf("Too High.\n");
        }else if (guess<random){
            printf("Too Low.\n");
        }else{
            printf("You did it!\n");
            break;
        }
    }
    return 0;
}