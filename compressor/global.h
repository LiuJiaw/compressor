#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

#include<queue>
#include"hfmnode.h"

//��¼�������·��
char PATH_IN[255];
char PATH_OUT_1[255];
char PATH_OUT_2[255];
//��¼ÿ���ַ����ֵ�˳��
int NUMCH[255];
//��¼����������
std::string HFMcode[255];
//��¼�ļ����ַ�����
long long int FILELENGTH;
//ʹ�����ȶ������ɹ�������
std::priority_queue<HFMNode> HFMQueue;

#endif // GLOBAL_H_INCLUDED
