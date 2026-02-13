#include <stdio.h>
#include <cs50.h>
#include<string.h>
int main(void)
{
    char word[20];

    string input = get_string("Enter a word: ");
    strcpy(word, input);  //strcpy which will copy the word into char arry
    printf("Word = %s\n", word);

 return 0;
}
