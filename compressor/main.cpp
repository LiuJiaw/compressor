#include<iostream>
#include<fstream>
#include<conio.h>
#include<algorithm>
#include"hfmnode.h"
#include"compress.h"

using namespace std;

int main()
{
    cout<<"������ѹ����ѹ������!\n1��ѹ�� \n2����ѹ�� \n0���˳�"<<endl;
    char ans=getch();
    switch(ans){
        case '1':
            GetPath();
    //getHFMCode(new HFMNode(HFMQueue.top()), "");
            Compress();
            break;
        case '2':
            break;
        default:
            break;
    }
    return 0;
}
