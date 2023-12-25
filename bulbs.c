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
    if (decimal >= 128)
    {
        binaryArray[7] = 1;
        printf("\nDecimal 128 = %i", decimal);
        decimal -= 128;
    }
    else
    {
        binaryArray[7] = 0;
        printf("\nDecimal 128 = %i", decimal);
    }

    if (decimal >= 64)
    {
        binaryArray[6] = 1;
        decimal -= 64;
        printf("\nDecimal 64 = %i", decimal);
    }
    else
    {
        binaryArray[6] = 0;
        printf("\nDecimal 64 = %i", decimal);
    }
    
    if (decimal >= 32)
    {
        binaryArray[5] = 1;
        printf("\nDecimal 32 = %i", decimal);
        decimal -= 32;
    }
    else
    {
        binaryArray[5] = 0;
        printf("\nDecimal 32 = %i", decimal);
    }
    
    if (decimal >= 16)
    {
        binaryArray[4] = 1;
        printf("\nDecimal 16 = %i", decimal);
        decimal -= 16;
    }
    else
    {
        binaryArray[4] = 0;
        printf("\nDecimal 16 = %i", decimal);
    }

    if (decimal >= 8)
    {
        binaryArray[3] = 1;
        printf("\nDecimal 8 = %i", decimal);
        decimal -= 8;
    }
    else
    {
        binaryArray[3] = 0;
        printf("\nDecimal 8 = %i", decimal);
    }
    
    if (decimal >= 4)
    {
        binaryArray[2] = 1;
        printf("\nDecimal 4 = %i", decimal);
        decimal -= 4;
    }
    else
    {
        binaryArray[2] = 0;
        printf("\nDecimal 4 = %i", decimal);
    }
    
    if (decimal >= 2)
    {
        binaryArray[1] = 1;
        printf("\nDecimal 2 = %i", decimal);
        decimal -= 2;
    }
    else
    {
        binaryArray[1] = 0;
        printf("\nDecimal 2 = %i", decimal);
    }
    
    if (decimal >= 1)
    {
        binaryArray[0] = 1;
        printf("\nDecimal 1 = %i", decimal);
        decimal -= 1;
    }
    else
    {
        binaryArray[0] = 0;
        printf("\nDecimal 1 = %i", decimal);
    }
    
    printf("\nBinaray Array =  %i", binaryArray[7]);
    printf("\n%i", binaryArray[6]);
    printf("\n%i", binaryArray[5]);
    printf("\n%i", binaryArray[4]);
    printf("\n%i", binaryArray[3]);
    printf("\n%i", binaryArray[2]);
    printf("\n%i", binaryArray[1]);
    printf("\n%i", binaryArray[0]);

    return 0;
}