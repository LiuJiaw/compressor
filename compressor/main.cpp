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
        cout<<"������ѹ����ѹ������!\n1��ѹ�� \n2����ѹ�� \n0���˳�"<<endl;
        char ans=getch();
        if(ans=='1'){
            GetPath();
            Compress();
            Init();
        }
        else if(ans=='2');

        else if(ans=='0')
            break;
        else
            cout<<"�޷�ʶ������룡"<<endl;
        cout<<"�����������..."<<endl;
        ans=getch();
        system("cls");
    }
    return 0;
}
