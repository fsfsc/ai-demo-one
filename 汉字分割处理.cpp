#include "���ַָ��.h"


//������windows ʮ�����Ʒ�ʽ��ȡ�ָ�ֺ�ͳ�ƺ�������
void  test16(string s) {
    string t;
    int count = 0;
    int ecount = 0;
    for (int i = 0; i < s.length(); i++) // UTF-16�����У�����ռ��2���ֽ�
    {
        if ((unsigned char)s[i] < 0x80) // ASCII�ַ������λΪ0��UTF-16����Ϊ1�ֽ�
        {
            t.append("/");
            t.append(s.substr(i, 1));
            t.append("/");
            ecount++;
        }
        else if ((unsigned char)s[i] == 0xFFFE)  // ���ĵĵ�һ���ֽڵ����λΪ0*FFFE����ΪС����UTF-16����Ϊ2�ֽ�
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
        }
        else if ((unsigned char)s[i] == 0xFEFF) {   // ���¿�ͷΪ0xFEFF����Ϊ�����,UTF-16����Ϊ2�ֽ�

            t.append(s.substr(2, i));
            t.append("/");
            i += 1;
            count++;
        }
        else if ((char)s[i] == 0x0020) {
            //ecount--;
        }
        else
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
            count++;
        }
    }
    //cout << t << endl;
    //return t;

    cout << "test16���ָ�����" << count << endl;
    cout << "test16 Ӣ�ĸ�����" << ecount << endl;
    cout << "test16���Էָ��Ϊ" << t << endl;


}
//��ȡ�ַ����еĺ��ּ�����  //������linux �ĺ���ͳ�ƺ� ���ַָ�
//windows vs  �зָ�ֻ���ʾ����
void  test06(string s) {
    string t;
    int count = 0;
    for (int i = 0; i < s.length(); i++) // UTF-8�����У�����ռ��3���ֽ�
    {
        if ((unsigned char)s[i] < 0x80) // ASCII�ַ������λΪ0��UTF-8����Ϊ1�ֽ�
        {
            t.append(s.substr(i, 1));
            t.append("/");
        }
        else if ((unsigned char)s[i] < 0xE0) // ���ĵĵ�һ���ֽڵ����λΪ110��UTF-8����Ϊ3�ֽ�
        {
            t.append(s.substr(i, 3));
            t.append("/");
        }
        else if ((unsigned char)s[i] == 0x3001) {
            // t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count--;
        }
        else // ���ĵĵ�һ���ֽڵ����λΪ1110��UTF-8����Ϊ3�ֽ�
        {
            t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count++;
        }
    }
    //cout << t << endl;
    //return t;
    cout << "test06���ָ�����" << count << endl;
    cout << "test06���Էָ��Ϊ" << t << endl;


}

//������һ���򵥵�ʾ�� utf16_to_utf8 ������ʵ�֣����ڽ� UTF - 16 ����ת��Ϊ UTF - 8 ���룺


string utf16_to_utf8(const wstring& utf16_string) {
    string utf8_string;
    for (size_t i = 0; i < utf16_string.length(); i++) {
        uint32_t c = static_cast<uint32_t>(utf16_string[i]);
        if (c <= 0x7F) {
            // Single-byte UTF-8 character
            utf8_string += static_cast<char>(c);
        }
        else if (c <= 0x7FF) {
            // Two-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 6) | 0xC0);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0xFFFF) {
            // Three-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 12) | 0xE0);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0x10FFFF) {
            // Four-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 18) | 0xF0);
            utf8_string += static_cast<char>(((c >> 12) & 0x3F) | 0x80);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else {
            // Invalid character
            utf8_string += '\xEF';
            utf8_string += '\xBF';
            utf8_string += '\xBD';
        }
    }
    return utf8_string;
}


void test08(wstring c) {
    wstring t;
    for (int i = 0; i < c.length(); i++) {
        if ((unsigned)c[i] < 127) {
            t += (wchar_t)' ';
        }
        else {
            t += c[i];
        }
    }
    t.erase(remove_if(t.begin(), t.end(), [](wchar_t s) { return (unsigned)s < 127; }), t.end());
    cout << "test08������ĺ�����: " << utf16_to_utf8(t) << endl;
    cout << "��" << count_if(t.begin(), t.end(), [](wchar_t s) {return (unsigned)s >= 127; }) << "������" << endl;
}



//linux �º���������׼  //������wIndows VS�еĺ�����ȡ�ͺ�������ͳ��
int IncludeChinese(char* s)
{
    // char* s = new char[c.length() + 1];

    // strcpy_s(s, c.length() + 1, c.c_str());
    char b;

    while (1)
    {
        b = *s++;
        //������ַ���β ��˵��û�������ַ�
        if (b == 0) break;
        //����ַ�����λΪ1  ����һ�ַ���λ
        //Ҳ��1 ���������ַ�
        if (b & 0 * 80)
            if (*s & 0 * 80)
                return 1;
    }
    return 0;
}
void test07(string c) {

    char s[1024] = { 0 };
    for (int f = 0; f < c.length(); f++) {

        s[f] = c[f];

    }
    string t;
    string tm;
    int ecounts=0;
    long long time = 0;
    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] >= 0 && s[i] <= 127) //����ȫ���ַ�
        {
            // s[i] = ' ';
             //cout << s[i] << endl;
            tm += s[i];
            ecounts++;
        }

        else time++;
        t += s[i];
    }

    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s < 127; }), t.end());
    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s == 32; }), t.end());
    ;//Ӣ��ȥ�ո�
    //tm.erase(remove_if(tm.begin(), tm.end(), [](char s) { return (unsigned char)s == 32; }), tm.end());

    cout << "test07�������Ӣ����: " << tm << endl;
    cout << "test07 Ӣ�ĸ�����" << ecounts << endl;
    cout << "test07������ĺ�����: " << t << endl;
    long long times;

    times = t.size();
    cout << "��" << (time / 2) << "������" << endl;
    cout << "��t.size" << t.size() << "������" << endl;
    cout << "��tm.size" << tm.size() << "���Ǻ���" << endl;
    cout << "��t.length" << t.length() << "������" << endl;
    cout << "��sizeof(tm)" << sizeof(tm) << "���Ǻ���" << endl;
    cout << "��sizeof(t)" << sizeof(t) << "������" << endl;
    cout << "��tm.length" << tm.length() << "���Ǻ���" << endl;
}


string �滻���� (string ԭ�ַ�,string ��Ҫ�滻���ַ� ,string Ҫ�滻�ɵ�����) {

    if (ԭ�ַ� == ��Ҫ�滻���ַ�) {
        ԭ�ַ� = Ҫ�滻�ɵ�����;
    }

    return ԭ�ַ�;

}

//�����²˵��Ļش����ݲ��ִ�������滻
//������windows ʮ�����Ʒ�ʽ��ȡ�ָ�ֺ�ͳ�ƺ�������
string   �����滻���ֺ��ֻ����(string s) {
    string t;
    int count = 0;
    int ecount = 0;
    for (int i = 0; i < s.length(); i++) // UTF-16�����У�����ռ��2���ֽ�
    {
        if ((unsigned char)s[i] < 0x80) // ASCII�ַ������λΪ0��UTF-16����Ϊ1�ֽ�
        {
            t.append("/");
            t.append(s.substr(i, 1));
            t.append("/");
            ecount++;
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
        }
        else if ((unsigned char)s[i] == 0xFFFE)  // ���ĵĵ�һ���ֽڵ����λΪ0*FFFE����ΪС����UTF-16����Ϊ2�ֽ�
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;


            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
        }
        else if ((unsigned char)s[i] == 0xFEFF) {   // ���¿�ͷΪ0xFEFF����Ϊ�����,UTF-16����Ϊ2�ֽ�

            t.append(s.substr(2, i));
            t.append("/");
            i += 1;
            count++;

            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
        }
        else if ((char)s[i] == 0x0020) {
            //ecount--;
        }
        else
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
            count++;


            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
            t = �滻����(t, "��", "");
        }
    }
    //cout << t << endl;
    return t;

}