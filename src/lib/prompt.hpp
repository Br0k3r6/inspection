#ifndef PROMPT_H_
#define PROMPT_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <cstring>
#include <string>

#include "system.h"
#include "risk.h"
#include "banner.h"
#include "menu.h"
#include "http/check_conn.hpp"

int run_prompt(char* url) {
    std::string cmd;
    clear_cmd();
    print_banner(url);
    std::cout << "[+] Checking connection to target website..." << std::endl;
    int result = check_connection(url);
    usleep(500000);
    if (result == 1) {
        std::cout << "[*] Connection to target website was success!" << std::endl;
        usleep(2000000);
    }
    else {
        fprintf(stderr, "[-] Connection failed! Exiting...");
        exit(EXIT_FAILURE);
    }
    while (true) {
        clear_cmd();
        print_banner(url);
	menu();
        std::cout << "inspection-(~): ";
        std::getline(std::cin, cmd);
        if (cmd.compare("00") == 0 || cmd.compare("0") == 0) exit(EXIT_SUCCESS);
    }
    return 0;
}

#endif
