#ifndef RISK_H_
#define RISK_H_

#include <stdio.h>
#include <stdlib.h>
#define BUFFEROVERFLOW_RISK 47193

void print_risk(int risk, char* point) {
    if (risk == BUFFEROVERFLOW_RISK) {
        printf("[!] BUFFEROVERFLOW RISK HAPPANED! EXITING FOR COMPUTER SAFETY. | %s |\n", point);
        exit(EXIT_FAILURE);
    }
}

#endif