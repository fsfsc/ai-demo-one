#include  "�ֵ�.h"

//�ֵ䲿�ֿ�ʼ  
//a-z�ֵ� �����û�����ʹ�� ����û������ʱ ���г��ε��ù���
//az��Ӣ  n>e
void ��ʼ��Сдaz��Ӣ�ֵ�() {
    map<int, string> nazdict;
    nazdict[1] = "a";
    nazdict[2] = "b";
    nazdict[3] = "c";
    nazdict[4] = "d";
    nazdict[5] = "e";
    nazdict[6] = "f";
    nazdict[7] = "g";
    nazdict[8] = "h";
    nazdict[9] = "i";
    nazdict[10] = "j";
    nazdict[11] = "k";
    nazdict[12] = "l";
    nazdict[13] = "m";
    nazdict[14] = "n";
    nazdict[15] = "o";
    nazdict[16] = "p";
    nazdict[17] = "q";
    nazdict[18] = "r";
    nazdict[19] = "s";
    nazdict[20] = "t";
    nazdict[21] = "u";
    nazdict[22] = "v";
    nazdict[23] = "w";
    nazdict[24] = "x";
    nazdict[25] = "y";
    nazdict[26] = "z";

    ofstream file("Сдaz��Ӣ�ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : nazdict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "az��Ӣ�ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "az��Ӣ�ֵ�ʧ��" << endl;
    }

}

//СдazӢ���ֵ�  e>n
void ��ʼ��СдazӢ���ֵ�() {
    map<string, int> azndict;
    azndict["a"] = 1;
    azndict["b"] = 2;
    azndict["c"] = 3;
    azndict["d"] = 4;
    azndict["e"] = 5;
    azndict["f"] = 6;
    azndict["g"] = 7;
    azndict["h"] = 8;
    azndict["i"] = 9;
    azndict["j"] = 10;
    azndict["k"] = 11;
    azndict["l"] = 12;
    azndict["m"] = 13;
    azndict["n"] = 14;
    azndict["o"] = 15;
    azndict["p"] = 16;
    azndict["q"] = 17;
    azndict["r"] = 18;
    azndict["s"] = 19;
    azndict["t"] = 20;
    azndict["u"] = 21;
    azndict["v"] = 22;
    azndict["w"] = 23;
    azndict["x"] = 24;
    azndict["y"] = 25;
    azndict["z"] = 26;

    ofstream file("СдazӢ���ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : azndict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "azӢ���ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "azӢ���ֵ�ʧ��" << endl;
    }

}

//A-Z�ֵ� �����û�����ʹ�� ����û������ʱ ���г��ε��ù���
//AZ   n>E
void ��ʼ����дAZ��Ӣ�ֵ�() {
    map<int, string> nAZdict;

    nAZdict[1] = "A";
    nAZdict[2] = "B";
    nAZdict[3] = "C";
    nAZdict[4] = "D";
    nAZdict[5] = "E";
    nAZdict[6] = "F";
    nAZdict[7] = "G";
    nAZdict[8] = "H";
    nAZdict[9] = "I";
    nAZdict[10] = "J";
    nAZdict[11] = "K";
    nAZdict[12] = "L";
    nAZdict[13] = "M";
    nAZdict[14] = "N";
    nAZdict[15] = "O";
    nAZdict[16] = "P";
    nAZdict[17] = "Q";
    nAZdict[18] = "R";
    nAZdict[19] = "S";
    nAZdict[20] = "T";
    nAZdict[21] = "U";
    nAZdict[22] = "V";
    nAZdict[23] = "W";
    nAZdict[24] = "X";
    nAZdict[25] = "Y";
    nAZdict[26] = "Z";

    ofstream file("��дAZ��Ӣ�ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : nAZdict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "AZ��Ӣ�ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "AZ��Ӣ�ֵ��ʼ��ʧ��" << endl;
    }
}

//��дAZӢ���ֵ�   E>n
void ��ʼ����дAZӢ���ֵ�() {
    map<string, int> AZndict;

    AZndict["A"] = 1;
    AZndict["B"] = 2;
    AZndict["C"] = 3;
    AZndict["D"] = 4;
    AZndict["E"] = 5;
    AZndict["F"] = 6;
    AZndict["G"] = 7;
    AZndict["H"] = 8;
    AZndict["I"] = 9;
    AZndict["J"] = 10;
    AZndict["K"] = 11;
    AZndict["L"] = 12;
    AZndict["M"] = 13;
    AZndict["N"] = 14;
    AZndict["O"] = 15;
    AZndict["P"] = 16;
    AZndict["Q"] = 17;
    AZndict["R"] = 18;
    AZndict["S"] = 19;
    AZndict["T"] = 20;
    AZndict["U"] = 21;
    AZndict["V"] = 22;
    AZndict["W"] = 23;
    AZndict["X"] = 24;
    AZndict["Y"] = 25;
    AZndict["Z"] = 26;

    ofstream file("��дAZӢ���ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : AZndict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "AZӢ���ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "AZӢ���ֵ��ʼ��ʧ��" << endl;
    }
}

//Ӣ�ķ����ֵ� �����û�����ʹ�� ����û������ʱ ���г��ε��ù���
//��Ӣ����   n>es
void ��ʼ��Ӣ�ķ�����Ӣ�����ֵ�() {
    map<int, string> nefuhaodict;
    nefuhaodict[1] = ",";
    nefuhaodict[2] = ".";
    nefuhaodict[3] = "/";
    nefuhaodict[4] = "\\";
    nefuhaodict[5] = "'";
    nefuhaodict[6] = "|";
    nefuhaodict[7] = "\"";
    nefuhaodict[8] = ";";
    nefuhaodict[9] = ":";
    nefuhaodict[10] = "]";
    nefuhaodict[11] = "[";
    nefuhaodict[12] = "}";
    nefuhaodict[13] = "{";
    nefuhaodict[13] = "{";
    nefuhaodict[14] = "+";
    nefuhaodict[15] = "-";
    nefuhaodict[16] = "_";
    nefuhaodict[17] = "=";
    nefuhaodict[18] = ")";
    nefuhaodict[19] = "(";
    nefuhaodict[20] = "*";
    nefuhaodict[21] = "&";
    nefuhaodict[22] = "^";
    nefuhaodict[23] = "%";
    nefuhaodict[24] = "$";
    nefuhaodict[25] = "#";
    nefuhaodict[26] = "@";
    nefuhaodict[27] = "!";
    nefuhaodict[28] = "`";
    nefuhaodict[29] = "~";
    nefuhaodict[30] = "<";
    nefuhaodict[31] = ">";

    ofstream file("Ӣ�ķ�����Ӣ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : nefuhaodict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "Ӣ�ķ�����Ӣ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "Ӣ�ķ�����Ӣ�����ֵ��ʼ��ʧ��" << endl;
    }
}

//Ӣ������  es>n

void ��ʼ��Ӣ�ķ���Ӣ�������ֵ�() {
    map <string, int> enfuhaodict;
    enfuhaodict[","] = 1;
    enfuhaodict["."] = 2;
    enfuhaodict["/"] = 3;
    enfuhaodict["\\"] = 4;
    enfuhaodict["\'"] = 5;
    enfuhaodict["|"] = 6;
    enfuhaodict["\""] = 7;
    enfuhaodict[";"] = 8;
    enfuhaodict[":"] = 9;
    enfuhaodict["]"] = 10;
    enfuhaodict["["] = 11;
    enfuhaodict["}"] = 12;
    enfuhaodict["{"] = 13;
    enfuhaodict["+"] = 14;
    enfuhaodict["-"] = 15;
    enfuhaodict["_"] = 16;
    enfuhaodict["="] = 17;
    enfuhaodict[")"] = 18;
    enfuhaodict["("] = 19;
    enfuhaodict["*"] = 20;
    enfuhaodict["&"] = 21;
    enfuhaodict["^"] = 22;
    enfuhaodict["%"] = 23;
    enfuhaodict["$"] = 24;
    enfuhaodict["#"] = 25;
    enfuhaodict["@"] = 26;
    enfuhaodict["!"] = 27;
    enfuhaodict["`"] = 28;
    enfuhaodict["~"] = 29;
    enfuhaodict["<"] = 30;
    enfuhaodict[">"] = 31;

    ofstream file("Ӣ�ķ���Ӣ�������ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : enfuhaodict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "Ӣ�ķ���Ӣ�������ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "Ӣ�ķ���Ӣ�������ֵ��ʼ��ʧ��" << endl;
    }
}



//���ķ����ֵ� �����û�����ʹ�� ����û������ʱ ���г��ε��ù���
void ��ʼ�����ķ������з����ֵ�() {
    map<int, string> nzfuhaodict;
    nzfuhaodict[1] = "��";
    nzfuhaodict[2] = "��";
    nzfuhaodict[3] = "��";
    nzfuhaodict[4] = "��";
    nzfuhaodict[5] = "��";
    nzfuhaodict[6] = "��";
    nzfuhaodict[7] = "��";
    nzfuhaodict[8] = "|";
    nzfuhaodict[9] = "��";
    nzfuhaodict[10] = "��";
    nzfuhaodict[11] = "��";
    nzfuhaodict[12] = "��";
    nzfuhaodict[13] = "}";
    nzfuhaodict[14] = "{";
    nzfuhaodict[15] = "+";
    nzfuhaodict[16] = "=";
    nzfuhaodict[17] = "-";
    nzfuhaodict[18] = "����";
    nzfuhaodict[19] = "��";
    nzfuhaodict[20] = "��";
    nzfuhaodict[21] = "*";
    nzfuhaodict[22] = "&";
    nzfuhaodict[23] = "����";
    nzfuhaodict[24] = "%";
    nzfuhaodict[25] = "��";
    nzfuhaodict[26] = "#";
    nzfuhaodict[27] = "@";
    nzfuhaodict[28] = "��";
    nzfuhaodict[29] = "��";
    nzfuhaodict[30] = "~";

    ofstream file("���ķ������з����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : nzfuhaodict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ķ������з����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ķ������з����ֵ��ʼ��ʧ��" << endl;
    }
}

//���ĺ����ֵ� �����û�����ʹ�� ����û������ʱ ���г��ε��ù���
void ��ʼ�����ĺ���ƴ������Ŀ¼�ֵ�() {
    map<string, string> hanzipinyindict;
    hanzipinyindict["a"] = "���ĺ���ƴ��a��ͷ�����ֵ�.txt";
    hanzipinyindict["b"] = "���ĺ���ƴ��b��ͷ�����ֵ�.txt";
    hanzipinyindict["c"] = "���ĺ���ƴ��c��ͷ�����ֵ�.txt";
    hanzipinyindict["d"] = "���ĺ���ƴ��d��ͷ�����ֵ�.txt";
    hanzipinyindict["e"] = "���ĺ���ƴ��e��ͷ�����ֵ�.txt";
    hanzipinyindict["f"] = "���ĺ���ƴ��f��ͷ�����ֵ�.txt";
    hanzipinyindict["g"] = "���ĺ���ƴ��g��ͷ�����ֵ�.txt";
    hanzipinyindict["h"] = "���ĺ���ƴ��h��ͷ�����ֵ�.txt";
    hanzipinyindict["i"] = "���ĺ���ƴ��i��ͷ�����ֵ�.txt";
    hanzipinyindict["j"] = "���ĺ���ƴ��j��ͷ�����ֵ�.txt";
    hanzipinyindict["k"] = "���ĺ���ƴ��k��ͷ�����ֵ�.txt";
    hanzipinyindict["l"] = "���ĺ���ƴ��l��ͷ�����ֵ�.txt";
    hanzipinyindict["m"] = "���ĺ���ƴ��m��ͷ�����ֵ�.txt";
    hanzipinyindict["n"] = "���ĺ���ƴ��n��ͷ�����ֵ�.txt";
    hanzipinyindict["o"] = "���ĺ���ƴ��o��ͷ�����ֵ�.txt";
    hanzipinyindict["p"] = "���ĺ���ƴ��p��ͷ�����ֵ�.txt";
    hanzipinyindict["q"] = "���ĺ���ƴ��q��ͷ�����ֵ�.txt";
    hanzipinyindict["r"] = "���ĺ���ƴ��r��ͷ�����ֵ�.txt";
    hanzipinyindict["s"] = "���ĺ���ƴ��s��ͷ�����ֵ�.txt";
    hanzipinyindict["t"] = "���ĺ���ƴ��t��ͷ�����ֵ�.txt";
    hanzipinyindict["u"] = "���ĺ���ƴ��u��ͷ�����ֵ�.txt";
    hanzipinyindict["v"] = "���ĺ���ƴ��v��ͷ�����ֵ�.txt";
    hanzipinyindict["w"] = "���ĺ���ƴ��w��ͷ�����ֵ�.txt";
    hanzipinyindict["x"] = "���ĺ���ƴ��x��ͷ�����ֵ�.txt";
    hanzipinyindict["y"] = "���ĺ���ƴ��y��ͷ�����ֵ�.txt";
    hanzipinyindict["z"] = "���ĺ���ƴ��z��ͷ�����ֵ�.txt";

    ofstream file("���ĺ���ƴ������Ŀ¼�ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : hanzipinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ������Ŀ¼�ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ������Ŀ¼�ֵ��ʼ��ʧ��" << endl;
    }

}


//aƴ������
void  ���ĺ���ƴ��a��ͷ�����ֵ�() {
    multimap<string, string>apinyindict;
    apinyindict.insert({ "a","a" });
    apinyindict.insert({ "a","ai" });
    apinyindict.insert({ "a","an" });
    apinyindict.insert({ "a","ang" });
    apinyindict.insert({ "a","ao" });

    ofstream file("���ĺ���ƴ��a��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : apinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��a��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��a��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}

//bƴ������

void ���ĺ���ƴ��b��ͷ�����ֵ�() {
    multimap<string, string>bpinyindict;
    bpinyindict.insert({ "b","ba" });
    bpinyindict.insert({ "b","bai" });
    bpinyindict.insert({ "b","ban" });
    bpinyindict.insert({ "b","bang" });
    bpinyindict.insert({ "b","bao" });
    bpinyindict.insert({ "b","bei" });
    bpinyindict.insert({ "b","ben" });
    bpinyindict.insert({ "b","beng" });
    bpinyindict.insert({ "b","bi" });
    bpinyindict.insert({ "b","bian" });
    bpinyindict.insert({ "b","biao" });
    bpinyindict.insert({ "b","bie" });
    bpinyindict.insert({ "b","bin" });
    bpinyindict.insert({ "b","bing" });
    bpinyindict.insert({ "b","bo" });
    bpinyindict.insert({ "b","bu" });

    ofstream file("���ĺ���ƴ��b��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : bpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��b��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��b��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}


//cƴ������
void ���ĺ���ƴ��c��ͷ�����ֵ�() {
    multimap<string, string>cpinyindict;
    cpinyindict.insert({ "c","ca" });
    cpinyindict.insert({ "c","cai" });
    cpinyindict.insert({ "c","can" });
    cpinyindict.insert({ "c","cang" });
    cpinyindict.insert({ "c","cao" });
    cpinyindict.insert({ "c","ce" });
    cpinyindict.insert({ "c","cen" });
    cpinyindict.insert({ "c","ceng" });
    cpinyindict.insert({ "c","cha" });
    cpinyindict.insert({ "c","chai" });
    cpinyindict.insert({ "c","chan" });
    cpinyindict.insert({ "c","chang" });
    cpinyindict.insert({ "c","chao" });
    cpinyindict.insert({ "c","che" });
    cpinyindict.insert({ "c","chen" });
    cpinyindict.insert({ "c","cheng" });
    cpinyindict.insert({ "c","chi" });
    cpinyindict.insert({ "c","chong" });
    cpinyindict.insert({ "c","chou" });
    cpinyindict.insert({ "c","chu" });
    cpinyindict.insert({ "c","chuai" });
    cpinyindict.insert({ "c","chuan" });
    cpinyindict.insert({ "c","chuang" });
    cpinyindict.insert({ "c","chui" });
    cpinyindict.insert({ "c","chun" });
    cpinyindict.insert({ "c","chuo" });
    cpinyindict.insert({ "c","ci" });
    cpinyindict.insert({ "c","cong" });
    cpinyindict.insert({ "c","cou" });
    cpinyindict.insert({ "c","cu" });
    cpinyindict.insert({ "c","cuan" });
    cpinyindict.insert({ "c","cui" });
    cpinyindict.insert({ "c","cun" });
    cpinyindict.insert({ "c","cuo" });

    ofstream file("���ĺ���ƴ��c��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : cpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��c��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��c��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }


}


//dƴ������
void ���ĺ���ƴ��d��ͷ�����ֵ�() {
    multimap<string, string>dpinyindict;
    dpinyindict.insert({ "d","da" });
    dpinyindict.insert({ "d","dai" });
    dpinyindict.insert({ "d","dan" });
    dpinyindict.insert({ "d","dang" });
    dpinyindict.insert({ "d","dao" });
    dpinyindict.insert({ "d","de" });
    dpinyindict.insert({ "d","deng" });
    dpinyindict.insert({ "d","di" });
    dpinyindict.insert({ "d","dia" });
    dpinyindict.insert({ "d","dian" });
    dpinyindict.insert({ "d","diao" });
    dpinyindict.insert({ "d","die" });
    dpinyindict.insert({ "d","ding" });
    dpinyindict.insert({ "d","diu" });
    dpinyindict.insert({ "d","dong" });
    dpinyindict.insert({ "d","dou" });
    dpinyindict.insert({ "d","du" });
    dpinyindict.insert({ "d","duan" });
    dpinyindict.insert({ "d","dui" });
    dpinyindict.insert({ "d","dun" });
    dpinyindict.insert({ "d","duo" });


    ofstream file("���ĺ���ƴ��d��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : dpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��d��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��d��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}


//eƴ������
void  ���ĺ���ƴ��e��ͷ�����ֵ�() {
    multimap<string, string>epinyindict;
    epinyindict.insert({ "e","e" });
    epinyindict.insert({ "e","ei" });
    epinyindict.insert({ "e","en" });
    epinyindict.insert({ "e","eng" });
    epinyindict.insert({ "e","er" });

    ofstream file("���ĺ���ƴ��e��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : epinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��e��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��e��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}


//fƴ������
void ���ĺ���ƴ��f��ͷ�����ֵ�() {
    multimap<string, string>fpinyindict;
    fpinyindict.insert({ "f","fa" });
    fpinyindict.insert({ "f","fan" });
    fpinyindict.insert({ "f","fang" });
    fpinyindict.insert({ "f","fei" });
    fpinyindict.insert({ "f","fen" });
    fpinyindict.insert({ "f","feng" });
    fpinyindict.insert({ "f","fo" });
    fpinyindict.insert({ "f","fou" });
    fpinyindict.insert({ "f","fu" });

    ofstream file("���ĺ���ƴ��f��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : fpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��f��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��f��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}


//gƴ������
void ���ĺ���ƴ��g��ͷ�����ֵ�() {
    multimap<string, string>gpinyindict;
    gpinyindict.insert({ "g","ga" });
    gpinyindict.insert({ "g","gai" });
    gpinyindict.insert({ "g","gan" });
    gpinyindict.insert({ "g","gang" });
    gpinyindict.insert({ "g","gao" });
    gpinyindict.insert({ "g","ge" });
    gpinyindict.insert({ "g","gei" });
    gpinyindict.insert({ "g","gen" });
    gpinyindict.insert({ "g","geng" });
    gpinyindict.insert({ "g","gong" });
    gpinyindict.insert({ "g","gou" });
    gpinyindict.insert({ "g","gu" });
    gpinyindict.insert({ "g","gua" });
    gpinyindict.insert({ "g","guai" });
    gpinyindict.insert({ "g","guan" });
    gpinyindict.insert({ "g","guang" });
    gpinyindict.insert({ "g","gui" });
    gpinyindict.insert({ "g","gun" });
    gpinyindict.insert({ "g","guo" });

    ofstream file("���ĺ���ƴ��g��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : gpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��g��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��g��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//hƴ������
void ���ĺ���ƴ��h��ͷ�����ֵ�() {
    multimap<string, string>hpinyindict;
    hpinyindict.insert({ "h","ha" });
    hpinyindict.insert({ "h","hai" });
    hpinyindict.insert({ "h","han" });
    hpinyindict.insert({ "h","hang" });
    hpinyindict.insert({ "h","hao" });
    hpinyindict.insert({ "h","he" });
    hpinyindict.insert({ "h","hei" });
    hpinyindict.insert({ "h","hen" });
    hpinyindict.insert({ "h","heng" });
    hpinyindict.insert({ "h","hong" });
    hpinyindict.insert({ "h","hou" });
    hpinyindict.insert({ "h","hu" });
    hpinyindict.insert({ "h","hua" });
    hpinyindict.insert({ "h","huai" });
    hpinyindict.insert({ "h","huan" });
    hpinyindict.insert({ "h","huang" });
    hpinyindict.insert({ "h","hui" });
    hpinyindict.insert({ "h","hun" });
    hpinyindict.insert({ "h","huo" });

    ofstream file("���ĺ���ƴ��h��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : hpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��h��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��h��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//jƴ������

void ���ĺ���ƴ��j��ͷ�����ֵ�() {
    multimap<string, string>jpinyindict;
    jpinyindict.insert({ "j","ji" });
    jpinyindict.insert({ "j","jia" });
    jpinyindict.insert({ "j","jian" });
    jpinyindict.insert({ "j","jiang" });
    jpinyindict.insert({ "j","jiao" });
    jpinyindict.insert({ "j","jie" });
    jpinyindict.insert({ "j","jin" });
    jpinyindict.insert({ "j","jing" });
    jpinyindict.insert({ "j","jiong" });
    jpinyindict.insert({ "j","jiu" });
    jpinyindict.insert({ "j","ju" });
    jpinyindict.insert({ "j","juan" });
    jpinyindict.insert({ "j","jue" });
    jpinyindict.insert({ "j","jun" });


    ofstream file("���ĺ���ƴ��j��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : jpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��j��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��j��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//kƴ������
void ���ĺ���ƴk��ͷ�����ֵ�() {
    multimap<string, string>kpinyindict;
    kpinyindict.insert({ "k","ka" });
    kpinyindict.insert({ "k","kai" });
    kpinyindict.insert({ "k","kan" });
    kpinyindict.insert({ "k","kang" });
    kpinyindict.insert({ "k","kao" });
    kpinyindict.insert({ "k","ke" });
    kpinyindict.insert({ "k","kei" });
    kpinyindict.insert({ "k","ken" });
    kpinyindict.insert({ "k","keng" });
    kpinyindict.insert({ "k","kong" });
    kpinyindict.insert({ "k","kou" });
    kpinyindict.insert({ "k","ku" });
    kpinyindict.insert({ "k","kua" });
    kpinyindict.insert({ "k","kuai" });
    kpinyindict.insert({ "k","kuan" });
    kpinyindict.insert({ "k","kuang" });
    kpinyindict.insert({ "k","kui" });
    kpinyindict.insert({ "k","kun" });
    kpinyindict.insert({ "k","kuo" });


    ofstream file("���ĺ���ƴ��k��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : kpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��k��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��k��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}


//lƴ������
void ���ĺ���ƴ��l��ͷ�����ֵ�() {
    multimap<string, string>lpinyindict;
    lpinyindict.insert({ "l","la" });
    lpinyindict.insert({ "l","lai" });
    lpinyindict.insert({ "l","lan" });
    lpinyindict.insert({ "l","lang" });
    lpinyindict.insert({ "l","lao" });
    lpinyindict.insert({ "l","le" });
    lpinyindict.insert({ "l","lei" });
    lpinyindict.insert({ "l","leng" });
    lpinyindict.insert({ "l","li" });
    lpinyindict.insert({ "l","lia" });
    lpinyindict.insert({ "l","lian" });
    lpinyindict.insert({ "l","liang" });
    lpinyindict.insert({ "l","liao" });
    lpinyindict.insert({ "l","lie" });
    lpinyindict.insert({ "l","lin" });
    lpinyindict.insert({ "l","ling" });
    lpinyindict.insert({ "l","liu" });
    lpinyindict.insert({ "l","lo" });
    lpinyindict.insert({ "l","long" });
    lpinyindict.insert({ "l","lou" });
    lpinyindict.insert({ "l","lu" });
    lpinyindict.insert({ "l","l��" });
    lpinyindict.insert({ "l","luan" });
    lpinyindict.insert({ "l","l��e" });
    lpinyindict.insert({ "l","lun" });
    lpinyindict.insert({ "l","luo" });

    ofstream file("���ĺ���ƴ��l��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : lpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��l��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��l��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//mƴ������
void ���ĺ���ƴ��m��ͷ�����ֵ�() {
    multimap<string, string>mpinyindict;
    mpinyindict.insert({ "m","ma" });
    mpinyindict.insert({ "m","mai" });
    mpinyindict.insert({ "m","man" });
    mpinyindict.insert({ "m","mang" });
    mpinyindict.insert({ "m","mao" });
    mpinyindict.insert({ "m","me" });
    mpinyindict.insert({ "m","mei" });
    mpinyindict.insert({ "m","men" });
    mpinyindict.insert({ "m","meng" });
    mpinyindict.insert({ "m","mi" });
    mpinyindict.insert({ "m","mian" });
    mpinyindict.insert({ "m","miao" });
    mpinyindict.insert({ "m","mie" });
    mpinyindict.insert({ "m","min" });
    mpinyindict.insert({ "m","ming" });
    mpinyindict.insert({ "m","miu" });
    mpinyindict.insert({ "m","mo" });
    mpinyindict.insert({ "m","mou" });
    mpinyindict.insert({ "m","mu" });

    ofstream file("���ĺ���ƴ��m��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : mpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��m��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��m��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//nƴ������
void ���ĺ���ƴ��n��ͷ�����ֵ�() {
    multimap<string, string>npinyindict;
    npinyindict.insert({ "n","n" });
    npinyindict.insert({ "n","na" });
    npinyindict.insert({ "n","nai" });
    npinyindict.insert({ "n","nan" });
    npinyindict.insert({ "n","nang" });
    npinyindict.insert({ "n","nao" });
    npinyindict.insert({ "n","ne" });
    npinyindict.insert({ "n","nei" });
    npinyindict.insert({ "n","nen" });
    npinyindict.insert({ "n","neng" });
    npinyindict.insert({ "n","ng" });
    npinyindict.insert({ "n","ni" });
    npinyindict.insert({ "n","nian" });
    npinyindict.insert({ "n","niang" });
    npinyindict.insert({ "n","niao" });
    npinyindict.insert({ "n","nie" });
    npinyindict.insert({ "n","nin" });
    npinyindict.insert({ "n","ning" });
    npinyindict.insert({ "n","niu" });
    npinyindict.insert({ "n","nong" });
    npinyindict.insert({ "n","nou" });
    npinyindict.insert({ "n","nu" });
    npinyindict.insert({ "n","n��" });
    npinyindict.insert({ "n","nuan" });
    npinyindict.insert({ "n","nve" });
    npinyindict.insert({ "n","nuo" });

    ofstream file("���ĺ���ƴ��n��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : npinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��n��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��n��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//o ƴ������
void ���ĺ���ƴ��o��ͷ�����ֵ�() {
    multimap<string, string>opinyindict;
    opinyindict.insert({ "o","o" });
    opinyindict.insert({ "o","ou" });

    ofstream file("���ĺ���ƴ��o��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : opinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��o��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��o��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}

//p ƴ������
void ���ĺ���ƴ��p��ͷ�����ֵ�() {
    multimap<string, string>ppinyindict;
    ppinyindict.insert({ "p","pa" });
    ppinyindict.insert({ "p","pai" });
    ppinyindict.insert({ "p","pan" });
    ppinyindict.insert({ "p","pang" });
    ppinyindict.insert({ "p","pao" });
    ppinyindict.insert({ "p","pei" });
    ppinyindict.insert({ "p","pen" });
    ppinyindict.insert({ "p","peng" });
    ppinyindict.insert({ "p","pi" });
    ppinyindict.insert({ "p","pian" });
    ppinyindict.insert({ "p","piao" });
    ppinyindict.insert({ "p","pie" });
    ppinyindict.insert({ "p","pin" });
    ppinyindict.insert({ "p","ping" });
    ppinyindict.insert({ "p","po" });
    ppinyindict.insert({ "p","pou" });
    ppinyindict.insert({ "p","pu" });

    ofstream file("���ĺ���ƴ��p��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : ppinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��p��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��p��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//q ƴ������
void ���ĺ���ƴ��q��ͷ�����ֵ�() {
    multimap<string, string>qpinyindict;
    qpinyindict.insert({ "q","qi" });
    qpinyindict.insert({ "q","qia" });
    qpinyindict.insert({ "q","qian" });
    qpinyindict.insert({ "q","qiang" });
    qpinyindict.insert({ "q","qiao" });
    qpinyindict.insert({ "q","qie" });
    qpinyindict.insert({ "q","qin" });
    qpinyindict.insert({ "q","qing" });
    qpinyindict.insert({ "q","qiong" });
    qpinyindict.insert({ "q","qiu" });
    qpinyindict.insert({ "q","qu" });
    qpinyindict.insert({ "q","quan" });
    qpinyindict.insert({ "q","que" });
    qpinyindict.insert({ "q","qun" });

    ofstream file("���ĺ���ƴ��q��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : qpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��q��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��q��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//r ƴ������
void ���ĺ���ƴ��r��ͷ�����ֵ�() {
    multimap<string, string>rpinyindict;
    rpinyindict.insert({ "r","ran" });
    rpinyindict.insert({ "r","rang" });
    rpinyindict.insert({ "r","rao" });
    rpinyindict.insert({ "r","re" });
    rpinyindict.insert({ "r","ren" });
    rpinyindict.insert({ "r","reng" });
    rpinyindict.insert({ "r","ri" });
    rpinyindict.insert({ "r","rong" });
    rpinyindict.insert({ "r","rou" });
    rpinyindict.insert({ "r","ru" });
    rpinyindict.insert({ "r","rua" });
    rpinyindict.insert({ "r","ruan" });
    rpinyindict.insert({ "r","rui" });
    rpinyindict.insert({ "r","run" });
    rpinyindict.insert({ "r","ruo" });

    ofstream file("���ĺ���ƴ��r��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : rpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��r��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��r��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }


}


//s ƴ������
void ���ĺ���ƴ��s��ͷ�����ֵ�() {
    multimap<string, string>spinyindict;
    spinyindict.insert({ "s","sa" });
    spinyindict.insert({ "s","sai" });
    spinyindict.insert({ "s","san" });
    spinyindict.insert({ "s","sang" });
    spinyindict.insert({ "s","sao" });

    spinyindict.insert({ "s","se" });
    spinyindict.insert({ "s","sen" });
    spinyindict.insert({ "s","seng" });
    spinyindict.insert({ "s","sha" });
    spinyindict.insert({ "s","shai" });

    spinyindict.insert({ "s","shan" });
    spinyindict.insert({ "s","shang" });
    spinyindict.insert({ "s","shao" });
    spinyindict.insert({ "s","she" });
    spinyindict.insert({ "s","shei" });

    spinyindict.insert({ "s","shen" });
    spinyindict.insert({ "s","sheng" });
    spinyindict.insert({ "s","shi" });
    spinyindict.insert({ "s","shou" });
    spinyindict.insert({ "s","shu" });

    spinyindict.insert({ "s","shua" });
    spinyindict.insert({ "s","shuai" });
    spinyindict.insert({ "s","shuan" });
    spinyindict.insert({ "s","shuang" });
    spinyindict.insert({ "s","shui" });

    spinyindict.insert({ "s","shun" });
    spinyindict.insert({ "s","shuo" });
    spinyindict.insert({ "s","si" });
    spinyindict.insert({ "s","song" });
    spinyindict.insert({ "s","sou" });

    spinyindict.insert({ "s","su" });
    spinyindict.insert({ "s","suan" });
    spinyindict.insert({ "s","sui" });
    spinyindict.insert({ "s","sun" });
    spinyindict.insert({ "s","suo" });


    ofstream file("���ĺ���ƴ��s��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : spinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��s��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��s��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}


//t ƴ������
void ���ĺ���ƴ��t��ͷ�����ֵ�() {
    multimap<string, string>tpinyindict;
    tpinyindict.insert({ "t","ta" });
    tpinyindict.insert({ "t","tai" });
    tpinyindict.insert({ "t","tan" });
    tpinyindict.insert({ "t","tang" });
    tpinyindict.insert({ "t","tao" });

    tpinyindict.insert({ "t","te" });
    tpinyindict.insert({ "t","teng" });
    tpinyindict.insert({ "t","ti" });
    tpinyindict.insert({ "t","tian" });
    tpinyindict.insert({ "t","tiao" });

    tpinyindict.insert({ "t","tie" });
    tpinyindict.insert({ "t","ting" });
    tpinyindict.insert({ "t","tong" });
    tpinyindict.insert({ "t","tou" });
    tpinyindict.insert({ "t","tu" });

    tpinyindict.insert({ "t","tuan" });
    tpinyindict.insert({ "t","tui" });
    tpinyindict.insert({ "t","tun" });
    tpinyindict.insert({ "t","tuo" });

    ofstream file("���ĺ���ƴ��t��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : tpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��t��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��t��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}

//w ƴ������
void ���ĺ���ƴ��w��ͷ�����ֵ�() {
    multimap<string, string>wpinyindict;
    wpinyindict.insert({ "w","wa" });
    wpinyindict.insert({ "w","wai" });
    wpinyindict.insert({ "w","wan" });
    wpinyindict.insert({ "w","wang" });
    wpinyindict.insert({ "w","wei" });

    wpinyindict.insert({ "w","wen" });
    wpinyindict.insert({ "w","weng" });
    wpinyindict.insert({ "w","wo" });
    wpinyindict.insert({ "w","wu" });

    ofstream file("���ĺ���ƴ��w��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : wpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��w��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��w��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }
}


//x ƴ������
void ���ĺ���ƴ��x��ͷ�����ֵ�() {
    multimap<string, string>xpinyindict;
    xpinyindict.insert({ "x","xi" });
    xpinyindict.insert({ "x","xia" });
    xpinyindict.insert({ "x","xian" });
    xpinyindict.insert({ "x","xiang" });
    xpinyindict.insert({ "x","xiao" });

    xpinyindict.insert({ "x","xie" });
    xpinyindict.insert({ "x","xin" });
    xpinyindict.insert({ "x","xing" });
    xpinyindict.insert({ "x","xiong" });
    xpinyindict.insert({ "x","xiu" });

    xpinyindict.insert({ "x","xu" });
    xpinyindict.insert({ "x","xuan" });
    xpinyindict.insert({ "x","xue" });
    xpinyindict.insert({ "x","xun" });


    ofstream file("���ĺ���ƴ��x��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : xpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��x��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��x��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}


//y ƴ������
void ���ĺ���ƴ��y��ͷ�����ֵ�() {
    multimap<string, string>ypinyindict;
    ypinyindict.insert({ "y","ya" });
    ypinyindict.insert({ "y","yan" });
    ypinyindict.insert({ "y","yang" });
    ypinyindict.insert({ "y","yao" });
    ypinyindict.insert({ "y","ye" });

    ypinyindict.insert({ "y","yi" });
    ypinyindict.insert({ "y","yin" });
    ypinyindict.insert({ "y","ying" });
    ypinyindict.insert({ "y","yo" });
    ypinyindict.insert({ "y","yong" });

    ypinyindict.insert({ "y","you" });
    ypinyindict.insert({ "y","yu" });
    ypinyindict.insert({ "y","yuan" });
    ypinyindict.insert({ "y","yue" });
    ypinyindict.insert({ "y","yun" });


    ofstream file("���ĺ���ƴ��y��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : ypinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��y��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��y��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}

//z ƴ������
void ���ĺ���ƴ��z��ͷ�����ֵ�() {
    multimap<string, string>zpinyindict;
    zpinyindict.insert({ "z","za" });
    zpinyindict.insert({ "z","zai" });
    zpinyindict.insert({ "z","zan" });
    zpinyindict.insert({ "z","zang" });
    zpinyindict.insert({ "z","zao" });

    zpinyindict.insert({ "z","ze" });
    zpinyindict.insert({ "z","zei" });
    zpinyindict.insert({ "z","zen" });
    zpinyindict.insert({ "z","zeng" });
    zpinyindict.insert({ "z","zha" });

    zpinyindict.insert({ "z","zhai" });
    zpinyindict.insert({ "z","zhan" });
    zpinyindict.insert({ "z","zhang" });
    zpinyindict.insert({ "z","zhao" });
    zpinyindict.insert({ "z","zhe" });

    zpinyindict.insert({ "z","zhei" });
    zpinyindict.insert({ "z","zhen" });
    zpinyindict.insert({ "z","zheng" });
    zpinyindict.insert({ "z","zhi" });
    zpinyindict.insert({ "z","zhong" });

    zpinyindict.insert({ "z","zhou" });
    zpinyindict.insert({ "z","zhu" });
    zpinyindict.insert({ "z","zhua" });
    zpinyindict.insert({ "z","zhuai" });
    zpinyindict.insert({ "z","zhuan" });

    zpinyindict.insert({ "z","zhuang" });
    zpinyindict.insert({ "z","zhui" });
    zpinyindict.insert({ "z","zhun" });
    zpinyindict.insert({ "z","zhuo" });
    zpinyindict.insert({ "z","zi" });

    zpinyindict.insert({ "z","zong" });
    zpinyindict.insert({ "z","zou" });
    zpinyindict.insert({ "z","zu" });
    zpinyindict.insert({ "z","zuan" });

    zpinyindict.insert({ "z","zui" });
    zpinyindict.insert({ "z","zun" });

    zpinyindict.insert({ "z","zuo" });

    ofstream file("���ĺ���ƴ��z��ͷ�����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : zpinyindict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��z��ͷ�����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��z��ͷ�����ֵ��ʼ��ʧ��" << endl;
    }

}


//���ĺ���ƴ��a��Ӧ�ĺ����ֵ�
void ���ĺ���ƴ��a��Ӧ�ĺ����ֵ�() {
    multimap<string, string>aduiyingdict;
    aduiyingdict.insert({ "a1" , "��" });
    aduiyingdict.insert({ "a1" , "��" });
    aduiyingdict.insert({ "a1" , "߹" });
    aduiyingdict.insert({ "a1" , "��" });
    aduiyingdict.insert({ "a1" , "�H" });
    aduiyingdict.insert({ "a1" , "�" });

    aduiyingdict.insert({ "a2" , "��" });
    aduiyingdict.insert({ "a2" , "��" });

    aduiyingdict.insert({ "a3" , "��" });

    aduiyingdict.insert({ "a4" , "��" });

    ofstream file("���ĺ���ƴ��a��Ӧ�ĺ����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : aduiyingdict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��a��Ӧ�ĺ����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��a��Ӧ�ĺ����ֵ��ʼ��ʧ��" << endl;
    }

}


//���ĺ���ƴ��ai��Ӧ�ĺ����ֵ�
void ���ĺ���ƴ��ai��Ӧ�ĺ����ֵ�() {
    multimap<string, string>aiduiyingdict;
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });

    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "��" });
    aiduiyingdict.insert({ "ai1" , "�L" });
    aiduiyingdict.insert({ "ai1" , "�X" });

    ofstream file("���ĺ���ƴ��ai��Ӧ�ĺ����ֵ�.txt"); // ��һ���ļ�����д�����
    if (file.is_open()) { // ����ļ��ɹ���
        for (const auto& pair : aiduiyingdict) { // �����ֵ��е�����Ԫ��
            file << pair.first << " " << pair.second << endl; // ����ֵ��д���ļ���
        }
        file.close(); // �ر��ļ�
        cout << "���ĺ���ƴ��ai��Ӧ�ĺ����ֵ��ʼ���ɹ�" << endl;
    }
    else {
        std::cerr << "���ĺ���ƴ��ai��Ӧ�ĺ����ֵ��ʼ��ʧ��" << endl;
    }

}
