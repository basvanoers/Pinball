#include <stdio.h>
#include "pico/stdlib.h"
#include "lib/Coil/Coil.h"
#include "lib/Switch/Switch.h"

int main()
{
    stdio_init_all();
    Switch s1(19);
    Switch s2(18);
    Coil c1(16,17);
    Coil c2(14,15);
    
    while (true) {
        if(s1.is_pressed())
        {
            if(c1.IS_ACTIVE)
            {
                 c1.turn_on_update();

            }
            else
            {
                c1.turn_on();
            }
           
           
        }
        
        else
        {
            c1.turn_off();
        }
        if(s2.is_pressed())
        {
            if(c2.IS_ACTIVE)
            {
                 c2.turn_on_update();

            }
            else
            {
                c2.turn_on();
            }
           
           
        }
        
        else
        {
            c2.turn_off();
        }
        
        
    }
}
