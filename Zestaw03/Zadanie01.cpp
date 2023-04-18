#include <iostream>
#include <string.h>

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T>
T *max(T *a, T *b) {
    return ((*a) > (*b)) ? a : b;
}

template<typename T>
T max(T *data, size_t n) {
    T tmp = data[0];
    for (size_t i = 0; i < n; ++i) {
        if (data[i] > tmp) {
            tmp = data[i];
        }
    }

    return tmp;
}

template<>
char *max(char *a, char *b) {
    return (strcmp(a, b) > 0) ? a : b;
}

template<>
const char *max(const char *a, const char *b) {
    return (strcmp(a, b) > 0) ? a : b;
}

template<typename T>
const T *max(T *a, const T *b) {
    return (strcmp(a, b) > 0) ? a : b;
}


