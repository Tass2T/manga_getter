#include "main.h"

void checkAndCreateDir(char *path)
{
    int check;

    check = mkdir(path, 0777);

    if(!check)
    {
        puts("Directory has been created!");
    } else {
        puts("Couldn't create the directory (already existing?)");
    }
}

int main(int argc, char *argv[])
{
    if (!argv[1]) {
        puts("no manga chosen...");
        return EXIT_FAILURE;
    } 

    if (!argv[2])
    {
        puts("please choose a chapter!!");
        return EXIT_FAILURE;
    }

    char dirPath[50] = "./manga_lib/";
    strcat(dirPath, argv[1]);

    checkAndCreateDir(dirPath);

    
    // CURL *curl;
    // CURLcode res;
    // FILE *fp = fopen("salut.jpg", "w");
    // char *baseUrl = "https://scansmangas.xyz/scans/";
    // char *url = "https://scansmangas.xyz/scans/my-hero-academia/330/2.jpg";

    // curl = curl_easy_init();
    // if (curl)
    // {
    //     curl_easy_setopt(curl, CURLOPT_URL, url);
    //     curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    //     curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

    //     res = curl_easy_perform(curl);

    //     if (res != CURLE_OK)
    //     {
    //         fprintf(stderr, "error %s", curl_easy_strerror(res));
    //     }

    //     curl_easy_cleanup(curl);
    // }

    return 0;
}