#pragma once
#include <iostream>

using namespace std;

#include <string>
/*
//�����ַ���
class zifu {
public:
    string ��ʾ�ַ�;
};

//�̳��ַ������зֿ����������� ��  ��������
class ���� :public zifu {
public:
    //���ֵĴ���  ��˼  �÷�  �����Ĵ���  ����������   �����ľ���  
    string ����;
    string ��˼;
    string ������;
    string ������;
    string ������;
    string ������;
    string ��������;
    //int  ���ָ���;


    //void ����set() {

    }

    //void ����get() {

    }
    string ��������;

};
//�ִ�����Ĵ���  ����  ����   ���ݴ�   ����   ����   ���� ,����  ���  �ڴ�  ����  ��̬����
class ���� :public ���� {
public:
    string ���Խ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//����
class ���� :public ���� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//����
class ���� :public ���� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//���ݴ�
class ���ݴ� :public ���� {
public:
    string ���ݴʽ���;

    ���ݴ�() {
        ���ݴ����� = "���ݴ�";
    };
    string ���ݴ�����;
};


//����
class ���� :public ���� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};

//����
class ���� :public ���� {
public:
    string ���ʽ���;

    ����() {
        �������� = "����";
    };
    string ��������;
};





//���ֵĴ���  ����ϸ��
class ���� :public ���� {
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
    void func() {
     string ����;
     ���� = �������� () || ��������() || ��������();
     cout << ���� << ν�� << ���� << endl;

                   }
}

����;�����������ӿ��Է�Ϊ�����䡢���ʾ䡢��ʹ�䡢��̾�䡣���ݽṹ�ɷ�Ϊ����͸���
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


//�����˵���
class airobotsdemo {
public:
    string ����;
    int ���;
    string ��;
    string ��;
    string ��;
    string ˯��;
    string ��;
    string ��;
    string ˵;
    string �Ը�;
protected:
    string ����;

    class ���� {
    protected:
        class ���� {
        protected:
            class ϸ��
            {
            public:
                string ��;
                string ����;
                string ���� = "5��";
                string ����;
                string �Ŵ�;
            protected:
                int c_DNA = 2;
                int c_RNA = -1;
                int c_ø = -1;
                string ����ָ�� = 0;
                int ø(string ά����a, string ����) {
                    int m = 0;
                    m -= 1;
                    return m;

                };
                /*����ĵ����ʷ������� ����ϸ�����������еĹ�����ʱʡ�Ե���ֻ�����еĽ��
                �ͼ������0,1˼����һ����*/
/*
                void ϸ���������(int ø, int RNA, int DNA)
                {


                    //�����0��1�����
                    if (c_ø == ø) {
                        //ø������ø, ���Բ���ø����DNA����

                        if (DNA + RNA + ø == 0) {
                            //��DNA RNA  ø �ϼƵ���0ʱ�������������
                            cout << "ϸ����������,���Լ���ִ������" << endl;
                        };
                    }
                    else {
                        ����ָ�� += 1;
                        cout << "ϸ������ָ������" << endl;
                    }

                };
            };
        };
    };
private:
    string ����;
    string ����;
    int ����;
    int ����;
};
//�����ƻ�
//ϸ���ĳ���֮ǰ���������Ǽ��α�������������ʱ��������Ϊ100W��ϸ�������γ�һ��������֯
//(30��)�����ϸ����������������ݼ��������ٶȽ��ͣ���100��֮ǰ���𽥰���������ϸ��ȫ���滻���ϻ�ϸ��
//Ҳ��������˥�ߵ�״̬

//����
class ���� {
public:
    string ����;

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

class ʵ��;
