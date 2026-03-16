#ifdef _WIN32
#include <windows.h>
#else
#include <string.h>
#endif
#include <stdio.h>
#include <unistd.h>

#define MAX 1024

int main(int argc, char *argv[])
{
    char args[MAX] = "";

    strcat(args, "\"\"");
    strcat(args, argv[0]);
    strcat(args, ".real");
    strcat(args, "\" ");

    for(int i = 1; i < argc; i++)
    {
        strcat(args, "\"");
        strcat(args, argv[i]);
        strcat(args, "\" ");
    }

    strcat(args, "--use-dshowcapture 0\"");

    FILE *shim_log = fopen("facetracker-shim.log", "w");
    fprintf(shim_log, "%s\n", args);

    system(args);

    printf("Facetracker exited!\n");
    return 0;
}
