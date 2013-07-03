#include<dllbasic.h>
#include<iostream>
#include"../../service/include/serviceAPI.h"
//#pragma comment(lib,"service.lib")


void main()
{
	int result = getint();
	std::cout<<result<<std::endl;
	system("pause");
}