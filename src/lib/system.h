#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CLEAR_PROMPT_CMD "clear"

int clear_cmd(void) {
    system(CLEAR_PROMPT_CMD);
    return 0;
}
#endif