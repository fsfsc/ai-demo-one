#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

//������windows ʮ�����Ʒ�ʽ��ȡ�ָ�ֺ�ͳ�ƺ�������
void  test16(string s);
//��ȡ�ַ����еĺ��ּ�����  //������linux �ĺ���ͳ�ƺ� ���ַָ�
//windows vs  �зָ�ֻ���ʾ����
void  test06(string s);

//������һ���򵥵�ʾ�� utf16_to_utf8 ������ʵ�֣����ڽ� UTF - 16 ����ת��Ϊ UTF - 8 ���룺


string utf16_to_utf8(const wstring& utf16_string);


void test08(wstring c);



//linux �º���������׼  //������wIndows VS�еĺ�����ȡ�ͺ�������ͳ��
int IncludeChinese(char* s);
void test07(string c);

string �滻����(string ԭ�ַ�, string ��Ҫ�滻���ַ�, string Ҫ�滻�ɵ�����);
string   �����滻���ֺ��ֻ����(string s);
