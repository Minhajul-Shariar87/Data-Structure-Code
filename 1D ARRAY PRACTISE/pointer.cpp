#include<iostream>

using namespace std;
void increase(void *data, int psize){
    if(psize==sizeof(char)){
        char *pchar;
        pchar=(char*)data;
        ++(*pchar);
    }
    else if(psize==sizeof(int)){
        float *pint;
        pint=(float*)data;
        ++(*pint);

    }
}
int main(){
    char a='x';
    int b=1602;

    increase(&a,sizeof(char));
    increase(&b,sizeof(int));
}
