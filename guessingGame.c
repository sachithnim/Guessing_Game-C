#include<stdio.h>

int main(){
    int secretNo = 7;
    int guessNo;

    int guessLimit = 3;
    
    int i;
    
    for(i = 1; i <= guessLimit; i++){
        printf("Guess Number %d (between 1 to 10) : ", i); //getting user input
        scanf("%d", &guessNo);

        if(guessNo == secretNo){
            printf("congratulations.. You won..!");
            break;
        }
    }

    if(guessNo != secretNo){
        printf("You Lost, Try Again..");
    }
    return 0;
}
