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
    for (int i = 0; i < msgLength; i++)
    {
        // convert character to a decimal
        int decimalEquivalent = message[i];

        // convert decimal to binary
        convertToBinary(decimalEquivalent);

        // print binary using print_bulb
        for (int bit = 0; bit < 8; bit++)
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
    int powerOfBinary = 1;
    int currentBit = 7;
    int remainder = 0;

    while (decimal > 0)
    {
        remainder = decimal % 2;

        // turn bit on or off based on remaindr
        binaryArray[currentBit] = remainder;

        // prepair for prceding bit by divison by 2 and subtracting remainder
        decimal = decimal / 2 - remainder;

        // move to preceding bit
        currentBit -= 1;

        // increase the power of the base-2 (1 2 4 .. etc)
        powerOfBinary *= 2;
    }
}