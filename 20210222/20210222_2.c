#include<stdio.h>
#include<string.h>

/*Value description*/
typedef enum{
    VALUE_INT,
    VALUE_STR
} tagEType;

typedef union{
    int m_nValue;
    char m_szValue[64];
} tagMyVar;

typedef struct{
    tagEType m_type;
    tagMyVar m_var;
} tagMyValue;

void printValue(tagMyValue* pValue){
    if(VALUE_INT == pValue->m_type){
        printf("INT: %d\n", pValue->m_var.m_nValue);
    } else if(VALUE_STR == pValue->m_type){
        printf("STR: %s\n", pValue->m_var.m_szValue);
    }
}

int main(){
    tagMyValue value = {VALUE_INT, 12345};
    printValue(&value);

    value.m_type = VALUE_STR;
    strcpy(value.m_var.m_szValue, "test test test");
    printValue(&value);

    return 0;
}