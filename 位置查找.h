#pragma once
#include <iostream>
using namespace std;
#include <string>

//2����ȥ��������  �ո�  ������ָ���

void testfindback(string str, string chars, void  callback(size_t));
//����λ��
void myCallback(size_t index);
void test05(string str, void callback(size_t));

//Ŀǰ�о��ô�����
//�ַ�������
  /* string str1 = "�ô�";
      string chars1 = "������ĺ����ǲ�����İ���"
      ����2
      */
void testfind(string str, string chars);


/*string str1 = "��������������";
string chars1 = "������ĺ����ǲ�����İ���";
����8
*/
void testfind01(string str, string chars);