#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//C\C++ 主函數 傳參 測試
void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main(int argc, char *argv[]){

    printf("inputchar=%s\n",argv[0]);
    char ch;
    char ch1;
    if(argc>1)
    {
        memcpy(&ch,argv[1],1);//拷貝第一個字元
        //ch1=*argv[1];//拷貝第一個字元
        printf("input01's char01=%c\n",ch);
        printf("input01=%s\n",argv[1]);
    }
    else
    {
        printf("inputchar=null\n");
    }

    Pause();//system("pause");
}
