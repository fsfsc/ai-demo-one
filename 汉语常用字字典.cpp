#include "���ﳣ�����ֵ�.h"

//�������к�����4�����ң������ȴ��ִ����ﳣ����(2500��)��ʼ
//�����ֵıʻ�����
void һ�����ú���() {
	multimap<string, string>yihuacyhanzidict;
	yihuacyhanzidict.insert({ "һ��","һ" });
	yihuacyhanzidict.insert({ "һ��","��" });

	ofstream file("һ�����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : yihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "һ�����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "һ�����ú��ֳ�ʼ��ʧ��" << endl;
	}

}

//����
void �������ú���() {
	multimap<string, string>erhuacyhanzidict;
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","ʮ" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });


	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });

	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });

	erhuacyhanzidict.insert({ "����","��" });
	erhuacyhanzidict.insert({ "����","��" });


	ofstream file("�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : erhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�������ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//����
void �������ú���() {
	multimap<string, string>sanhuacyhanzidict;
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","ʿ" });


	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","С" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","ɽ" });
	sanhuacyhanzidict.insert({ "����","ǧ" });

	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","Ϧ" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","ô" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","֮" });
	sanhuacyhanzidict.insert({ "����","ʬ" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","Ҳ" });
	sanhuacyhanzidict.insert({ "����","Ů" });
	sanhuacyhanzidict.insert({ "����","��" });

	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","ϰ" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });
	sanhuacyhanzidict.insert({ "����","��" });

	ofstream file("�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : sanhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�������ú��ֳ�ʼ��ʧ��" << endl;
	}

}

//�Ļ�
void �Ļ����ú���() {
	multimap<string, string>sihuacyhanzidict;
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","Ԫ" });
	sihuacyhanzidict.insert({ "�Ļ�","ר" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ľ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","֧" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","̫" });
	sihuacyhanzidict.insert({ "�Ļ�","Ȯ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ƥ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ֹ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ˮ" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ţ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ë" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","ʲ" });

	sihuacyhanzidict.insert({ "�Ļ�","Ƭ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","צ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","Ƿ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });


	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","Ϊ" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });

	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });


	sihuacyhanzidict.insert({ "�Ļ�","Ȱ" });
	sihuacyhanzidict.insert({ "�Ļ�","˫" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });
	sihuacyhanzidict.insert({ "�Ļ�","��" });


	ofstream file("�Ļ����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : sihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�Ļ����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�Ļ����ú��ֳ�ʼ��ʧ��" << endl;
	}


}


//�廭
void �廭���ú���() {
	multimap<string, string>wuhuacyhanzidict;
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ʾ" });
	wuhuacyhanzidict.insert({ "�廭","ĩ" });
	wuhuacyhanzidict.insert({ "�廭","δ" });


	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ȥ" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","ʯ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ƽ" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ռ" });

	wuhuacyhanzidict.insert({ "�廭","ҵ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","˧" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","Ŀ" });
	wuhuacyhanzidict.insert({ "�廭","Ҷ" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ʷ" });
	wuhuacyhanzidict.insert({ "�廭","ֻ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","߶" });
	wuhuacyhanzidict.insert({ "�廭","̾" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ʧ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","˦" });
	wuhuacyhanzidict.insert({ "�廭","ӡ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","֭" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ͷ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","Ѩ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","д" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ѵ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","Ѷ" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","˾" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ū" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });

	wuhuacyhanzidict.insert({ "�廭","Ƥ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ʥ" });

	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","̨" });
	wuhuacyhanzidict.insert({ "�廭","ì" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","ĸ" });
	wuhuacyhanzidict.insert({ "�廭","��" });
	wuhuacyhanzidict.insert({ "�廭","˿" });


	ofstream file("�廭���ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : wuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�廭���ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�廭���ú��ֳ�ʼ��ʧ��" << endl;
	}

}


//����
void �������ú���() {
	multimap<string, string>liuhuacyhanzidict;
	liuhuacyhanzidict.insert({ "����","ʽ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","ִ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ɨ" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","â" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","֥" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Э" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ѹ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ҳ" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","а" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ʦ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ͬ" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ǩ" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ΰ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ƹ" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","α" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ѫ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ȫ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ɱ" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ү" });
	liuhuacyhanzidict.insert({ "����","ɡ" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Σ" });

	liuhuacyhanzidict.insert({ "����","Ѯ" });
	liuhuacyhanzidict.insert({ "����","ּ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ɫ" });
	liuhuacyhanzidict.insert({ "����","׳" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","ׯ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" }); liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","æ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","ũ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ѱ" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ѹ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ϸ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });

	liuhuacyhanzidict.insert({ "����","Լ" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","��" });
	liuhuacyhanzidict.insert({ "����","Ѳ" });


	ofstream file("�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : liuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�������ú��ֳ�ʼ��ʧ��" << endl;
	}

}

//�߻�

void �߻����ú���() {
	multimap<string, string>qihuacyhanzidict;
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Ū" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Զ" });
	qihuacyhanzidict.insert({ "�߻�","Υ" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","̳" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });


	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","ַ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ץ" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Т" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Ͷ" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","־" });
	qihuacyhanzidict.insert({ "�߻�","Ť" });
	qihuacyhanzidict.insert({ "�߻�","��" });


	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ȴ" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","ѿ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","«" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ҽ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ʱ" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","԰" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Χ" });
	qihuacyhanzidict.insert({ "�߻�","ѽ" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Ա" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ͺ" });
	qihuacyhanzidict.insert({ "�߻�","��" });


	qihuacyhanzidict.insert({ "�߻�","˽" });
	qihuacyhanzidict.insert({ "�߻�","ÿ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Ӷ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ס" });

	qihuacyhanzidict.insert({ "�߻�","λ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","ϣ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","ɾ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ӭ" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ϵ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","״" });
	qihuacyhanzidict.insert({ "�߻�","Ķ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","Ӧ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ұ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ɳ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","û" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","֤" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","ʶ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","β" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","½" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","Ŭ" });
	qihuacyhanzidict.insert({ "�߻�","��" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ɴ" });

	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","ֽ" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","��" });
	qihuacyhanzidict.insert({ "�߻�","¿" });
	qihuacyhanzidict.insert({ "�߻�","Ŧ" });

	ofstream file("�߻����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : qihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�߻����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�߻����ú��ֳ�ʼ��ʧ��" << endl;
	}


}

//�˻�
void �˻����ú���() {
	multimap<string, string>bahuacyhanzidict;
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","Ĩ" });
	bahuacyhanzidict.insert({ "�˻�","£" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","̹" });
	bahuacyhanzidict.insert({ "�˻�","Ѻ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ӵ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","̧" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ȡ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ï" });
	bahuacyhanzidict.insert({ "�˻�","ƻ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","Ӣ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ֱ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","é" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","֦" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ǹ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ɥ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","̬" });
	bahuacyhanzidict.insert({ "�˻�","ŷ" });
	bahuacyhanzidict.insert({ "�˻�","¢" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ת" });
	bahuacyhanzidict.insert({ "�˻�","ն" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","Щ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","²" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ζ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ӽ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ͼ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","֪" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ί" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ʹ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ֶ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ƾ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","̰" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ƶ" });
	bahuacyhanzidict.insert({ "�˻�","��" });

	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","֫" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","в" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ҹ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ä" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","բ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","֣" });
	bahuacyhanzidict.insert({ "�˻�","ȯ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","¯" });
	bahuacyhanzidict.insert({ "�˻�","ĭ" });
	bahuacyhanzidict.insert({ "�˻�","ǳ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","й" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","մ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ע" });
	bahuacyhanzidict.insert({ "�˻�","к" });
	bahuacyhanzidict.insert({ "�˻�","Ӿ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ѧ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ʵ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ʫ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ѯ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","¼" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ˢ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ʼ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","ϸ" });
	bahuacyhanzidict.insert({ "�˻�","ʻ" });
	bahuacyhanzidict.insert({ "�˻�","֯" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","פ" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });
	bahuacyhanzidict.insert({ "�˻�","��" });


	ofstream file("�˻����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : bahuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�˻����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�˻����ú��ֳ�ʼ��ʧ��" << endl;
	}


}

//�Ż�

void �Ż����ú���() {
	multimap<string, string>jiuhuacyhanzidict;
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ͦ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","˩" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʰ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ָ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ƴ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ų" });
	jiuhuacyhanzidict.insert({ "�Ż�","ĳ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ã" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ҩ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ҫ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ש" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ˣ" });
	jiuhuacyhanzidict.insert({ "�Ż�","ǣ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ѻ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ս" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʡ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","գ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ð" });
	jiuhuacyhanzidict.insert({ "�Ż�","ӳ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","η" });
	jiuhuacyhanzidict.insert({ "�Ż�","ſ" });
	jiuhuacyhanzidict.insert({ "�Ż�","θ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ϻ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","˼" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ʒ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ҧ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","̿" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ͽ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Կ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ж" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ѡ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","˳" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });


	jiuhuacyhanzidict.insert({ "�Ż�","Ȫ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","׷" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʳ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʤ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʨ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ó" });
	jiuhuacyhanzidict.insert({ "�Ż�","Թ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʴ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ͤ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ͥ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ʩ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ǰ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ը" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ϴ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ǣ" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ⱦ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ũ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ǡ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ͻ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ף" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","˵" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ü" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","Ժ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ŭ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ӯ" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","��" });
	jiuhuacyhanzidict.insert({ "�Ż�","ͳ" });

	ofstream file("�Ż����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : jiuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�Ż����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�Ż����ú��ֳ�ʼ��ʧ��" << endl;
	}


}


//ʮ��
void ʮ�����ú���() {
	multimap<string, string>shihuacyhanzidict;
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","̩" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","յ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","׽" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ī" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ͩ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","У" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ԭ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ɹ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ѽ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Բ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ǯ" });
	shihuacyhanzidict.insert({ "ʮ��","ǯ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ǧ" });
	shihuacyhanzidict.insert({ "ʮ��","ȱ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","͸" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ц" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ծ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ֵ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ϣ" });
	shihuacyhanzidict.insert({ "ʮ��","ͽ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��",";" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","֬" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","˥" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ϯ" });
	shihuacyhanzidict.insert({ "ʮ��","׼" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","֢" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });

	shihuacyhanzidict.insert({ "ʮ��","ƣ" });
	shihuacyhanzidict.insert({ "ʮ��","Ч" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","վ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ƿ" });
	shihuacyhanzidict.insert({ "ʮ��","ȭ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ϳ" });
	shihuacyhanzidict.insert({ "ʮ��","ԡ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ӿ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","խ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","˭" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ԩ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","̸" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","չ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","м" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","ͨ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","Ԥ" });
	shihuacyhanzidict.insert({ "ʮ��","ɣ" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });
	shihuacyhanzidict.insert({ "ʮ��","��" });


	ofstream file("ʮ�����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�����ú��ֳ�ʼ��ʧ��" << endl;
	}


}

//ʮһ��
void ʮһ�����ú���() {
	multimap<string, string>shiyihuacyhanzidict;
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","̽" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ְ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ƽ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ӫ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","е" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","÷" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ͱ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ʊ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ˬ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ϯ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ʢ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ѩ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ȸ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ұ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ծ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ψ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ո" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ȧ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ͭ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ż" });
	shiyihuacyhanzidict.insert({ "ʮһ��","͵" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ͣ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ƫ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","б" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ϥ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","è" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ӹ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","¹" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ճ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Һ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ϧ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });

	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","Ҥ" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ı" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","¡" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","ά" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });
	shiyihuacyhanzidict.insert({ "ʮһ��","��" });


	ofstream file("ʮһ�����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiyihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮһ�����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮһ�����ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//ʮ����

void ʮ�������ú���() {
	multimap<string, string>shierhuacyhanzidict;
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","Խ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ϲ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","Ԯ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","§" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","˹" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ɢ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ֲ" });
	shierhuacyhanzidict.insert({ "ʮ����","ɭ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","Ӳ" });
	shierhuacyhanzidict.insert({ "ʮ����","ȷ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ֳ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ι" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ñ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","̺" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ʣ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ϡ" });
	shierhuacyhanzidict.insert({ "ʮ����","˰" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ɸ" });
	shierhuacyhanzidict.insert({ "ʮ����","Ͳ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ѭ" });
	shierhuacyhanzidict.insert({ "ʮ����","ͧ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","Ƣ" });
	shierhuacyhanzidict.insert({ "ʮ����","ǻ" });
	shierhuacyhanzidict.insert({ "ʮ����","³" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","Ȼ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","װ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ʹ" });
	shierhuacyhanzidict.insert({ "ʮ����","ͯ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });


	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ʪ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ԣ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ȹ" });
	shierhuacyhanzidict.insert({ "ʮ����","л" });
	shierhuacyhanzidict.insert({ "ʮ����","ҥ" });
	shierhuacyhanzidict.insert({ "ʮ����","ǫ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ǿ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","϶" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ɩ" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","��" });
	shierhuacyhanzidict.insert({ "ʮ����","ƭ" });
	shierhuacyhanzidict.insert({ "ʮ����","Ե" });

	ofstream file("ʮ�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shierhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�������ú��ֳ�ʼ��ʧ��" << endl;
	}


}

//ʮ����
void ʮ�������ú���() {
	multimap<string, string>shisanhuacyhanzidict;
	shisanhuacyhanzidict.insert({ "ʮ����","��" });

	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Я" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ҡ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","̯" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ȵ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Ĺ" });
	shisanhuacyhanzidict.insert({ "ʮ����","Ļ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","¥" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","µ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","˯" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ů" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Ъ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","·" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ǲ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ɤ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ǩ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ɵ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","΢" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ң" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","̵" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","ú" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Į" });
	shisanhuacyhanzidict.insert({ "ʮ����","Դ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Ϫ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","̲" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","Ⱥ" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });
	shisanhuacyhanzidict.insert({ "ʮ����","��" });


	ofstream file("ʮ�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shisanhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�������ú��ֳ�ʼ��ʧ��" << endl;
	}

}

//ʮ�Ļ�
void ʮ�Ļ����ú���() {
	multimap<string, string>shisihuacyhanzidict;
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ǽ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ʋ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ժ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ˤ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ľ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ĺ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ģ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ե" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ը" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ӭ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","֩" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","׬" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","ò" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ĥ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ǹ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ϩ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","Ư" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","©" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","կ" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });
	shisihuacyhanzidict.insert({ "ʮ�Ļ�","��" });



	ofstream file("ʮ�Ļ����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shisihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�Ļ����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�Ļ����ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�廭
void ʮ�廭���ú���() {
	multimap<string, string>shiwuhuacyhanzidict;

	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","˺" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ȥ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ײ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ь" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ӣ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ʈ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ù" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ϲ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ӱ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","̤" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ī" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ƪ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ƨ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ϥ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ħ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","Ǳ" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","ο" });
	shiwuhuacyhanzidict.insert({ "ʮ�廭","��" });



	ofstream file("ʮ�廭���ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiwuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�廭���ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�廭���ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ����
void ʮ�������ú���() {
	multimap<string, string>shiliuhuacyhanzidict;

	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","н" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","Ĭ" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","ĥ" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","ȼ" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });
	shiliuhuacyhanzidict.insert({ "ʮ����","��" });

	ofstream file("ʮ�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiliuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�������ú��ֳ�ʼ��ʧ��" << endl;
	}
}

// ʮ�߻�
void ʮ�߻����ú���() {
	multimap<string, string>shiqihuacyhanzidict;
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","˪" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","ϼ" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","Ӯ" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });
	shiqihuacyhanzidict.insert({ "ʮ�߻�","��" });

	ofstream file("ʮ�߻����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiqihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�߻����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�߻����ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�˻�
void ʮ�˻����ú���() {
	multimap<string, string>shibahuacyhanzidict;
	shibahuacyhanzidict.insert({ "ʮ�˻�","��" });
	shibahuacyhanzidict.insert({ "ʮ�˻�","��" });
	shibahuacyhanzidict.insert({ "ʮ�˻�","��" });
	shibahuacyhanzidict.insert({ "ʮ�˻�","��" });
	shibahuacyhanzidict.insert({ "ʮ�˻�","��" });
	shibahuacyhanzidict.insert({ "ʮ�˻�","ӥ" });

	ofstream file("ʮ�˻����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shibahuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�˻����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�˻����ú��ֳ�ʼ��ʧ��" << endl;
	}
}


///ʮ�Ż�
void ʮ�Ż����ú���() {
	multimap<string, string>shijiuhuacyhanzidict;
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });
	shijiuhuacyhanzidict.insert({ "ʮ�Ż�","��" });


	ofstream file("ʮ�Ż����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shijiuhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�Ż����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�Ż����ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//��ʮ��
void ��ʮ�����ú���() {
	multimap<string, string>ershihuacyhanzidict;
	ershihuacyhanzidict.insert({ "��ʮ��","��" });
	ershihuacyhanzidict.insert({ "��ʮ��","ҫ" });
	ershihuacyhanzidict.insert({ "��ʮ��","��" });
	ershihuacyhanzidict.insert({ "��ʮ��","��" });
	ershihuacyhanzidict.insert({ "��ʮ��","��" });
	ershihuacyhanzidict.insert({ "��ʮ��","��" });
	ershihuacyhanzidict.insert({ "��ʮ��","ħ" });
	ershihuacyhanzidict.insert({ "��ʮ��","��" });

	ofstream file("��ʮ�����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ�����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ�����ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//��ʮһ��

void ��ʮһ�����ú���() {
	multimap<string, string>ershiyihuacyhanzidict;
	ershiyihuacyhanzidict.insert({ "��ʮһ��","��" });
	ershiyihuacyhanzidict.insert({ "��ʮһ��","��" });
	ershiyihuacyhanzidict.insert({ "��ʮһ��","¶" });

	ofstream file("��ʮһ�����ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershiyihuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮһ�����ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮһ�����ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//��ʮ����
void ��ʮ�������ú���() {
	multimap<string, string>ershierhuacyhanzidict;
	ershierhuacyhanzidict.insert({ "��ʮ����","��" });


	ofstream file("��ʮ�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershierhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ�������ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//��ʮ����
void ��ʮ�������ú���() {
	multimap<string, string>ershisanhuacyhanzidict;
	ershisanhuacyhanzidict.insert({ "��ʮ����","��" });

	ofstream file("��ʮ�������ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershisanhuacyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ�������ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ�������ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�ִ�����γ�����(1000��)

//������

void �����γ��ú���() {
	multimap<string, string>erhuacicyhanzidict;
	erhuacicyhanzidict.insert({ "������","ذ" });
	erhuacicyhanzidict.insert({ "������","��" });

	ofstream file("�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : erhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�Ļ���

void �Ļ��γ��ú���() {
	multimap<string, string>sihuacicyhanzidict;
	sihuacicyhanzidict.insert({ "�Ļ���","ؤ" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });
	sihuacicyhanzidict.insert({ "�Ļ���","ز" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });
	sihuacicyhanzidict.insert({ "�Ļ���","��" });

	ofstream file("�Ļ��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : sihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�Ļ��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�Ļ��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�廭��

void �廭�γ��ú���() {
	multimap<string, string>wuhuacicyhanzidict;
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","͹" });
	wuhuacicyhanzidict.insert({ "�廭��","¬" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","ߴ" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","ʸ" });
	wuhuacicyhanzidict.insert({ "�廭��","է" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });
	wuhuacicyhanzidict.insert({ "�廭��","��" });


	ofstream file("�廭�γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : wuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�廭�γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�廭�γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//������

void �����γ��ú���() {
	multimap<string, string>liuhuacicyhanzidict;
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","ߺ" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","͢" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","ױ" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","Ѵ" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","��" });
	liuhuacicyhanzidict.insert({ "������","ѱ" });
	liuhuacicyhanzidict.insert({ "������","��" });


	ofstream file("�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : liuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�߻���

void �߻��γ��ú���() {
	multimap<string, string>qihuacicyhanzidict;

	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","ܽ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","έ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","о" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","ɼ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","�" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","ϻ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","±" });
	qihuacicyhanzidict.insert({ "�߻���","Ф" });
	qihuacicyhanzidict.insert({ "�߻���","֨" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","Ż" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","Ǻ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","˱" });
	qihuacicyhanzidict.insert({ "�߻���","�" });
	qihuacicyhanzidict.insert({ "�߻���","ĵ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","�" });
	qihuacicyhanzidict.insert({ "�߻���","ͮ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","®" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","̭" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","թ" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","ƨ" });
	qihuacicyhanzidict.insert({ "�߻���","׹" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","�" });
	qihuacicyhanzidict.insert({ "�߻���","��" });
	qihuacicyhanzidict.insert({ "�߻���","γ" });

	ofstream file("�߻��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : qihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�߻��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�߻��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�˻���

void �˻��γ��ú���() {
	multimap<string, string>bahuacicyhanzidict;
	bahuacicyhanzidict.insert({ "�˻���","õ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ƺ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","š" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","׾" });
	bahuacicyhanzidict.insert({ "�˻���","Ĵ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ɻ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","̦" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ö" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","Ź" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","׿" });
	bahuacicyhanzidict.insert({ "�˻���","�" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ɲ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ű" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","å" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","Ţ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ª" });
	bahuacicyhanzidict.insert({ "�˻���","İ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","ķ" });
	bahuacicyhanzidict.insert({ "�˻���","ʭ" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });
	bahuacicyhanzidict.insert({ "�˻���","��" });


	ofstream file("�˻��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : bahuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�˻��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�˻��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//�Ż���

void �Ż��γ��ú���() {
	multimap<string, string>jiuhuacicyhanzidict;
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ɺ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","Ю" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ӫ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ջ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","դ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ɰ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","Ÿ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","Ű" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ѫ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","Ӵ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ť" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ձ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","̥" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","�" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","¦" });
	jiuhuacicyhanzidict.insert({ "�Ż���","˸" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ʺ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","ѷ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","Ҧ" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });
	jiuhuacicyhanzidict.insert({ "�Ż���","��" });

	ofstream file("�Ż��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : jiuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "�Ż��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "�Ż��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}



//ʮ����

void ʮ���γ��ú���() {
	multimap<string, string>shihuacicyhanzidict;
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });

	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","Ԭ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ֿ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ͱ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ݩ" });
	shihuacicyhanzidict.insert({ "ʮ����","ç" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","Ө" });
	shihuacicyhanzidict.insert({ "ʮ����","ݺ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","˨" });
	shihuacicyhanzidict.insert({ "ʮ����","Φ" });
	shihuacicyhanzidict.insert({ "ʮ����","׮" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ѳ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","�" });
	shihuacicyhanzidict.insert({ "ʮ����","�" });
	shihuacicyhanzidict.insert({ "ʮ����","�" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","¸" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","í" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","Ҩ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ŧ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ԧ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ի" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ɬ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ŵ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","̻" });
	shihuacicyhanzidict.insert({ "ʮ����","׻" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","ˡ" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });
	shihuacicyhanzidict.insert({ "ʮ����","��" });


	ofstream file("ʮ���γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ���γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ���γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}



//ʮһ����

void ʮһ���γ��ú���() {
	multimap<string, string>shiyihuacicyhanzidict;

	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ҵ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ȣ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ή" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ө" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ǭ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","˶" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","­" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ֺ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ơ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ɶ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Х" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ӥ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ա" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ϳ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ȭ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","Ԩ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","�" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","г" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ν" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","ξ" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","׺" });
	shiyihuacicyhanzidict.insert({ "ʮһ����","��" });

	ofstream file("ʮһ���γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiyihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮһ���γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮһ���γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//ʮ������

void ʮ�����γ��ú���() {
	multimap<string, string>shierhuacicyhanzidict;
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });

	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ҿ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ҽ" });
	shierhuacicyhanzidict.insert({ "ʮ������","ɦ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","ļ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ҭ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","׵" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ƕ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","�" });
	shierhuacicyhanzidict.insert({ "ʮ������","п" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","�" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ҹ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","�" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","�" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ԣ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","Ϭ" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","ý" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","��" });
	shierhuacicyhanzidict.insert({ "ʮ������","ɧ" });

	ofstream file("ʮ�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shierhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//ʮ������

void ʮ�����γ��ú���() {
	multimap<string, string>shisanhuacicyhanzidict;
	shisanhuacicyhanzidict.insert({ "ʮ������","ɪ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });

	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Ƹ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","ѥ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Ш" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","�" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","�" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Ƶ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Ͼ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Ӽ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","ê" });
	shisanhuacicyhanzidict.insert({ "ʮ������","׶" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","Գ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","ӱ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","ɷ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","į" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","ϱ" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });
	shisanhuacicyhanzidict.insert({ "ʮ������","��" });


	ofstream file("ʮ�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shisanhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�Ļ���

void ʮ�Ļ��γ��ú���() {
	multimap<string, string>shisihuacicyhanzidict;

	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","׸" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ġ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ε" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","�" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","̼" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ԯ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","Ͻ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ӻ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","�" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","Ѭ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ɮ" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","̷" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","��" });
	shisihuacicyhanzidict.insert({ "ʮ�Ļ���","ӧ" });

	ofstream file("ʮ�Ļ��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shisihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�Ļ��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�Ļ��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�廭��

void ʮ�廭�γ��ú���() {
	multimap<string, string>shiwuhuacicyhanzidict;
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });

	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","׫" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","˻" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","Ы" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","¨" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","̱" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","̶" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","�" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","Ǵ" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","ԥ" });
	shiwuhuacicyhanzidict.insert({ "ʮ�廭��","��" });

	ofstream file("ʮ�廭�γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiwuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�廭�γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�廭�γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ������

void ʮ�����γ��ú���() {
	multimap<string, string>shiliuhuacicyhanzidict;

	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","Ѧ" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","ޱ" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","ج" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","ư" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","�" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","�" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","�" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","ǭ" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","�" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","ȳ" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","и" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });
	shiliuhuacicyhanzidict.insert({ "ʮ������","��" });

	ofstream file("ʮ�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiliuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�߻���

void ʮ�߻��γ��ú���() {
	multimap<string, string>shiqihuacicyhanzidict;
	shiqihuacicyhanzidict.insert({ "ʮ�߻���","��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���","��" });

	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "̴" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "�t" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "˲" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "ͫ" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "̣" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "�" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "�" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "κ" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "ų" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });
	shiqihuacicyhanzidict.insert({ "ʮ�߻���", "��" });


	ofstream file("ʮ�߻��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shiqihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�߻��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�߻��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}


//ʮ�˻���

void ʮ�˻��γ��ú���() {
	multimap<string, string>shibahuacicyhanzidict;
	shibahuacicyhanzidict.insert({ "ʮ�˻���","ź" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","հ" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","�" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","�" });
	shibahuacicyhanzidict.insert({ "ʮ�˻���","��" });

	ofstream file("ʮ�˻��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shibahuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�˻��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�˻��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//ʮ�Ż���

void ʮ�Ż��γ��ú���() {
	multimap<string, string>shijiuhuacicyhanzidict;
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","Ģ" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","з" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","Ѣ" });
	shijiuhuacicyhanzidict.insert({ "ʮ�Ż���","��" });

	ofstream file("ʮ�Ż��γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : shijiuhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "ʮ�Ż��γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "ʮ�Ż��γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//��ʮ����

void ��ʮ���γ��ú���() {
	multimap<string, string>ershihuacicyhanzidict;
	ershihuacicyhanzidict.insert({ "��ʮ����","��" });
	ershihuacicyhanzidict.insert({ "��ʮ����","��" });
	ershihuacicyhanzidict.insert({ "��ʮ����","��" });
	ershihuacicyhanzidict.insert({ "��ʮ����","Ρ" });
	ershihuacicyhanzidict.insert({ "��ʮ����","��" });
	ershihuacicyhanzidict.insert({ "��ʮ����","Ŵ" });
	ershihuacicyhanzidict.insert({ "��ʮ����","Ʃ" });

	ofstream file("��ʮ���γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ���γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ���γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//��ʮһ����

void ��ʮһ���γ��ú���() {
	multimap<string, string>ershiyihuacicyhanzidict;
	ershiyihuacicyhanzidict.insert({ "��ʮһ����","��" });
	ershiyihuacicyhanzidict.insert({ "��ʮһ����","��" });
	ershiyihuacicyhanzidict.insert({ "��ʮһ����","��" });
	ofstream file("��ʮһ���γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershiyihuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮһ���γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮһ���γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//��ʮ������

void ��ʮ�����γ��ú���() {
	multimap<string, string>ershierhuacicyhanzidict;
	ershierhuacicyhanzidict.insert({ "��ʮ������","պ" });
	ershierhuacicyhanzidict.insert({ "��ʮ������","��" });
	ershierhuacicyhanzidict.insert({ "��ʮ������","ȿ" });

	ofstream file("��ʮ�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershierhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}

//��ʮ������

void ��ʮ�����γ��ú���() {
	multimap<string, string>ershisanhuacicyhanzidict;
	ershisanhuacicyhanzidict.insert({ "��ʮ������","��" });


	ofstream file("��ʮ�����γ��ú���.txt"); // ��һ���ļ�����д�����
	if (file.is_open()) { // ����ļ��ɹ���
		for (const auto& pair : ershisanhuacicyhanzidict) { // �����ֵ��е�����Ԫ��
			file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
		}
		file.close(); // �ر��ļ�
		cout << "��ʮ�����γ��ú��ֳ�ʼ���ɹ�" << endl;
	}
	else {
		std::cerr << "��ʮ�����γ��ú��ֳ�ʼ��ʧ��" << endl;
	}
}
