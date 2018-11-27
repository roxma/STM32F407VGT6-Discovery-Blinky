#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

void delay(int ms)
{
    while (ms-- > 0) {
        volatile int x = 5971;
        while (x-- > 0)
            __asm("nop");
    }
}

int main(void)
{
    STM_EVAL_PBInit(BUTTON_USER, BUTTON_MODE_EXTI); 

    STM_EVAL_LEDInit(LED4);

    for (;;) {
        delay(500);
        STM_EVAL_LEDToggle(LED4);
    }
}
