#include <orchestration.h>

#include <scheduler.h>
#include <mode_control/mode_control.h>

Orchestration::Orchestration() 
{
    puts("Inside Orchestration constructor");
    Mode_Control mode = Mode_Control();
    printf("Mode stuff: %d\n", mode.doStuff(3));
    Scheduler();
}
