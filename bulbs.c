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
    printf("decimal test = %i", decimal);

    return 0;
}