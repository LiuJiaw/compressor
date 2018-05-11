#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

#include<queue>
#include"hfmnode.h"

//��¼����·��
char PATH_IN[256];
//��¼���·��
char PATH_OUT[256];
//��¼ÿ���ַ����ֵ�˳��
int NUMCH[256];
//��¼����������
std::string HFMcode[256];
//��¼�ļ����ַ�����
long long int FILELENGTH;
//ʹ�����ȶ������ɹ�������
std::priority_queue<HFMNode> HFMQueue;
//��¼�ֽڵ�8λbit
char BIT[8]= {1,2,4,8,16,32,64,(char)128};

#endif // GLOBAL_H_INCLUDED
