#include "�����˵�.h"

int test01(string xn, string mn, string nn, int i = 1);
void ��¼paperid(int i);
int ��ȡpaperid();
void test03(int i);

// ����ʵ�ֲ���
void �˵�����(string a1, string a2, string a3, string a4, int a5) {
    string a11 = a1;
    string    messages = a2;
    string yn = a3;  //����
    string ym = "�ֵĴ���";
    string  yx = a4;  //�ֵ���˼
    int  paperid = a5;

    if (a11 == messages) {
        cout << "AI:��֪������֣����������˴����˼��ʲô";

    }
    else
    {
        cout << "AI:�һ�û��ѧϰ�������ݣ�����Խ�����" << endl;
        cout << "1Ϊ����" << endl;
        cout << "2Ϊ������" << endl;
        int i = 0;

        cin >> i;

        if (i == 1)
        {

            cout << "�����뵥������" << endl;
            cin >> yn;
            cout << "������1,Ϊ��" << yn << " ѡ���ֵĴ���" << endl;

            int tt = 0;
            int t = 0;
            cin >> tt;
            if (tt != 1) {
                cout << "������1,Ϊ��" << yn << " ѡ���ֵĴ���" << endl;
                exit(1);
            }
            else {
                t = tt;
            }


            while (true)
            {




                if (t == 1) {
                    cout << "ѡ��" << endl;
                    cout << "A " << "���� " << endl;
                    cout << "B " << "���� " << endl;
                    cout << "C " << "���ݴ� " << endl;
                    cout << "D " << "���� " << endl;
                    cout << "E " << "���� " << endl;
                    cout << "F " << "���� " << endl;
                    cout << "G " << "���� " << endl;
                    cout << "H " << "��� " << endl;
                    cout << "I " << "���� " << endl;
                    cout << "J " << "���� " << endl;
                    cout << "K " << " ̾�� " << endl;
                    cin >> ym;


                    if (ym == "A") {
                        ym = "���� ";

                    }
                    else if (ym == "B")
                    {
                        ym = "���� ";

                    }
                    else if (ym == "C") {
                        ym = "���ݴ� ";
                    }
                    else if (ym == "D")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "E")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "F")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "G")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "H")
                    {
                        ym = "��� ";
                    }
                    else if (ym == "I")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "J")
                    {
                        ym = "���� ";
                    }
                    else if (ym == "K")
                    {
                        ym = " ̾�� ";
                    }
                    else {
                        cout << "��������" << endl;
                        exit(1);
                    }
                    //����  ����   ���ݴ�   ����   ����   ���� ,����  ���  ����  ����    ̾��
                    if (ym == "����" || "���� " || "���ݴ� " || "���� " || "���� " || "���� " || "���� " || "��� " || "����" || "����" || "̾��")
                    {
                        cout << "��ѡ����ǣ� " << ym << endl;
                    }

                    cout << "1,�����������뺺�ֵĴ���" << endl;
                    cout << "2.���뺺����˼" << endl;
                    cout << "3.�������ֽ�" << endl;
                    cout << "4,�˳����ν�ѧ" << endl;
                    cin >> t;


                }
                else   if (t == 2) {
                    cout << "������" << yn << "�ĺ�����˼" << endl;
                    cin >> yx;
                    cout << "��ѧ�ɹ�," << yn << "�ĺ�����˼�ǣ�" << yx << endl;
                    cout << "1,�޸�" << yn << "�ĺ��ֵĴ���" << endl;
                    cout << "2.�̴��ˣ���������������" << endl;
                    cout << "3.���沢�����̸�������" << endl;
                    cout << "4,���沢�˳�" << endl;
                    cin >> t;
                    if (t == 3 || t == 4)
                    {

                        test01(yn, yx, ym, paperid);
                        paperid = test01(yn, yx, ym, paperid);
                        //cout << "paperid= " << paperid << endl;

                    }
                    if (t == 4)
                    {
                        ��¼paperid(paperid);
                        test03(paperid);
                        cout << "��ӭ�´ι���,������������ϵ���䣺" << endl;
                        cout << "kaiji234@outlook.com" << endl;
                        cout << "�ٻ�!" << endl;
                        //system("pause");
                        //return 0;
                    }
                }
                else if (t == 3) {

                    cout << "�����뵥������" << endl;
                    cin >> yn;

                    cout << "1,��ѡ��" << yn << "�ĺ��ֵĴ���" << endl;
                    cout << "2�����뺺����˼" << endl;
                    cout << "3�����󣬻�һ���ֽ�" << endl;

                    cout << "4,�˳����ν�ѧ" << endl;
                    cin >> t;

                }
                else if (t == 4) {
                    break;
                }
                else {
                    cout << "��������,���Ժ�����";
                    cin >> t;
                    break;
                }

            }
        }
        else if (i == 2) {

            cout << "��ӭ�´�ʹ�ã���������˳�";
            exit(0);
        }
        else
        {
            cout << "����������������������";
            cin >> i;
        }
    }

}

/*     �˵�������ʼ    */
        /*
        if (a.������ == messages) {
            cout << "AI:��֪������֣����������˴����˼��ʲô";

        }
        else
        {
            cout << "AI:�һ�û��ѧϰ�������ݣ�����Խ�����" << endl;
            cout << "1Ϊ����" << endl;
            cout << "2Ϊ������" << endl;
            int i = 0;

            cin >> i;

            if (i == 1)
            {

                cout << "�����뵥������" << endl;
                cin >> yn;
                cout << "1��û�����󣬼����̴˺�����˼" << endl;
                cout << "2,��ѡ��" << yn << "�ĺ��ֵĴ���" << endl;
                cout << "3�����󣬻�һ���ֽ�" << endl;

                cout << "4,�˳����ν�ѧ" << endl;
                int t = 0;
                cin >> t;
                while (true)
                {



                    if (t == 1) {
                        cout << "������" << yn << "�ĺ�����˼" << endl;
                        cin >> a.��˼;
                        cout << "��ѧ�ɹ�," << yn << "�ĺ�����˼�ǣ�" << a.��˼ << endl;
                        cout << "1.�̴��ˣ���������������" << endl;
                        cout << "2,��ѡ��" << yn << "�ĺ��ֵĴ���" << endl;
                        cout << "3.û���������󣬼����̸�������" << endl;
                        cout << "4,�˳����ν�ѧ" << endl;
                        cin >> t;

                    }
                    else if (t == 2) {
                        cout << "ѡ��" << endl;
                        cout << "A " << "���� " << endl;
                        cout << "B " << "���� " << endl;
                        cout << "C " << "���ݴ� " << endl;
                        cout << "D " << "���� " << endl;
                        cout << "E " << "���� " << endl;
                        cout << "F " << "���� " << endl;
                        cout << "G " << "���� " << endl;
                        cout << "H " << "��� " << endl;
                        cout << "I " << "���� " << endl;
                        cout << "J " << "���� " << endl;
                        cout << "K " << " ̾�� " << endl;
                        cin >> ym;


                        if (ym == "A") {
                            ym = "���� ";

                        }
                        else if (ym == "B")
                        {
                            ym = "���� ";

                        }
                        else if (ym == "C") {
                            ym = "���ݴ� ";
                        }
                        else if (ym == "D")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "E")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "F")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "G")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "H")
                        {
                            ym = "��� ";
                        }
                        else if (ym == "I")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "J")
                        {
                            ym = "���� ";
                        }
                        else if (ym == "K")
                        {
                            ym = " ̾�� ";
                        }
                        else {
                            cout << "����������������" << endl;
                        }
                        //����  ����   ���ݴ�   ����   ����   ���� ,����  ���  ����  ����    ̾��
                        if (ym == "����" || "���� " || "���ݴ� " || "���� " || "���� " || "���� " || "���� " || "��� " || "����" || "����" || "̾��")
                        {
                            cout << "��ѡ����ǣ� " << ym << endl;
                        }

                        cout << "1.�޸ĺ�����˼" << endl;
                        cout << "2,�����������뺺�ֵĴ���" << endl;
                        cout << "3.û���������󣬼����̸�������" << endl;
                        cout << "4,�˳����ν�ѧ" << endl;
                        cin >> t;
                        if (t == 3 || t == 4)
                        {

                            test01(yn, a.��˼, ym, paperid);
                            paperid = test01(yn, a.��˼, yn, paperid);
                            //cout << "paperid= " << paperid << endl;

                        }
                        if (t == 4)
                        {
                             ��¼paperid(paperid);
                            test03(paperid);
                            cout << "��ӭ�´ι���,������������ϵ���䣺" << endl;
                            cout << "kaiji234@outlook.com" << endl;
                            cout << "�ٻ�!" << endl;
                            //system("pause");
                            //return 0;
                        }

                    }
                    else if (t == 3) {

                        cout << "�����뵥������" << endl;
                        cin >> yn;
                        cout << "1��û�����󣬼����̴˺�����˼" << endl;
                        cout << "2,��ѡ��" << yn << "�ĺ��ֵĴ���" << endl;
                        cout << "3�����󣬻�һ���ֽ�" << endl;

                        cout << "4,�˳����ν�ѧ" << endl;
                        cin >> t;

                    }
                    else if (t == 4) {
                        break;
                    }
                    else {
                        cout << "��������,���Ժ�����";
                        cin >> t;
                        break;
                    }

                }
            }
            else if (i == 2) {

                cout << "��ӭ�´�ʹ�ã���������˳�";
                exit;
            }
            else
            {
                cout << "����������������������";
                cin >> i;
            }
        }

        */
        /*�˵����� ����*/
