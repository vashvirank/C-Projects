#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int guess, num, cnt = 0;
    srand(time(NULL));
  
    guess = rand() % 100 + 1;
    do {
        cnt++;
      
        printf("\nPlease enter your guess(1 - 100): ");
        scanf("%d", &num);
      
        if (num < guess) 
            printf("guessed number is smaller...\n");
          
        else if (num > guess) 
            printf("guessed number is larger...\n");    
      
    } while(guess != num);
  
    printf("\ncongratulations you have guessed a correct number in %d attempts...!!!", cnt);
    printf("\nAuthor:Vashvi Rank\n");  

    return 0;
}
