#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int count = argc;
    char myNgCounter[128] = {0};         
    for (int i = 1; i < count; i++)  
    {
        while (*argv[i])            
        {
            int val = *argv[i];     
            myNgCounter[val] += 1;        
            argv[i]++;
        }
    }

    for (int x = 0; x < 128; x++){

        if (myNgCounter[x]) printf("%c:%d\n", x, myNgCounter[x]);
    }
    return 0;
}