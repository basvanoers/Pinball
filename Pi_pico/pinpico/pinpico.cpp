#include <stdio.h>
#include "pico/stdlib.h"
#include "lib/Coil/Coil.h"
#include "lib/Switch/Switch.h"

int main()
{
    stdio_init_all();
    Switch s1(19);
    Switch s2(18);
    Switch s3(8);
    Switch s4(0);
    Coil c1(17,16);
    Coil c2(7,11);
    Coil c3(3,4);
    Coil c4(12,15);
    
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
         if(s3.is_pressed())
        {
            if(c3.IS_ACTIVE)
            {
                 c3.turn_on_update();

            }
            else
            {
                c3.turn_on();
            }
           
           
        }
        
        else
        {
            c3.turn_off();
        }
         if(s4.is_pressed())
        {
            if(c4.IS_ACTIVE)
            {
                 c4.turn_on_update();

            }
            else
            {
                c4.turn_on();
            }
           
           
        }
        
        else
        {
            c4.turn_off();
        }
        
        
    }
}
