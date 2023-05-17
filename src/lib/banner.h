#ifndef BANNER_H_
#define BANNER_H_

#include <stdio.h>
#include <stdlib.h>

void print_banner(char* url) {
    printf("         ____\n");
    printf("        |    |\n");
    printf("        |____|\n");
    printf("       _|____|_        Inspection created by red team hacker\n");
    printf("        /  ee`.          - Russian.Hzcker\n");
    printf("      .<     __O\n");
    printf("     /\\ \\.-.' \\     _                     _   _         \n");
    printf("    J  `.|`.\\/ \\   |_|___ ___ ___ ___ ___| |_|_|___ ___\n");
    printf("    | |_.|  | | |  | |   |_ -| . | -_|  _|  _| | . |   |\n");
    printf("     \\__.'`.|-' /  |_|_|_|___|  _|___|___|_| |_|___|_|_|\n");
    printf("     L   /|o`--'\\            |_|\n");
    printf("     |  /\\/\\/\\   \\           \n");
    printf("     J /      `.__\\   Copyright (c) 2023 Russian.Hzcker\n");
    printf("     |/         /  \\\n");
    printf("      \\\\      .'       [ %s ]\n", url);
    printf("    ____)_/\\_(____\n");
    printf("   (___._/  \\_.___)\n\n");
}

#endif