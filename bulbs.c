#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

int binaryArray[8];

void print_bulb(int bit);

void convertToBinary(int decimal);

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
        int decimalEquivalent = message[i];

        // convert decimal to binary
        convertToBinary(decimalEquivalent);

        // print binary using print_bulb
        for (int bit = 0; bit < 8; bit ++)
        {
            print_bulb(binaryArray[bit]);
        }
        printf("\n");
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

void convertToBinary(decimal)
{
    if (decimal >= 128)
    {
        binaryArray[0] = 1;
        decimal -= 128;
    }
    else
    {
        binaryArray[0] = 0;
    }

    if (decimal >= 64)
    {
        binaryArray[1] = 1;
        decimal -= 64;
    }
    else
    {
        binaryArray[1] = 0;
    }
    
    if (decimal >= 32)
    {
        binaryArray[2] = 1;
        decimal -= 32;
    }
    else
    {
        binaryArray[2] = 0;
    }
    
    if (decimal >= 16)
    {
        binaryArray[3] = 1;
        decimal -= 16;
    }
    else
    {
        binaryArray[3] = 0;
    }

    if (decimal >= 8)
    {
        binaryArray[4] = 1;
        decimal -= 8;
    }
    else
    {
        binaryArray[4] = 0;
    }
    
    if (decimal >= 4)
    {
        binaryArray[5] = 1;
        decimal -= 4;
    }
    else
    {
        binaryArray[5] = 0;
    }
    
    if (decimal >= 2)
    {
        binaryArray[6] = 1;
        decimal -= 2;
    }
    else
    {
        binaryArray[6] = 0;
    }
    
    if (decimal >= 1)
    {
        binaryArray[7] = 1;
        decimal -= 1;
    }
    else
    {
        binaryArray[7] = 0;
    }
}