#include "Coil.h"
#include "pico/stdlib.h"
#include "hardware/pwm.h"

Coil::Coil(int g,int en)
{
    gpio =g;
    gpio_en =en;
    gpio_init(gpio);
    gpio_set_dir(gpio,1);
    gpio_init(gpio_en);
    gpio_set_dir(gpio_en,1);

    gpio_set_function(gpio, GPIO_FUNC_PWM);
    slice=pwm_gpio_to_slice_num (gpio); 
    channel=pwm_gpio_to_channel (gpio);
    pwm_set_wrap (slice, 12500);
}
void Coil::turn_on_full_power()
{
    gpio_put(gpio_en,1);
    pwm_set_enabled (slice, 1); 
    pwm_set_chan_level (slice, channel, 12500);
    IS_ACTIVE=true;
    
    
}
void Coil::turn_on()
{
    gpio_put(gpio_en,1);
    solenoidStartTime = time_us_64();
    IS_ACTIVE =true;
    turn_on_full_power();
}
void Coil::turn_on_update()
{
    

    
        if (time_us_64() - solenoidStartTime >= 200000) {
            set_power(10000);
            
        }
    


}
void Coil::set_power(int power)
{
    pwm_set_chan_level(slice,channel, power);
    IS_ACTIVE=true;
}

void Coil::turn_off()
{

    //pwm_set_enabled (slice, 0);
    gpio_put(gpio_en,0);
    IS_ACTIVE=false; 
    pwm_set_chan_level(slice,channel,0);
}