#include <iostream>
#include <stdio.h>
#include <mode_control/mode_control.h>

int main() {
    //auto account = Account(42);
    //account.AddMoney(12);
    puts("This is the main application");
    Mode_Control mode = Mode_Control();
    printf("Mode stuff: %d\n", mode.doStuff(3));
    return 0;
}
