#include <iostream>
#include "cctype"
using namespace std;

int n = 0;
int m = 0;
bool znakvoprosa = false;
int space = 0;

void qe(char arr[]){
    // Проверка на вопрос
    for (int i = 0; i < strlen(arr); ++i) {
        if (arr[i] == '?')
            znakvoprosa = true;
    }
}

void wtf(char arr[]){
    for (int i = 0; i < strlen(arr); ++i) {
        if(isalpha(arr[i]))
            n++;
        if (isupper(arr[i]))
            m++;
    }
}

void Space(char arr[]){
    for (int i = 0; i < strlen(arr); ++i) {
        if (isspace(arr[i]))
            space++;
    }
}

int main() {

    char text[] = {""};

    qe(text);
    wtf(text);
    Space(text);

    if (znakvoprosa && m == n)
        cout << "Calm down, I know what I'm doing!";
    else if(space == strlen(text))
        cout << "Fine. Be that way";
    else if(m == n)
        cout << "Whoa, chill out!";
    else if(znakvoprosa)
        cout << "Sure.";
    else
        cout << "Whatever.";


    // Изограмма
    /*char iso[] = {
            "Helo, world"
    };

    for (int i = 0; i < strlen(iso); ++i) {
        iso[i] = tolower(iso[i]);
    }

    for (int i = 0; i < strlen(iso); ++i) {
        for (int j = i + 1; j < strlen(iso); j++) {
            if(isalpha(iso[i])) {
                if (iso[j] == iso[i]) {
                    cout << "Ne isogramma";
                    j = strlen(iso);
                    i = strlen(iso);
                }
            }
        }
    }*/

    return 0;
}
