#include "�ʵ�.h"

void ��ʷ���() {
    multimap<string, string>zucifenleidict;

    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });

    zucifenleidict.insert({ "��" ,"��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });

    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","��" });
    zucifenleidict.insert({ "��","��" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "˶��","��" });
    zucifenleidict.insert({ "˶��","˶" });
    zucifenleidict.insert({ "˶","˶��" });
    zucifenleidict.insert({ "��","˶��" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "Ұ��","��" });
    zucifenleidict.insert({ "Ұ��","Ұ" });
    zucifenleidict.insert({ "Ұ","Ұ��" });
    zucifenleidict.insert({ "��","Ұ��" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });

    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "����","��" });
    zucifenleidict.insert({ "��","����" });
    zucifenleidict.insert({ "��","����" });
    
    zucifenleidict.insert({ "��","������" });

    ofstream file("���.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : zucifenleidict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "��ʳ�ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "��ʳ�ʼ��ʧ��" << endl;
    }
    
}