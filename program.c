#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    long number = 0;
    printf("Enter a number greater than zero: ");
    scanf("%ld", &number);

    long temp = number;
    int counter = 0;

    while(temp > 0){
        
        printf("%u.digit is %d\n", counter+1, (short)(temp%10));

        temp /= 10;
        counter++;
    }

    printf("%ld number has %u digit\n", number, counter);

    return 0;
}
