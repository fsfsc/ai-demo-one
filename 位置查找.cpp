#include "λ�ò���.h"




//2����ȥ��������  �ո�  ������ָ���

void testfindback(string str, string chars, void  callback(size_t)) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_of(strchars);
    if (pos != string::npos) {
        callback(pos);
    }
}
//����λ��
void myCallback(size_t index) {
    cout << "λ��" << index << endl;
}

void test05(string str, void callback(size_t)) {
    string sworlds = str;
    size_t num = sworlds.length();
    // int nums = static_cast<int>(sworlds.length());
    string chars = "abcefgiklmopqrstuvwxyz!@#$%^&*-=\"?[]~|()_+'/{}`<>\\;:12345790 ";
    testfindback(sworlds, chars, callback);
}


//�ַ�������
  /* string str1 = "�ô�";
      string chars1 = "������ĺ����ǲ�����İ���"
      ����2
      */
void testfind(string str, string chars) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_not_of(strchars);
    if (pos != string::npos) {
        cout << pos << endl;
    }
    else {
        cout << "û���ҵ�" << endl;
    }
}


/*string str1 = "��������������";
string chars1 = "������ĺ����ǲ�����İ���";
����8
*/
void testfind01(string str, string chars) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_of(strchars);
    if (pos != string::npos) {
        cout << pos << endl;
    }
    else {
        cout << "û���ҵ�" << endl;
    }
}