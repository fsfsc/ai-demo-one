#include "�����ʱ��ʹ��.h"


using ��֮���dict = map<string, string>;

void �����ֱ�ӳ�Ϯ��(string str, ��֮���dict  ��֮��dict) {
	��֮��dict["��"] = "�ڶ��˳ƴ��ʣ�����˵������";
	��֮��dict["��"] = "��һ�˳ƴ��ʣ�˵������";
	��֮��dict["��"] = "�����˳ƣ������֮�����";
	��֮��dict["��"] = "�����˳ƣ������֮���Ů��";
	��֮��dict["��"] = "�����˳ƣ������֮������������";

	

	auto it = ��֮��dict.find(str);
	if (it != ��֮��dict.end()) {
		
		if (str == it->first) {

			it->second;
		
		}		
	}
}
