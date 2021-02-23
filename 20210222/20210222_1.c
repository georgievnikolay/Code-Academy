#include<stdio.h>

typedef union {
    int m_nValue;
    float m_fValue;
    char m_szText[32];
} tagMyData;

int main() {
    tagMyData data = {13};
    printf("Memory size : sizeof(data) : %d\n", sizeof(data));
    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue, data.m_fValue, data.m_szText);

    return 0;
}