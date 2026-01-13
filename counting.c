//COUNTING NUMBERS WHICH APPEARS THE MOST:
#include <stdio.h>

int main() {
    int FavNumbers[10];
    int count[11] = {0}; 
    int i;
	int Common; 
	int Count = 0;

    
    for (i = 0; i < 10; i++) {
        printf("Enter your favorite number: ");
        scanf("%d", &FavNumbers[i]);

        
        if (FavNumbers[i] < 1 || FavNumbers[i] > 10) {
            printf("Invalid input! Please enter numbers between 1 and 10 only.\n");
            return 0;
        }

        
        count[FavNumbers[i]]++;
    }

    
    for (i = 1; i <= 10; i++) {
        if (count[i] > Count) {
            Count = count[i];
            Common = i;
        }
    }

    
    printf("\nThe most common favorite number is: %d\n", Common);
    printf("It appears: %d times\n", Count);

    return 0;
}