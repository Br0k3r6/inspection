#ifndef ARGPARSE_H_
#define ARGPARSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "risk.h"
#define BUFFER 2048
#define ARGS 2

struct information {
    char url[BUFFER];
};

bool check_bufferoverflow(char* string) {
    if (strlen(string) >= BUFFER) return true;
    else return false;
}

char* usage(void) {
    char* help_usage = "Usage: ./inspection [url] [options]\n\t[url] Specify url to scan.\n\nOptional arguments:\n\tFor now, nothing here";
    return help_usage;
}

struct information parse_arguments(int argc, char* argv[]) {
    struct information infos;
    if (argc != ARGS) {
        fprintf(stderr, usage());
        exit(EXIT_FAILURE);
    }

    if (check_bufferoverflow(argv[1])) print_risk(BUFFEROVERFLOW_RISK, "0x00000 ARG-1");
    strcpy(infos.url, argv[1]);

    return infos;
}

#endif