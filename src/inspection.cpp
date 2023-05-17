#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <cstring>

#include "lib/argparse.h"
#include "lib/prompt.hpp"

#define BUFFER 2048

int main(int argc, char* argv[]) {
    struct information credentials = parse_arguments(argc, argv);
    char* url = credentials.url;
    run_prompt(url);
    return 0;
}