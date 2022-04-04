//
// Created by dima on 31.03.2022.
//

#ifndef APP_M_STRING_H
#define APP_M_STRING_H

void get_num_f(int n);
void rever_print_char(char const* s);

void print_array(int a[], unsigned size);
void rotate(int a[], unsigned size, int shift); //left loop shift array with it's size

unsigned strlen(const char *str);
int strstr(const char *text, const char *pattern);
char* copystr(char* dest, char const* src);
char* catstr(char* dest, const char* src);
char* getline();



#endif //APP_M_STRING_H
