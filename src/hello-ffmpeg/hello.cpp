#include<iostream>

using namespace std;

extern "C" {  //����Cͷ�ļ�
#include "libavutil/log.h" 
};
#pragma  comment(lib,"avutil.lib") //�õ�avutil��,��Ҫ����
int main(int argc,char *argv[]) {
	av_log_set_level(AV_LOG_DEBUG); //������־����

	av_log(NULL,AV_LOG_DEBUG,"hellog"); //��ӡ��־

	getchar(); //���ڵȴ�
	return 0;
}