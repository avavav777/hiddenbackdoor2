#include <stdio.h>
#define MAX 2048

int main() {
    FILE *fp;
    int status;
    char output[MAX];

    fp = popen("echo litmode", "r");
    while (fgets(output, MAX, fp) != NULL)
        printf("%s", output);
    status = pclose(fp);
    
    return 0;
}
