#include <stdio.h>
   
    void Dispensebill(int amount) {
     int fifty=0; 
     int twenty=0; 
     int ten=0;
    if (amount % 10 != 0)
    {
        printf("Invalid amount\n");
        return;
    }
        fifty = amount / 50;
        amount = amount % 50;

        twenty = amount / 20;
        amount = amount % 20;

        ten = amount / 10;

        printf("50s: %d, 20s: %d, 10s: %d\n", fifty, twenty, ten);
}

int main()
{
    int amount;
    printf("ENTER AMOUNT (only multiples of 10): ");
    scanf("%d", &amount);
    Dispensebill(amount);
    return 0;


}

