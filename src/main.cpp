#include <mbed.h>

DigitalOut   red(LED_RED);
DigitalOut green(LED_GREEN);

void on(void)
{
    red.write(0);
    // Puts writes to the standard ouput and appends a new line
    puts("rising 0->1");
}
void off(void)
{
    red.write(1);
    puts("falling 1->0");
}

int main() {
  // Switches on the board are the other way round.
    InterruptIn  left(SW2);
    InterruptIn right(SW3);

    // Joystick interrupts
    InterruptIn up(A2);
    InterruptIn down(A3);

    up.rise(on);
    up.fall(off);

    down.rise(on);
    down.fall(off);

    left.rise(on);
    right.fall(off);
    while(1) {
        /* GNDN */
    }
}
