#include<stdio.h>
int main()
{
    FILE * fout=fopen("file.txt","w");
    printf("Hello World");
    fprintf(fout,"Hello World¦bÀÉ®×¸Ì\n");
}
