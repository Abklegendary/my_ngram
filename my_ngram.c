#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    char my_ngram[128] = {0};          //128 is the highest position in the ASCII - using the ASCII concept to achieve the positioning for the characters passed in
    for (int i = 1; i < argc; i++)  //loops through an array of strings
    {
        while (*argv[i])            //loops through each string in the array
        {
            int value = *argv[i];     //variable created to hold the argv[i] array
            my_ngram[value] += 1;        //loops through each characters in the strings and changes the position of the loop
            argv[i]++;
        }
    }

    for (int x = 0; x < 128; x++)   //loops through the ASCII positions or memmory value
    {
        if (my_ngram[x]) printf("%c:%d\n", x, my_ngram[x]);   //condition to output both the characters and number of occurences/frequency
    }

    return 0;
}