#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int letterCount(string text);
int wordCount(string text);
int sentenceCount(string text);
int colemanLiau(float letters, float words, float sentences);

int main(void) {
    
    string text = get_string("Text: ");
    int letters = letterCount(text);
    int words = wordCount(text);
    int sentences = sentenceCount(text);
    int index = colemanLiau(letters, words, sentences);
    if(index < 1) {
        printf("Before Grade 1\n");
    } else if (index >= 16 ) {
        printf("Grade 16+\n");
    }  else {
        printf("Grade %i\n", index);
    }
}

int letterCount(string text) {
    int letterCount = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        if(isalpha(text[i])) {
            letterCount++;
        }
    }
    return letterCount;
}

int wordCount(string text) {
    int wordCount = 1;
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        if(text[i] == ' ') {
            wordCount++;
        }
    }
    return wordCount;
}

int sentenceCount(string text) {
    int sentenceCount = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        switch(text[i]) {
            case '.' :
                sentenceCount++;
                break;
            case '!':
                sentenceCount++;
                break;
            case '?':
                sentenceCount++;
                break;
        }
    }
    return sentenceCount;
}

int colemanLiau(float letters, float words, float sentences) {
    float numLetters100Words = (letters / words) * 100;
    float numSentences100Words = (sentences / words) * 100;
    float index = round((0.0588 * numLetters100Words) - (0.296 * numSentences100Words) - 15.8);
    return index;
}