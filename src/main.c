
#include "sdk_project_config.h"
#include "peripherals_pwm_pal_1.h"

int main(void)
{
    CLOCK_DRV_Init(&clockMan1_InitConfig0);
    PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
    PWM_Init(&pwm_pal_1_instance,&pwm_pal_1_configs);

    while(1)
    {
        PWM_UpdateDuty(&pwm_pal_1_instance, 0, 1000);
        OSIF_TimeDelay(1000);

        PWM_UpdateDuty(&pwm_pal_1_instance, 0, 0);
        OSIF_TimeDelay(1000);
    }
}
