#include "�ִ�.h"



void test07����(string &c�ַ�������,long long &num��������) {

    char s[1024] = { 0 };
    for (int f = 0; f < c�ַ�������.length(); f++) {

        s[f] = c�ַ�������[f];

    }
    string t;
    string tm;
    int ecounts = 0;
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
    num�������� = time / 2;
    c�ַ������� = t;
}

/*
string ��ȡ�ļ���������(string chastr) {
    ifstream ifile("�ִ��õĴ���.txt");    // ��һ���ļ����ж�ȡ����
    multimap<string, string>cizudict;
    string line;
    while (getline(ifile, line)) {

        size_t pos = line.find(" ");
        if (pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos + 1);
            cizudict.insert({ key,value });
        }
    }
    auto it = cizudict.find(chastr);
    if (it != cizudict.end()) {
        string resultcixing = it->second;
        if (resultcixing == "a") { resultcixing = "���ݴ�"; }
        else
            if (resultcixing == "ad") { resultcixing = "���δ�"; }
            else
                if (resultcixing == "b") { resultcixing = "�����"; }
                else
                    if (resultcixing == "c") { resultcixing = "����"; }
                    else
                        if (resultcixing == "d") { resultcixing = "����"; }
                        else
                            if (resultcixing == "e") { resultcixing = "̾��"; }
                            else
                                if (resultcixing == "f") { resultcixing = "��λ��"; }
                                else
                                    if (resultcixing == "i") { resultcixing = "����"; }
                                    else
                                        if (resultcixing == "j") { resultcixing = "��ĸ��д"; }
                                        else
                                            if (resultcixing == "m") { resultcixing = "����"; }
                                            else
                                                if (resultcixing == "n") { resultcixing = "��ͨ����"; }
                                                else
                                                    if (resultcixing == "nr") { resultcixing = "����"; }
                                                    else
                                                        if (resultcixing == "ns") { resultcixing = "����"; }
                                                        else
                                                            if (resultcixing == "nt") { resultcixing = "����������"; }
                                                            else
                                                                if (resultcixing == "nz") { resultcixing = "����ר��"; }
                                                                else
                                                                    if (resultcixing == "o") { resultcixing = "������"; }
                                                                    else
                                                                        if (resultcixing == "p") { resultcixing = "���"; }
                                                                        else
                                                                            if (resultcixing == "q") { resultcixing = "���� "; }
                                                                            else
                                                                                if (resultcixing == "r") { resultcixing = "����"; }
                                                                                else
                                                                                    if (resultcixing == "s") { resultcixing = "������"; }
                                                                                    else
                                                                                        if (resultcixing == "t") { resultcixing = "ʱ���"; }
                                                                                        else
                                                                                            if (resultcixing == "u") { resultcixing = "����"; }
                                                                                            else
                                                                                                if (resultcixing == "v") { resultcixing = "����"; }
                                                                                                else
                                                                                                    if (resultcixing == "w") { resultcixing = "������"; }
                                                                                                    else
                                                                                                        if (resultcixing == "x") { resultcixing = "��������"; }
                                                                                                        else
                                                                                                            if (resultcixing == "y") { resultcixing = "������"; }
                                                                                                            else
                                                                                                                if (resultcixing == "z") { resultcixing = "״̬��"; }
                                                                                                                else
                                                                                                                {
                                                                                                                    resultcixing = "��������";
                                                                                                                }

        //return "->�Ǵ���->'" + resultcixing + "\'\t\n";
        //return "�Ǵ���";
        return resultcixing;
    }
    else {
        //return "->���Ǵ���\'\t\n";
        return "���Ǵ���";
    }
    
}
*/


string ��ȡ�ļ���������(string chastr) {
    ifstream ifile("�ִ��õĴ���.txt");    // ��һ���ļ����ж�ȡ����
    multimap<string, string> cizudict;
    string line;
    while (getline(ifile, line)) {

        size_t pos = line.find(" ");
        if (pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos + 1);
            cizudict.insert({ key,value });
        }
    }
    auto it = cizudict.find(chastr);
    if (it != cizudict.end()) {
        if (it->first== chastr) {

       
        string resultcixing = it->second;
        if (resultcixing == "a") { resultcixing = "���ݴ�"; }
        else if (resultcixing == "ad") { resultcixing = "���δ�"; }
        else if (resultcixing == "b") { resultcixing = "�����"; }
        else if (resultcixing == "c") { resultcixing = "����"; }
        else if (resultcixing == "d") { resultcixing = "����"; }
        else if (resultcixing == "e") { resultcixing = "̾��"; }
        else if (resultcixing == "f") { resultcixing = "��λ��"; }
        else if (resultcixing == "i") { resultcixing = "����"; }
        else if (resultcixing == "j") { resultcixing = "�������"; }
        else if (resultcixing == "k") { resultcixing = "��׺"; }
        else if (resultcixing == "l") { resultcixing = "ϰ����"; }
        else if (resultcixing == "m") { resultcixing = "����"; }
        else if (resultcixing == "mq") { resultcixing = "������"; }
        else if (resultcixing == "n") { resultcixing = "����"; }
        else if (resultcixing == "nr") { resultcixing = "����"; }
        else if (resultcixing == "ns") { resultcixing = "����"; }
        else if (resultcixing == "nt") { resultcixing = "����������"; }
        else if (resultcixing == "nz") { resultcixing = "����ר��"; }
        else if (resultcixing == "o") { resultcixing = "������"; }
        else if (resultcixing == "p") { resultcixing = "���"; }
        else if (resultcixing == "q") { resultcixing = "����"; }
        else if (resultcixing == "r") { resultcixing = "����"; }
        else if (resultcixing == "s") { resultcixing = "������"; }
        else if (resultcixing == "t") { resultcixing = "ʱ���"; }
        else if (resultcixing == "tg") { resultcixing = "ʱ����"; }
        else if (resultcixing == "U") { resultcixing = "��ַURL"; }
        else if (resultcixing == "ug") { resultcixing = "��ĩ������"; }
        else if (resultcixing == "uj") { resultcixing = "����"; }
        else if (resultcixing == "ul") { resultcixing = "ʱ̬����"; }
        else if (resultcixing == "uv") { resultcixing = "����"; }
        else if (resultcixing == "uz") { resultcixing = "������"; }
        else if (resultcixing == "v") { resultcixing = "����"; }
        else if (resultcixing == "vd") { resultcixing = "������"; }
        else if (resultcixing == "vi") { resultcixing = "�����ﶯ��"; }
        else if (resultcixing == "vn") { resultcixing = "������"; }
        else if (resultcixing == "w") { resultcixing = "������"; }
        else if (resultcixing == "x") { resultcixing = "��������"; }
        else if (resultcixing == "y") { resultcixing = "������"; }
        else if (resultcixing == "z") { resultcixing = "״̬��"; }
        else { resultcixing = "��������"; }

        return resultcixing;
        }
    }
    else {
        return "���Ǵ���";
    }

}


void �ִ�(string str) {
    //����ѭ���ж�һ�仰�Ƿ��ǳ������4����һ������жϣ�ÿ���ֽ���ѭ���������ҳ������еĳ�����ﲢ���г�����ʽ�ִʳ���
    //�����ж�֮�����������ʽ�жϣ�����аټ��մ��ڣ����п���������������������ʽ�Ľ��������ʾ����һ�����
    //������������ִʺú󣬽��д�����жϣ����д������մ������ʽ���зִ���ʾ
    //�Զ������� �ж�
    //�̶������ж�
    //���������¼������ж�
    //���Թ����ж��Ƿ��Ǵ���Ŀ�����
    //ȫ���ų��� ���տ��ܵĽ���������
    //int �ַ����ĳ��� = str.length();
    //int len = 17;
    /*
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = 1; length < ; length++) {
        if (length == 2) {

            for (int i = 0; i < str.length(); i += length) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout<< "["+stri+"]" <<"--------"+ ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 4) {

            for (int i = 0; i < str.length(); i += length - 2) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 6) {

            for (int i = 0; i < str.length(); i += length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 8) {

            for (int i = 0; i < str.length(); i += length - 6) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 10) {

            for (int i = 0; i < str.length(); i += length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 12) {

            for (int i = 0; i < str.length(); i += length - 10) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 14) {

            for (int i = 0; i < str.length(); i += length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }
        else if (length == 16) {

            for (int i = 0; i < str.length(); i += length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << ��ȡ�ļ���������(stri);
            }

        }

        else {
            cout << "1" << endl;
        }
    }*/


    /*

    //�޸�
    int len = 17;
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = str.length(); length > 1; length--) {
        if (length == 16) {

            for (int i = str.length(); i > -1; i -= length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);

                if(��ȡ�ļ���������(stri)== "�Ǵ���"){
                cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i <<","<< length << endl;
                cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 14) {

            for (int i = str.length(); i > -1; i -= length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 12) {

            for (int i = str.length(); i > -1; i -= length - 10) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 10) {

            for (int i = str.length(); i > -1; i -= length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 8) {

            for (int i = str.length(); i > -1; i -= length - 6) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 6) {

            for (int i = str.length(); i > -1; i -= length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "���ִ���" << endl;
                }
            }

        }
        else if (length == 4) {

            for (int i = str.length(); i > -1; i -= length - 2) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) == "�Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" <<"���ִ���" << endl;
                }
            }

        }
        else {
            cout << "1" << endl;
        }
        */


        //123
      /*���������ͷ��ע��  ���Կɿ���*/
        //���޸�
    map<string, int>fencizancundict;
    map<string, string>fencizancuncixingdict;
    multimap<int, string>zlfencizancuncixingdict;
    multimap<int, int>strend;
    map<int, int>strendmaptest;
    multimap<int, string>endstr;
    vector<std::tuple<string, int, string> > vtp;
    int len = 17;
    string ����õ�����;
    string ����õ����ݶ�Ӧ�Ŀ�ʼλ��;
    int ��ʼλ�� = 0;
    string ����õ����ݺ�λ�÷�Χ;
    string ����õ�����λ�ú͸���;
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = static_cast<int>(str.length()); length > 1; length--) {
        if (length == 16) {

            //for (int i = str.length(); i > -1; i -= length - 14) {
            for (int i = 0; i < str.length(); i += length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);

                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                        cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;
                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        //����õ�����λ�ú͸���+= "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")"+"����:"+to_string(static_cast<int>(str.length())) + "�ִ���";

                        //�ж��Ƿ����
                        /*
                        for (auto& [key, value] : fencizancundict) {
                            auto it = fencizancundict.find(stri);
                            if (it != fencizancundict.end()) {  // �Ѿ����ڸ�ֵ
                                if ((stri.length() / 2) > key.length()) {  // ��key���ȸ���
                                    fencizancundict.erase(it);  // ��ɾ���ɵļ�ֵ��
                                    fencizancundict.insert(pair<string, int>(stri, i));  // �����µļ�ֵ��
                                }
                            }
                            else {  // �����ڸ�ֵ
                                fencizancundict.insert(pair<string, int>(stri, i));  // ֱ�Ӳ����µļ�ֵ��
                            }
                        }
                        */
                       
                        fencizancundict[stri] = i;
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                    }
                }
            }

        }
        else if (length == 14) {

            //for (int i = str.length(); i > -1; i -= length - 12) {
            for (int i = 0; i < str.length(); i += length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        //����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                        fencizancundict[stri] = i;
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri});
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));

                                    strendmaptest[i] = i + stri.length();

                    }
                }
            }

        }
        else if (length == 12) {

            //for (int i = str.length(); i > -1; i -= length - 10) {
            for (int i = 0; i < str.length(); i += length - 10) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                     cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        //����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";



                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        
                        
                        
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });


                        
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                         

                        
                    }
                }
            }

        }
        else if (length == 10) {

            //for (int i = str.length(); i > -1; i -= length - 8) {
            for (int i = 0; i < str.length(); i += length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                     cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                    }
                }
            }

        }
        else if (length == 8) {

            //for (int i = str.length(); i > -1; i -= length - 6) {
            for (int i = 0; i < str.length(); i += length - 6) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                     cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;
                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";
                       
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                        
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }

        }
        else if (length == 6) {

            //for (int i = str.length(); i > -1; i -= length - 4) {
            for (int i = 0; i < str.length(); i += length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                     cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                           cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });

                        
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }

        }
        else if (length == 4) {

            //for (int i = str.length(); i > -1; i -= length - 2) {
            for (int i = 0; i < str.length(); i += length - 2) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                        cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                      
                    }
                }
            }

        }
        else if (length == 2) {

            //for (int i = str.length(); i > -1; i -= length) {
            for (int i = 0; i < str.length(); i += length) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                    cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "�ǵ�����" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                    else {
                          cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "��������" << endl;

                        ����õ����� += "[" + stri + "]";
                        //��ʼλ�� += i;
                        ����õ����ݶ�Ӧ�Ŀ�ʼλ�� += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                        ����õ����ݺ�λ�÷�Χ += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                        ����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "��������";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        /*
                        for (auto const& [key, value] : fencizancundict) {
                            auto it = fencizancundict.find(stri);
                            if (it != fencizancundict.end()) {
                                if (static_cast<int>(stri.length()) < static_cast<int>(it->first.length())) {
                                    break;
                                }
                            }
                            else if (key.compare(stri) == 0) {
                                break;
                            }
                            else if (i == value) {
                                break;
                            }
                            else {
                                fencizancundict[stri] = i;
                            }
                        }
                        */
                        fencizancuncixingdict[stri] = ��ȡ�ļ���������(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }
        }
        else {
            /*�������*/// cout << "1" << endl;
        }
        


    }
                    cout << endl;
                    cout << "�ָ���======================��ʼ=" << endl;
                    cout << endl;
                    cout << "����õ�����-------->" << ����õ����� << endl;
                    cout << endl;
                     cout << "��ʼλ��-------->" << ��ʼλ�� << endl;
                     cout << endl;

                     cout << "����õ����ݶ�Ӧ�Ŀ�ʼλ��-------->" << ����õ����ݶ�Ӧ�Ŀ�ʼλ�� << endl;
                    cout << endl;
                        cout << "����õ����ݺ�λ�÷�Χ-------->" << ����õ����ݺ�λ�÷�Χ << endl;
                     cout << endl;
                    cout << "����õ�����λ�ú͸���-------->" << ����õ�����λ�ú͸��� << endl;
                    cout << endl;
                    cout << "�ָ���=======================����" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "�ָ���*^^^^^^^^^^^^^^^^^^^^^^^^^*��ʼ" << endl;
                    cout << endl;
    auto iter = zlfencizancuncixingdict.begin();
    int prev_key = iter->first;
    string prev_value = iter->second;
    for (; iter != zlfencizancuncixingdict.end(); ++iter) {
        // ��ȡ��ǰ��ֵ�Ե�key��value
        int curr_key = iter->first;
        string value = iter->second;

        // �жϵ�ǰkey�Ƿ���ǰһ��key��ͬ
        if (curr_key == prev_key) {
            if (prev_value.length() > value.length()) {
                value = prev_value;
            }
            else {
                prev_value = value;
            }
        }
    }
        for (auto const& pair : zlfencizancuncixingdict) {

                cout << "key:" << pair.first << "value:" << pair.second << endl;

        }


             cout << endl;
                cout << "�ָ���*^^^^^^^^^^^^^^^^^^^^^^^^^*����" << endl;
                cout << endl;
                //strend.insert({ i,i + stri.length() });
                //endstr.insert({ i + stri.length(),stri });
                for (auto const& pair : strend) {

                    cout << "strendkey:" << pair.first << "strendvalue:" << pair.second << endl;

                }
                cout << "�ָ���*^^^^^^^^^strendmaptest^^^^^^^^^^^^^^^^*��ʼ" << endl;
                for (auto const& pair : strendmaptest) {

                    cout << "strendmaptestkey:" << pair.first << "strendmaptestvalue:" << pair.second << endl;

                }
                cout << "�ָ���*^^^^^^^^^strendmaptest^^^^^^^^^^^^^^^^*����" << endl;
                for (auto const& pair : endstr) {

                    cout << "endstrkey:" << pair.first << "endstrvalue:" << pair.second << endl;

                }
                cout << endl;
                 cout << "�ָ���++++++++++++++++++++����" << endl;
                 cout << endl;
        
        
        map<string,int>strstrlen;
        map<string,int>newfencizancundict;

        vector<std::tuple<string, int, string> > vsp;
        for (auto const& pair : fencizancundict) {
            
           /* cout << "vtp  0000000000 ��ʼ" << endl;
            for (int i = 0; i < vtp.size(); i++) {
                string t1 = get<0>(vtp[i]);
                cout << "��һ��Ԫ��" << t1 << endl;

                int t2 = get<1>(vtp[i]);
                cout << "�ڶ���Ԫ��" << t2 << endl;

                string t3 = get<2>(vtp[i]);
                cout << "������Ԫ��" << t3 << endl;

                if (t2 == pair.second) {
                    if (t1.length()> pair.first.length()) {
                        vsp.push_back(make_tuple(t1, t2,t3));

                        newfencizancundict[pair.first] = pair.second;
                        cout << "����-��key:" << pair.first << endl;
                        cout << "����-��value:" << pair.second << endl;
                    }
                   
                }

            }*/


            cout << "vtp000000000000����" << endl;
            cout << "ȫ��-��key:" << pair.first << endl;
           cout << "ȫ��-��value:" << pair.second << endl; 
            
            cout << "ȫ��key~~~~~~~~~~~~ȫ��value" << endl;
        }




             cout << "pairlenkey~~~~~~~~~~~~pairlenvalue" << endl;
        for (auto const& pairlen : strstrlen) {
            cout << "pairlen->key:" << pairlen.first<< endl;
             cout << "pairlen->value:" << pairlen.second << endl;
        }
        
        //vector<std::pair<string, int>> ov(strstrlen.begin(), strstrlen.end());
        //auto maxPair = max_element(ov.begin(), ov.end());
        
        //cout << "The pair with the maximum length is "<< maxPair->first<< maxPair->second<< endl;

        
        vector<std::pair<std::string, int>> v(newfencizancundict.begin(), newfencizancundict.end());
        //v.emplace_back(maxPair->first, maxPair->second);
        sort(v.begin(), v.end(), [](std::pair<std::string, int>& a, std::pair<std::string, int>& b) {
            return a.second < b.second;
            });
        cout << endl;
        cout << "�ִʿ�ʼ" << endl;
        for (auto& [key, value] : v)
        {
            std::cout << key << ": " << value << std::endl;
            cout << "�ִʷָ���" << endl;
            auto iitt = fencizancuncixingdict.find(key);
            if (iitt != fencizancuncixingdict.end()) {
                cout << iitt->first << "00000--->" << iitt->second << std::endl;
            }
        }
             cout << endl;
        cout << "�ִʽ���" << endl;
             cout << endl;
        


             cout <<"////////////////////////////////////����͵������жԱȣ�����Ϊ��������Ϊ����////////////////////////////////////"<< endl;

//////////////////������ط�//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

             map<int,int>strendmaptesttoo;
             
             map<string, int>fencizancundicttoo;
             map<string, string>fencizancuncixingdicttoo;
             multimap<int, string>zlfencizancuncixingdicttoo;
             multimap<int, int>strendtoo;
            
             multimap<int, string>endstrtoo;
             map<int, string>mapendstrtoo;
             vector<std::tuple<string, int, string> > vtptoo;
             int lentoo = 17;
             string ����õ�����too;
             string ����õ����ݶ�Ӧ�Ŀ�ʼλ��too;
             int ��ʼλ��too = 0;
             string ����õ����ݺ�λ�÷�Χtoo;
             string ����õ�����λ�ú͸���too;


             for (int length =0 ; length < str.length(); length++) {
                 if (length == 16) {

                     //for (int i = str.length(); i > -1; i -= length - 14) {
                     for (int i = 0; i < str.length(); i += length - 14) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);

                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;
                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 //����õ�����λ�ú͸���too+= "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")"+"����:"+to_string(static_cast<int>(str.length())) + "�ִ���";

                                 //�ж��Ƿ����
                                 /*
                                 for (auto& [key, value] : fencizancundict) {
                                     auto it = fencizancundict.find(stri);
                                     if (it != fencizancundict.end()) {  // �Ѿ����ڸ�ֵ
                                         if ((stri.length() / 2) > key.length()) {  // ��key���ȸ���
                                             fencizancundict.erase(it);  // ��ɾ���ɵļ�ֵ��
                                             fencizancundict.insert(pair<string, int>(stri, i));  // �����µļ�ֵ��
                                         }
                                     }
                                     else {  // �����ڸ�ֵ
                                         fencizancundict.insert(pair<string, int>(stri, i));  // ֱ�Ӳ����µļ�ֵ��
                                     }
                                 }
                                 */
                                 fencizancundicttoo[stri] = i;
                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });
                                 strendmaptesttoo[i] = i+stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 14) {

                     //for (int i = str.length(); i > -1; i -= length - 12) {
                     for (int i = 0; i < str.length(); i += length - 12) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 //����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                                 fencizancundicttoo[stri] = i;
                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });
                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));

                                 strendmaptesttoo[i] = i + stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 12) {

                     //for (int i = str.length(); i > -1; i -= length - 10) {
                     for (int i = 0; i < str.length(); i += length - 10) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 //����õ�����λ�ú͸��� += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";



                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });



                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });



                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;


                             }
                         }
                     }

                 }
                 else if (length == 10) {

                     //for (int i = str.length(); i > -1; i -= length - 8) {
                     for (int i = 0; i < str.length(); i += length - 8) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 8) {

                     //for (int i = str.length(); i > -1; i -= length - 6) {
                     for (int i = 0; i < str.length(); i += length - 6) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;
                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 6) {

                     //for (int i = str.length(); i > -1; i -= length - 4) {
                     for (int i = 0; i < str.length(); i += length - 4) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });


                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }

                 }
                 else if (length == 4) {

                     //for (int i = str.length(); i > -1; i -= length - 2) {
                     for (int i = 0; i < str.length(); i += length - 2) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "�ִ���ִʷ�ʽ" << "��" << stri.length() / 2 << "�ִ���" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }

                 }
                 else if (length == 2) {

                     //for (int i = str.length(); i > -1; i -= length) {
                     for (int i = 0; i < str.length(); i += length) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + ��ȡ�ļ���������(stri) << endl;;
                         if (��ȡ�ļ���������(stri) != "���Ǵ���") {
                             cout << "[" + stri + "]" << "--------=========--------" + ��ȡ�ļ���������(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "����λ��Ϊ" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "�ǵ�����" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "�ִ���";
                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                             else {
                                 cout << "[" + stri + "]" << "--------" << "��" << length / 2 << "��������" << endl;

                                 ����õ�����too += "[" + stri + "]";
                                 //��ʼλ�� += i;
                                 ����õ����ݶ�Ӧ�Ŀ�ʼλ��too += "[" + stri + "]" + "��ʼλ��Ϊ��" + to_string(i);
                                 ����õ����ݺ�λ�÷�Χtoo += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")";
                                 ����õ�����λ�ú͸���too += "[" + stri + "]" + "����λ��Ϊ��" + "��" + to_string(i) + "," + to_string(length) + ")" + "����:" + to_string(static_cast<int>(str.length())) + "��������";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 /*
                                 for (auto const& [key, value] : fencizancundict) {
                                     auto it = fencizancundict.find(stri);
                                     if (it != fencizancundict.end()) {
                                         if (static_cast<int>(stri.length()) < static_cast<int>(it->first.length())) {
                                             break;
                                         }
                                     }
                                     else if (key.compare(stri) == 0) {
                                         break;
                                     }
                                     else if (i == value) {
                                         break;
                                     }
                                     else {
                                         fencizancundict[stri] = i;
                                     }
                                 }
                                 */
                                 fencizancuncixingdicttoo[stri] = ��ȡ�ļ���������(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, ��ȡ�ļ���������(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }
                 }
                 else {
                     /*�������*/// cout << "1" << endl;
                 }


             }


             cout << "�ָ���*^^^^^^^^^strendtoo^^^^^^^^^^^^^^^^*��ʼ" << endl;

             for (auto const& pair : strendtoo) {

                 cout << "strendtookey:" << pair.first << "strendtoovalue:" << pair.second << endl;

             }
             cout << "�ָ���*^^^^^^^^^strendmaptesttoo^^^^^^^^^^^^^^^^*��ʼ" << endl;
             for (auto const& pair : strendmaptesttoo) {

                 cout << "strendmaptestkey:" << pair.first << "strendmaptestvalue:" << pair.second << endl;

             }
             cout << "�ָ���*^^^^^^^^^strendmaptesttoo^^^^^^^^^^^^^^^^*����" << endl;
             for (auto const& pair : endstrtoo) {

                 cout << "endstrkey:" << pair.first << "endstrvalue:" << pair.second << endl;

             }

             cout << "�ָ���*^^^^^^^^^endstrtoo^^^^^^^^^^^^^^^^*����" << endl;

             map<int, int>cunzhidict,cunkeydict;
             
             int chushizhi = 0; int chushikey = 0;
             while (strendmaptesttoo.find(chushizhi)!= strendmaptesttoo.end()) {

                 cunkeydict[chushizhi] = cunzhidict[chushizhi];
                 cunzhidict[cunzhidict[chushizhi]] = 0;
                 
                 chushizhi = strendmaptesttoo[chushizhi];
                 chushikey += 1;
             }
             if(!strendmaptesttoo.empty()){
             
                 auto lastltor = strendmaptesttoo.end();
                 lastltor--;
                 cunzhidict[lastltor->second] = 0;
                 cout << "lastltor->second" << lastltor->second << std::endl;
             }
           
            
                 // ����ҵ��ļ���ֵ
             std::cout << "\nFound keys:\n";
             for (const auto& p : cunkeydict) {
                 std::cout << p.first << " -> " << p.second << std::endl;
             }
             std::cout << "\nFound values:\n";
             for (const auto& p : cunzhidict) {
                 auto it = endstrtoo.find(p.first);
                 if (it != endstrtoo.end()) {
                     cout << it->second<<endl;
                 }
                 std::cout << p.first << std::endl;
             }

             std::cout << "\nmapendstrtoo[i + stri.length()] = stri;:\n"; 
             for (const auto& p : mapendstrtoo) {
                 auto it = mapendstrtoo.find(p.first);
                 if (it != mapendstrtoo.end()) {
                     cout << it->second << endl;
                 }
                 std::cout << p.first << std::endl;
             }
             std::cout << "\nFound values+mapendstrtoo:\n";
             for (const auto& p : cunzhidict) {
                 auto it = mapendstrtoo.find(p.first);
                 if (it != mapendstrtoo.end()) {
                     cout << it->second << endl;

                     //�����ȷִ�д���ı���
                     ofstream file(str + "�����ȷִ��ı�.txt", ios::app ); // ��һ���ļ�����д�����
                     if (file.is_open()) { // ����ļ��ɹ���
                         
                             file << it->second << endl; // ����ֵ��д���ļ���
                        
                         file.close(); // �ر��ļ�
                         cout << "�����ȷִ�д���ı��гɹ�" << endl;
                     }
                     else {
                         std::cerr << "�����ȷִ�д���ı���ʧ��" << endl;
                     }
                     
                     //�����ȷִ�д���ı���
                 }
                 std::cout << p.first << std::endl;

                 //�����ȷִ�λ��д���ı���
                 ofstream file(str+"�����ȷִ�λ���ı�.txt"  , ios::app); // ��һ���ļ�����д�����
                 if (file.is_open()) { // ����ļ��ɹ���

                     file << p.first << endl; // ����ֵ��д���ļ���

                     file.close(); // �ر��ļ�
                     cout << "�����ȷִ�λ��д���ı��гɹ�" << endl;
                 }
                 else {
                     std::cerr << "�����ȷִ�λ��д���ı���ʧ��" << endl;
                 }

                 //�����ȷִʳ���д���ı���
             }
             std::cout << "\nFound values+mapendstrtoo+fencizancuncixingdicttoo:\n";
             
                 for (const auto& p : cunzhidict) {
                     auto it = mapendstrtoo.find(p.first);
                     if (it != mapendstrtoo.end()) {
                         cout << it->second << endl;
                         auto itor = fencizancuncixingdicttoo.find(it->second);
                         if (it != mapendstrtoo.end()) {
                             cout << itor->second << endl;

                             //�����ȷִʴ���д���ı���
                             ofstream file(str + "�����ȷִʴ����ı�.txt",ios::app); // ��һ���ļ�����д�����
                             if (file.is_open()) { // ����ļ��ɹ���

                                 file << itor->second << endl; // ����ֵ��д���ļ���

                                 file.close(); // �ر��ļ�
                                 cout << "�����ȷִʴ���д���ı��гɹ�" << endl;
                             }
                             else {
                                 std::cerr << "�����ȷִʴ���д���ı���ʧ��" << endl;
                             }

                             //�����ȷִʴ���д���ı���
                         }
                     }
                     std::cout << p.first << std::endl;
                 }
               

        /*
            int count = 0;
            int length = 0;

            while (count < 8) {
                switch (count) {
                case 0:
                    length = 2;
                    for (int i = 0; i < str.length(); i += length) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 1:
                    length = 4;
                    for (int i = 0; i < str.length(); i += length - 2) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 2:
                    length = 6;
                    for (int i = 0; i < str.length(); i += length - 4) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 3:
                    length = 8;
                    for (int i = 0; i < str.length(); i += length - 6) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 4:
                    length = 10;
                    for (int i = 0; i < str.length(); i += length - 8) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 5:
                    length = 10;
                    for (int i = 0; i < str.length(); i += length - 10) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 6:
                    length = 12;
                    for (int i = 0; i < str.length(); i += length - 12) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 7:
                    length = 14;
                    for (int i = 0; i < str.length(); i += length - 14) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                default:
                    break;
                }
                count++;
                cout << "length = " << length << endl;
            }

        */
    }

