#include<stdio.h>
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    FILE * fout=fopen("file3.txt","w");
    for(int i=0;i<10;i++)
    {
        fprintf(fout,"%d ",a[i]);  //切記：一定要打"%d "空格一定要加，不然儲存的資料會連再一起
        printf("%d ",a[i]);
    }
    fclose(fout);

    int b[10];
    FILE *fin=fopen("file3.txt","r");
    for(int i=0;i<10;i++)
    {
        fscanf(fin,"%d",&b[i]);///讀到b陣列b[i]裡面
        printf("%d ",b[i]);
    }
    fclose(fin);
}
