#include "�ļ���д.h"


int test01(string xn, string mn, string nn, int i ) {

    string filename;
    filename = to_string(i);
    ofstream  ofs;
    ofs.open(filename + ".txt", ios::out | ios::trunc);
    string �ֺ����е��� = xn;
    string �ֺ����е��ּӷָ��� = "|" + xn + "|";
    string �ֺ����е��� = mn;
    string �ֺ����е���ӷָ��� = "|" + mn + "|";
    string ���еĴ��� = nn;
    string ���еĴ��Լӷָ��� = "|" + nn + "|";
    int inpaperid = i;
    string inpaperid�ӷָ��� = "|" + filename + "|";

    ofs << �ֺ����е��� << endl;
    ofs << �ֺ����е��ּӷָ��� << endl;
    ofs << �ֺ����е��� << endl;
    ofs << �ֺ����е���ӷָ��� << endl;
    ofs << ���еĴ��� << endl;
    ofs << ���еĴ��Լӷָ��� << endl;
    ofs << inpaperid << endl;
    ofs << inpaperid�ӷָ��� << endl;
    ofs.close();
    i += 1;
    return i;

}
void ��¼paperid(int i) {
    ofstream  ofs;
    ofs.open("paperid.txt", ios::out | ios::trunc);
    int paperid = i - 1;
    ofs << paperid << endl;
    ofs.close();
}
int ��ȡpaperid() {
    ifstream  ifs;
    ifs.open("paperid.txt", ios::in);
    int paperid;
    ifs >> paperid;
    ifs.close();
    return paperid;
}
void test03(int i) {
    string �ֺ����е���;
    string �ֺ����е��ּӷָ���;
    string �ֺ����е���;
    string �ֺ����е���ӷָ���;
    string ���еĴ���;
    string ���еĴ��Լӷָ���;
    string ѧ������;
    string ѧ�����ּӷָ���;
    string ѧ����˼;
    string ѧ����˼�ӷָ���;
    string ѧ���Ĵ���;
    string ѧ���Ĵ��Լӷָ���;
    string filename;
    string filename�ӷָ���;
    int j;
    j = i;

    ifstream ifs;


    for (int m = 1; m < j; m++) {
        string odfilename;
        odfilename = to_string(m);
        ifs.open(odfilename + ".txt", ios::in);
        �ֺ����е��� = �ֺ����е��� + odfilename;
        �ֺ����е��ּӷָ��� = �ֺ����е��ּӷָ��� + odfilename;
        �ֺ����е��� = �ֺ����е��� + odfilename;
        �ֺ����е���ӷָ��� = �ֺ����е���ӷָ��� + odfilename;
        ���еĴ��� = ���еĴ��� + odfilename;
        ���еĴ��Լӷָ��� = ���еĴ��Լӷָ��� + odfilename;
        filename = filename + odfilename;
        filename�ӷָ��� = filename�ӷָ��� + odfilename;

        ifs >> �ֺ����е���;
        ifs >> �ֺ����е��ּӷָ���;
        ifs >> �ֺ����е���;
        ifs >> �ֺ����е���ӷָ���;
        ifs >> ���еĴ���;
        ifs >> ���еĴ��Լӷָ���;
        ifs >> filename;
        ifs >> filename�ӷָ���;
        ifs.close();
        ѧ������ += �ֺ����е���.c_str();
        ѧ�����ּӷָ��� += �ֺ����е��ּӷָ���.c_str();
        ѧ����˼ += �ֺ����е���.c_str();
        ѧ����˼�ӷָ��� += �ֺ����е���ӷָ���.c_str();
        ѧ���Ĵ��� += ���еĴ���.c_str();
        ѧ���Ĵ��Լӷָ��� += ���еĴ��Լӷָ���.c_str();

    }


    ofstream  ofs;
    filename = to_string(j);
    ofs.open(filename + ".txt", ios::out | ios::trunc);
    ofs << ѧ������ << endl;
    ofs << ѧ�����ּӷָ��� << endl;
    ofs << ѧ����˼ << endl;
    ofs << ѧ����˼�ӷָ��� << endl;
    ofs << ѧ���Ĵ��� << endl;
    ofs << ѧ���Ĵ��Լӷָ��� << endl;
    ofs << filename << endl;
    ofs << filename�ӷָ��� << endl;
    ofs.close();


}
void test02(string cm) {
    string �ֺ����е���;
    string �ֺ����е��ּӷָ���;
    string �ֺ����е���;
    string �ֺ����е���ӷָ���;
    string ���еĴ���;
    string ���еĴ��Լӷָ���;
    string ѧ������;
    string ���Ӵ����˼;

    int id = ��ȡpaperid();
    for (int paidd = 1; paidd <= id; paidd++) {
        string filename;
        filename = to_string(paidd);
        ifstream ifs;



        ifs.open(filename + ".txt", ios::in);
        if (!ifs.is_open()) {
            cout << "ϵͳ���ļ���ʧ��" << endl;

            return;
        }

        �ֺ����е��� = �ֺ����е��� + filename;
        �ֺ����е��ּӷָ��� = �ֺ����е��ּӷָ��� + filename;
        �ֺ����е��� = �ֺ����е��� + filename;
        �ֺ����е���ӷָ��� = �ֺ����е���ӷָ��� + filename;
        ���еĴ��� = ���еĴ��� + filename;
        ���еĴ��Լӷָ��� = ���еĴ��Լӷָ��� + filename;
        ifs >> �ֺ����е���;
        ifs >> �ֺ����е��ּӷָ���;
        ifs >> �ֺ����е���;
        ifs >> �ֺ����е���ӷָ���;
        ifs >> ���еĴ���;
        ifs >> ���еĴ��Լӷָ���;
        ifs.close();
        ѧ������ += �ֺ����е���;
        ���Ӵ����˼ += �ֺ����е���;

    }

    if (cm == �ֺ����е���)  //������ѧ���ж�
    {

        cout << "AI:��ѧ�������� : " << �ֺ����е��� << endl;
        cout << "AI:������˼�� : " << �ֺ����е��� << endl;
        cout << "AI:���Ĵ����� : " << ���еĴ��� << endl;
    }
    else if (cm == ѧ������) //����������ȫƥ���ж�
    {
        cout << "AI:��ѧ�������� : " << ѧ������ << endl;
        cout << "AI:������˼�� : " << ���Ӵ����˼ << endl;
    }

    else {
        //cout << "AI:��֪�������,���ҵ������������,�����ļ���û����Щ�֣�����Խ���������";

        //�������ж�
        int count = 0;
        string sameChars = "";
        for (int i = 0; i < ѧ������.length(); i++) {
            for (int j = 0; j < cm.length(); j++) {
                if (ѧ������[i] == cm[j]) {

                    sameChars += ѧ������[i];
                    count++;
                    int mmm = count;
                }
            }
        }

        if (ѧ������.find(cm) != string::npos) {
            cout << "AI:�һ�ѧ�������� : " << sameChars << endl;
            if (sameChars == ѧ������)  //������ѧ���ж�
            {
                cout << "AI:���Ĵ����� : " << ���Ӵ����˼ << endl;
            }
            //cout << "AI:������˼�� : " << sameCharsmean << endl;
        }
    }


}

void test04(string someworld, int id) {
    string swd = someworld;
    int imd = id;
    string filename = to_string(imd);
    string rehis = "��ʷ��¼";
    string txt = ".txt";
    ofstream ofs;
    ofs.open(rehis + filename + txt, ios::in | ios::trunc);
    ofs << swd << endl;
    ofs.close();


}