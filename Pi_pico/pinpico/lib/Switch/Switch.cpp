#include <stdio.h>
#include "pico/stdlib.h"
#include "Switch.h"

Switch::Switch(int g)
{
    gpio = g;
    gpio_init(gpio);
    gpio_set_dir(gpio,0);
    gpio_pull_up(gpio);
}

bool Switch::is_pressed()
{
    return !gpio_get(gpio);
}
bool Switch::has_changed()
{
    int current = is_pressed();
    if(current == last_state)
    {

        last_state=current;
        return false;
    }
    else
    {
        last_state=current;
        return true;
    }
}