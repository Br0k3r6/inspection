#ifndef CHECK_CONN_H_
#define CHECK_CONN_H_

#include <iostream>
#include <curl/curl.h>

int check_connection(char* url) {
    CURL *curl;
    CURLcode res;
    
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_NOBODY, 1L);
        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            long response_code = 0;
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
            if (response_code == 0) return 0;
            else return 1;
        } else {
            return 3;
        }
        curl_easy_cleanup(curl);
    }
    
    curl_global_cleanup();
    
    return 0;
}


#endif