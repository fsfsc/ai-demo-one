#include "�½����˵��ļ�����.h"

void д���û�����ע����Ը(string �û�����ע����Ը) {
    string �û�����ע����Ը�ж� = �û�����ע����Ը;
    ofstream  ofs;
    ofs.open("�û�����ע����Ը.txt", ios::out | ios::trunc);
    ofs << �û�����ע����Ը�ж� << endl;
    ofs.close();
}

string  ��ȡ�û�����ע����Ը() {
    string �û�����ע����Ը�ж�;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("�û�����ע����Ը.txt", ios::in);
    if (!ifs.is_open()) {
       
        return �ļ�������;
    }else{
   
    ifs >> �û�����ע����Ը�ж�;
    ifs.close();

    return �û�����ע����Ը�ж�;
    }
}

void �û��ο�״̬(string �û��ο����) {
	string �û��ο�����ж� = �û��ο����;
    ofstream  ofs;
    ofs.open("�û��ο�״̬.txt", ios::out | ios::trunc);
    ofs << �û��ο�����ж� << endl;
    ofs.close();
}

string  ��ȡ�û��ο�״̬() {
    string �û��ο�����ж�;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("�û��ο�״̬.txt", ios::in);
    if (!ifs.is_open()) {
        
        return �ļ�������;
    }else{
       
        ifs >> �û��ο�����ж�;
        ifs.close();

        return �û��ο�����ж�;
    }
   
}

void �û�ע���˺���Ϣ(string �û�ע����Ϣ�˺�) {
    string �û��˺�ע�� = �û�ע����Ϣ�˺�;
    ofstream  ofs;
    ofs.open("�û��˺�.txt", ios::out | ios::trunc);
    ofs << �û��˺�ע�� << endl;
    ofs.close();
}

string ��ȡ�û�ע���˺���Ϣ() {
    string �û��˺�ע��;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("�û��˺�.txt", ios::in);
    if (!ifs.is_open()) {
      

        return �ļ�������;
    }else{
        
        ifs >> �û��˺�ע��;
        ifs.close();
        return �û��˺�ע��;
    }
    
}


void �û�ע��������Ϣ(string �û�ע����Ϣ����) {
    string �û�����ע�� = �û�ע����Ϣ����;
    ofstream  ofs;
    ofs.open("�û�����.txt", ios::out | ios::trunc);
    ofs << �û�����ע�� << endl;
    ofs.close();
}

string ��ȡ�û�ע��������Ϣ() {
    string �û�����ע��;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("�û�����.txt", ios::in);
    if (!ifs.is_open()) {
        
        return �ļ�������;
    }
    else {
        
        ifs >> �û�����ע��;
        ifs.close();
        return �û�����ע��;
    }
    
    
}

void �û�ע���Ա���Ϣ(string �û�ע����Ϣ�Ա�) {
    string �û��Ա�ע�� = �û�ע����Ϣ�Ա�;
    ofstream  ofs;
    ofs.open("�û��Ա�.txt", ios::out | ios::trunc);
    ofs << �û��Ա�ע�� << endl;
    ofs.close();
}
string ��ȡ�û�ע���Ա���Ϣ() {
    string �û��Ա�ע��;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("�û��Ա�.txt", ios::in);
    if (!ifs.is_open()) {
      
        return �ļ�������;
    }
    else {
        
        ifs >> �û��Ա�ע��;
        ifs.close();
        return �û��Ա�ע��;
    }
   
}





void �洢ai����(string ai�������) {
    string ai�洢���� = ai�������;
    ofstream  ofs;
    ofs.open("ai����.txt", ios::out | ios::trunc);
    ofs << ai�洢���� << endl;
    ofs.close();
}
string  ��ȡai����() {
    string ai����;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("ai����.txt", ios::in);
    if (!ifs.is_open()) {
        
        
        return �ļ�������;
    }else{
        
        ifs >> ai����;
        ifs.close();
        return ai����;
    }
    
}

void �洢ai�Ա�(string aiѡ����Ա�) {
    string ai�洢�Ա� = aiѡ����Ա�;
    ofstream  ofs;
    ofs.open("ai�Ա�.txt", ios::out | ios::trunc);
    ofs << ai�洢�Ա� << endl;
    ofs.close();
}
string  ��ȡai�Ա�() {
    string ai�Ա�;
    string �ļ������� = "�ļ�������";
    ifstream  ifs;
    ifs.open("ai�Ա�.txt", ios::in);
    if (!ifs.is_open()) {
       

        return �ļ�������;
    }
    else {
       
        ifs >> ai�Ա�;
        ifs.close();
        return ai�Ա�;
    }
    
}
void ��ѧ���ֺ�ƴ������(string �̺���, string  �̺���ƴ��) {
    map<string, string>�̺��ֺ�ƴ������dict;
    �̺��ֺ�ƴ������dict[�̺���] = �̺���ƴ��;

    ofstream file("��ѧ���ֺ�ƴ������.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̺��ֺ�ƴ������dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��ѧ���ֺ�ƴ������ɹ�" << endl;
    }
    else {
        std::cerr << "��ѧ���ֺ�ƴ������ʧ��" << endl;
    }
}

int ��ȡ���ֺ�ƴ����������() {
    ifstream  ifs;
    int �ļ������� = 0;
    string ����;
    ifs.open("��ѧ���ֺ�ƴ������.txt", ios::in);
    if (!ifs.is_open()) {
       
        return �ļ�������;
    }
    else {
        
        int �������� = 0;
        while (getline(ifs, ����)) {
            ��������++;
        }

        ifs.close();
        return ��������;
    }
    
}

void �̴��ﺬ�屣��(string �̵Ĵ���, string �̴��ﺬ��) {
    map<string, string>�̴��ﺬ�屣��dict;
    �̴��ﺬ�屣��dict[�̵Ĵ���] = �̴��ﺬ��;

    ofstream file("�̴��ﺬ�屣��.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̴��ﺬ�屣��dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "�̴��ﺬ�屣��ɹ�" << endl;
    }
    else {
        std::cerr << "�̴��ﺬ�屣��ʧ��" << endl;
    }
}

int ��ȡ���ﺬ�屣������() {
    ifstream  ifs;
    int �ļ������� = 0;
    string ����;
    ifs.open("�̴��ﺬ�屣��.txt", ios::in);
    if (!ifs.is_open()) {
        
        return �ļ�������;
    }else{
        
        int �������� = 0;
        while (getline(ifs, ����)) {
            ��������++;
        }

        ifs.close();
        return ��������;
    }
    
}

void �̴�����Ա���(string �̵Ĵ���, string �̴������) {
    map<string, string>�̴�����Ա���dict;
    �̴�����Ա���dict[�̵Ĵ���] = �̴������;

    ofstream file("�̴�����Ա���.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̴�����Ա���dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "�̴�����Ա���ɹ�" << endl;
    }
    else {
        std::cerr << "�̴�����Ա���ʧ��" << endl;
    }
}


void ��ѧ���ӱ���(string �̾���, string �̾��Ӻ���) {
    map<string, string>�̾��ӱ���dict;
    �̾��ӱ���dict[�̾���] = �̾��Ӻ���;
    
    ofstream file("��ѧ���ӱ���.txt" ,ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̾��ӱ���dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��ѧ���ӱ���ɹ�" << endl;
    }
    else {
        std::cerr << "��ѧ���ӱ���ʧ��" << endl;
    }
}

int ��ȡ��ѧ���ӱ�������() {
    ifstream  ifs;
    int �ļ������� = 0;
    string ����;
    ifs.open("��ѧ���ӱ���.txt", ios::in);
    if (!ifs.is_open()) {
        
        return �ļ�������;
    }
    else {
        
        int �������� = 0;
        while (getline(ifs, ����)) {
            ��������++;
        }

        ifs.close();
        return ��������;

    }
    
}

void �̶Ի�����(string �̶Ի��Ͼ�, string �̶Ի��¾�) {
    map<string, string>�̶Ի�����dict;
    �̶Ի�����dict[�̶Ի��Ͼ�] = �̶Ի��¾�;

    ofstream file("�̶Ի�����.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̶Ի�����dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "�̶Ի�����ɹ�" << endl;
    }
    else {
        std::cerr << "�̶Ի�����ʧ��" << endl;
    }
}
int ��ȡ�Ի���������() {
    ifstream  ifs;
    int �ļ������� = 0;
    string ����;
    ifs.open("�̶Ի�����.txt", ios::in);
    if (!ifs.is_open()) {
        
        return �ļ�������;
    }
    else {
       
        int �������� = 0;
        while (getline(ifs, ����)) {
            ��������++;
        }

        ifs.close();
        return ��������;

    }
    
}


void �̹��»����±���(string �̹��»���������, string �̹��»���������) {
    map<string, string>�̹��»����±���dict;
    �̹��»����±���dict[�̹��»���������] = �̹��»���������;

    ofstream file("�̹��»����±���.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : �̹��»����±���dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "�̹��»����±���ɹ�" << endl;
    }
    else {
        std::cerr << "�̹��»����±���ʧ��" << endl;
    }
}

int ��ȡ�Ի����»����±�������() {
    ifstream  ifs;
    int �ļ������� = 0;
    string ����;
    ifs.open("�̹��»����±���.txt", ios::in);
    if (!ifs.is_open()) {
       
        return  �ļ�������;
    }
    else {
        
        int �������� = 0;
        while (getline(ifs, ����)) {
            ��������++;
        }

        ifs.close();
        return ��������;

    }
    
}

void ��д����������(string  ����, string  ����) {
    map<string, string>��д����������dict;
    ��д����������dict[����] = ����;

    ofstream file("��д����������.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : ��д����������dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��д����������ɹ�" << endl;
    }
    else {
        std::cerr << "��д����������ʧ��" << endl;
    }
}

void ��д����(string  ��������, string  ��������) {
    map<string, string>��д����dict;
    ��д����dict[��������] = ��������;

    ofstream file("��д����.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : ��д����dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��д���ܱ���ɹ�" << endl;
    }
    else {
        std::cerr << "��д���ܱ���ʧ��" << endl;
    }
}

void ��д�����˼��(string ���˼������, string ���˼������) {
    map<string, string>��д�����˼��dict;
    ��д�����˼��dict[���˼������] = ���˼������;

    ofstream file("��д�����˼��.txt", ios::app); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : ��д�����˼��dict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��д�����˼���ɹ�" << endl;
    }
    else {
        std::cerr << "��д�����˼���ʧ��" << endl;
    }
}


