#include<iostream>
#include<fstream>
#include<conio.h>
#include<algorithm>
#include"hfmnode.h"
#include"compress.h"

using namespace std;

int main()
{
    while(true)
    {
        Init();

        cout<<"������ѹ����ѹ������!\n1��ѹ�� \n2����ѹ�� \n0���˳�"<<endl;
        char ans=getch();

        if(ans=='1')
            Compress();

        else if(ans=='2')
            DeCompress();

        else if(ans=='0')
            break;

        else
            cout<<"�޷�ʶ������룡"<<endl;

        cout<<"�����������..."<<endl;
        getch();

        system("cls");
    }
    return 0;
}
