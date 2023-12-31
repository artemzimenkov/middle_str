#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;


int itc_len(string st){
    int i;
    for(i = 0; st[i] != '\0'; i++);
        return i;
}

bool itc_isDigit(unsigned char c){
if (c >= '0' && c <= '9')
    return true;
else
    return false;
}

unsigned char itc_toUpper(unsigned char c){
    if (c >= 'a' && c <= 'z'){
        return c - 32;
    }
    else {
        return c;
    }
}

unsigned char itc_changeCase(unsigned char c){
    if (c >= 'a' && c <= 'z'){
        return c - 32;
    }
        else if (c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    else{
        return c;
    }
}

bool itc_compare(string s1, string s2){
    if (itc_len(s1) != itc_len(s2))
        return false;
    for(int i = 0; s1[i] != '\0'; i++){
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

string pol(string str, int nach, int kon){
    string otv;
    if (nach > kon)
        return str;
    if (kon > itc_len(str)- 1)
        kon = itc_len(str) - 1;
    for (int i = nach; i <= kon; i++){
        otv += str[i];
    }
    return otv;

}

bool slo(string sl){
    for(int i = 0; i < itc_len(sl); i++)
    if (!(sl[i] >= 'a' && sl[i] <= 'z'))
        return false;
    return true;
}

int itc_countWords(string str){
    str = ' ' + str + ' ';
    int pr1 = 0, pr2;
    int kol = 0;
    for(int i = 0; i < itc_len(str); i++){
        if (str[i] == ' '){
            pr2 = i;
            string sl;
            sl = pol(str, pr1 + 1, pr2 - 1);
            if (slo(sl))
                kol++;
            pr1 = pr2;
        }
    }
    return kol;
}


