#include <stdio.h>
#include "wpm.h"

char wpm_str[24] = {};

const char *read_wpm(void)
{
    sprintf(wpm_str, "WPM  %03d", get_current_wpm());
    return wpm_str;
}