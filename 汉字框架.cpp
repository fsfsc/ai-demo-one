#include "���ֿ��.h"

//�����ַ���
class zifu {
public:
    string ��ʾ�ַ�;
};

//�̳��ַ������зֿ����������� ��  ��������
class ���� :public zifu {
public:
    //���ֵĴ���  ��˼  �÷�  �����Ĵ���  ����������   �����ľ���  
    string ���ִ���;
    string ������˼;
    string ���ַ�����;
    string ���ֹ�����;
    string ���ֹ�����;
    string ���ֹ�����;
    string ���ֹ�������;
    int  ���ָ���;


    void ����set() {

    }

    void ����get() {

    }
    string ��������;

};
//�ִ�����Ĵ���  ����  ����   ���ݴ�   ����   ����   ���� ,����  ���  �ڴ�  ����  ��̬����
//��ʣ����ʡ���ʡ����ʡ����ʡ�̾�ʺ�������
class ���� :public ���� {
public:
    string ���Խ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};
class ʵ�� :public ���� {
public:
    string ʵ������;
    string ʵ�ʶ���;
    ʵ��() {
        ʵ������ = "ʵ��";

    };
   
};
class ��� :public ���� {
    ���() {
        ������� = "���";
    }
    string �������;
};
//����
class ���� :public ʵ�� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//����
class ���� :public ʵ�� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//���ݴ�
class ���ݴ� :public ʵ�� {
public:
    string ���ݴʽ���;

    ���ݴ�() {
        ���ݴ����� = "���ݴ�";
    };
    string ���ݴ�����;
};


//����
class ���� :public ʵ�� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//����
class ���� :public ʵ�� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};





//���ֵĴ���  ����ϸ��
class ���� :public ʵ�� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

class �˳ƴ��� :public ���� {
public:
    string �˳ƴ�������;
};

class ���ʴ��� :public ���� {
public:
    string ���ʴ�������;
};
class ָʾ���� :public ���� {
public:
    string ָʾ��������;
};
//�˳ƴ���ϸ��
class ��һ�˳ƴ��� :public �˳ƴ��� {
public:
    string ָʾ��������;
};

class �ڶ��˳ƴ��ʴ��� :public �˳ƴ��� {
public:
    string ָʾ��������;
};


class �����˳ƴ��ʴ��� :public �˳ƴ��� {
public:
    string ָʾ��������;
};


//��������ν�����
class �������� :public ���� {
public:

    string ������������;
};

class ����ν�� :public ���� {
public:

    string ����ν������;
};

class ���ֱ��� :public ���� {
public:


    string ���ֱ�������;
};

class ���� :public ���� {
public:
    int  �����ָ���;
    string ����;
};

class �������� :public ���� {
public:
    string ������������;
};

class ����ν�� :public ���� {
public:
    string ����ν������;
};

class ������� :public ���� {
public:

    string �����������;
};

//������
class ������� :public ���� {
public:

    string �����������;
};

class �������� :public ������� {
public:

    string ���������������;
};

class ������� :public ������� {
public:

    string ��������������;
};

class ����ν�� :public ������� {
public:

    string ����ν���������;
};

class ������ :public zifu {
public:
    string ����;

};


//���Ӱ��սṹ���  
class ���� {
public:
    string ����;
    string ν��;
    string ����;
    string ����;
    string ����;
    //���վ��ӽṹ�������
    /*void func() {
     string ����;
     ���� = �������� () || ��������() || ��������();
     cout << ���� << ν�� << ���� << endl;

    };*/
};

//����;�����������ӿ��Է�Ϊ�����䡢���ʾ䡢��ʹ�䡢��̾�䡣���ݽṹ�ɷ�Ϊ����͸���
class �������� :public ���� {
public:

};

class ���ʾ��� :public ���� {
public:

};

class ��ʹ���� :public ���� {
public:

};

class ��̾���� :public ���� {
public:

};




/*

void test01() {
 zifu ����;
 ���� a;
 ���� b;
 ���� d;
 ���� e;
 ���� f;
 ���ݴ� g;
 ���� h;
 ���� i;
 ���� j;
 //�������� c;
 //����ν�� k;
 //���ֱ��� l;
 ////c.���� = e.�������� ||f.��������||g.���ݴ�����;
 ////cout << c.����;
 //c.������������ = "��";
 //k.����ν������ = "��";
 //l.���ֱ������� = "��";
};
*/

/*

void ��ν������(string x,string y,string z) {
 �������� aaa;
 aaa.���� = x;
 aaa.ν�� = y;
 aaa.���� = z;
 cout<< aaa.���� << aaa.ν�� << aaa.����;

};
*/


