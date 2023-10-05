/* SWITCH EXAMPLE*/

#include <stdio.h>
#include <wiringPi.h>

#define SWITCH 17		

int main()
{
    wiringPiSetupGpio();
    pinMode(SWITCH, INPUT);

    while (1)
    {
        int switchStatus = digitalRead(SWITCH);
        printf("Digital input: %d\n", switchStatus);
        delay(100);
    }
    return 0;
}
