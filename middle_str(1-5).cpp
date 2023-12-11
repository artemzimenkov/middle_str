#include <iostream>
#include <string>
#include "middle_str.h"

using namespace std;

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
    else if ()
}
/*bool slo(string sl){
    for(int i = 0; i < itc_len(sl); i++)
    if (!(sl[i] >= 'n' && sl[i] <= 'z'))
        return false;
    return true;
}

int str_slovo(string s){
    s = ' ' + s + ' ';
    int pr1 = 0, pr2;
    for(int i = 0; i < itc_len(s); i++){
        if (s[i] == ' '){
            pr2 = i;
            string sl;
            sl = pol(s, pr1, pr2);
            if (slo(sl))
                kol++;
            pr1 = pr2;
        }
    }
}*/


int itc_len(string st){
    int i;
    for(i = 0; st[i] != '\0'; i++);
        return i;
}


