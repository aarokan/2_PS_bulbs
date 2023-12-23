#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int convertToBinary(int decimal);

int main(void)
{
    // TODO
    // get a message to encode
    string message = get_string("Message: ");
    
    // get string length
    int msgLength = strlen(message);

    // loop through message
    for (int i = 0; i < msgLength; i++ )
    {
        // convert character to a decimal
        printf("\ncurrent character = %c", message[i]);
        int decimalEquivalent = message[i];
        printf("\nconverted to decimal = %i", decimalEquivalent);
        printf("\n");

        // convert decimal to binary
        int binaryEquivalent = convertToBinary(decimalEquivalent);

        // print binary using print_bulb
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int convertToBinary(decimal)
{
    int binaryArray[8];
    if (decimal > 128)
    {
        binaryArray[7] = 1;
    }
    else if (decimal < 128)
    {
        binaryArray[7] = 0;
    }
    else if (decimal > 64)
    {
        binaryArray[6] = 1;
    }
    else if (decimal < 64)
    {
        binaryArray[6] = 0;
    }
    else if (decimal > 32)
    {
        binaryArray[5] = 1;
    }
    else if (decimal < 32)
    {
        binaryArray[5] = 0;
    }
    else if (decimal > 16)
    {
        binaryArray[4] = 1;
    }
    else if (decimal < 16)
    {
        binaryArray[4] = 0;
    }
    else if (decimal > 8)
    {
        binaryArray[3] = 1;
    }
    else if (decimal < 8)
    {
        binaryArray[3] = 0;
    }
    else if (decimal > 4)
    {
        binaryArray[2] = 1;
    }
    else if (decimal < 4)
    {
        binaryArray[2] = 0;
    }
    else if (decimal > 2)
    {
        binaryArray[1] = 1;
    }
    else if (decimal < 2)
    {
        binaryArray[1] = 0;
    }
    else if (decimal > 1)
    {
        binaryArray[0] = 1;
    }
    else
    {
        binaryArray[0] = 0;
    }
    printf("\nBinaray Array =  %i", binaryArray[7]);
    printf("%i", binaryArray[6]);
    printf("%i", binaryArray[5]);
    printf("%i", binaryArray[4]);
    printf("%i", binaryArray[3]);
    printf("%i", binaryArray[2]);
    printf("%i", binaryArray[1]);
    printf("%i", binaryArray[0]);

    return 0;
}