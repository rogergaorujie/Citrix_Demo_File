/*************************************************
 * �ļ�����main.cpp
 * �����ˣ��Ͼ�ѧ�á���ͷ
 * ��  �ڣ�2017-3-16
 * ��  ����C++��һ�׶���Ŀ��С�������ɼǡ�
 * �޸��ˣ�someone
 * ��  �ڣ�someday
 * ��  ����1.0.0
 * Copyright (c) 2006-2017 xuetang9.com
 ************************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <array>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleTitle("�׶ΰ�����С�������ɼ�~�ɰ����Դ�Ⱦ");
    //1����������    2��Ů������
    string father_name = "Gates", daughter_name = "Luna";
    //3��Ů������
    int d_brith_year = 1648, d_birth_month = 5, d_birth_day = 21;
    int d_value_array[5];//Ů����5���������ԣ����������������������¡�����
    int d_value_gold = 500;    //��ʼ�ʽ�
    string d_constell;          //Ů��������
    //4��������������Ů���ĳ�ʼ������
    string constellations[12][2] = {
        {"ɽ����", "ˮƿ��"},
        {"ˮƿ��", "˫����"},
        {"˫����", "������"},
        {"������", "��ţ��"},
        {"��ţ��", "˫����"},
        {"˫����", "��з��"},
        {"��з��", "ʨ����"},
        {"ʨ����", "��Ů��"},
        {"��Ů��", "�����"},
        {"�����", "��Ы��"},
        {"��Ы��", "������"},
        {"������", "ɽ����"},
    };
    //ˮƿ����ʼ��ÿ�������ڸ��µĵ�һ������
    int constell_date[] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    d_constell = constellations[d_birth_month-1][d_birth_day/constell_date[d_birth_month-1]];
    string d_value_names[] {"����", "����", "����", "����", "����"};

    string answer;
    int choice, temp;
    int count = 0;  //������

    /****************************************************************/
    cout << "�����븸�׵����֣�" ;
    cin >> father_name;
    cout << "������Ů�������֣�";
    cin >> daughter_name;
    cout << "Ů������(MM/DD)��";
    cin >> d_birth_month >> d_birth_day; //�������ֵĺϷ�����Ҫ�����ж�
    cout << "\n��Ԫ1659�꣬����" << father_name << "������СŮ��" << daughter_name << endl;
    cout << "Ů����ϸ��Ϣ��" << endl;
    cout << left;
    cout << "������" << daughter_name << endl;
    cout << "���գ�" << d_brith_year << '-' << d_birth_month << '-' << d_birth_day << endl;
    cout << "������" << d_constell << endl;
    cout << "���䣺" << 11 << "��" << endl;
    cout << "��Ǯ��" << d_value_gold << endl;
    cout << "*********��Ϸ��ʼ*********\n" << endl;

    /***************************************************************/



    if(d_constell == "������"){
        d_value_array[0] = 80;  d_value_array[1] = 15; d_value_array[2] = 15; d_value_array[3] = 11; d_value_array[4] = 21;
    }else if(d_constell == "��ţ��"){
        d_value_array[0] = 46;  d_value_array[1] = 30; d_value_array[2] = 28; d_value_array[3] = 20; d_value_array[4] = 29;
    }else if(d_constell == "˫����"){
        d_value_array[0] = 50;  d_value_array[1] = 35; d_value_array[2] = 23; d_value_array[3] = 8;  d_value_array[4] = 20;
    }else if(d_constell == "��з��"){
        d_value_array[0] = 40;  d_value_array[1] = 31; d_value_array[2] = 33; d_value_array[3] = 17; d_value_array[4] = 33;
    }else if(d_constell == "ʨ����"){
        d_value_array[0] = 85;  d_value_array[1] = 9 ; d_value_array[2] = 11; d_value_array[3] = 20; d_value_array[4] = 37;
    }else if(d_constell == "��Ů��"){
        d_value_array[0] = 35;  d_value_array[1] = 28; d_value_array[2] = 36; d_value_array[3] = 18; d_value_array[4] = 40;
    }else if(d_constell == "�����"){
        d_value_array[0] = 42;  d_value_array[1] = 33; d_value_array[2] = 25; d_value_array[3] = 32; d_value_array[4] = 28;
    }else if(d_constell == "��Ы��"){
        d_value_array[0] = 50;  d_value_array[1] = 25; d_value_array[2] = 40; d_value_array[3] = 18; d_value_array[4] = 17;
    }else if(d_constell == "������"){
        d_value_array[0] = 57;  d_value_array[1] = 31; d_value_array[2] = 15; d_value_array[3] = 19; d_value_array[4] = 20;
    }else if(d_constell == "ɽ����"){
        d_value_array[0] = 56;  d_value_array[1] = 21; d_value_array[2] = 16; d_value_array[3] = 25; d_value_array[4] = 23;
    }else if(d_constell == "ˮƿ��"){
        d_value_array[0] = 43;  d_value_array[1] = 43; d_value_array[2] = 20; d_value_array[3] = 23; d_value_array[4] = 17;
    }else if(d_constell == "˫����"){
        d_value_array[0] = 41;  d_value_array[1] = 21; d_value_array[2] = 29; d_value_array[3] = 23; d_value_array[4] = 32;
    }




    //��Ϸ��ѭ��:��1659��6�¿�ʼ��11�굽18������
    for(int year = 1659; year <= 1659+7; year++){
        for(int month = (year==1659) ? 6: 1; month <= 12; month++){
            cout << "��ǰʱ�䣺" <<  year << "��" << "-" << month << "�� " ;
            //�����������
            if(month == d_birth_month){
                cout << "����" << d_birth_day << "����С����" << daughter_name << "�����գ�Ҫ������������(y/n)";
                cin >> answer;
                if(answer == "y" || answer == "Y"){
                    cout << "����200�����˼����������" << endl;
                    srand(time(NULL));
                    //�������������ͳһ����0-15
                    for(int i = 0; i < 5; i++){
                        temp = rand() % 16;
                        cout << d_value_names[i] << "����" << temp << endl;
                        d_value_array[i] += temp;
                    }
                }
            }
            cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������" << endl;
            cin >> choice;
            switch(choice){
                case 1://�鿴״̬
                    cout << left;
                    cout << "�ţ��⺢�����ڵ�״��������" << endl;
                    cout << "������" << daughter_name << endl;
                    cout << "���գ�" << d_brith_year << '-' << d_birth_month << '-' << d_birth_day << endl;
                    cout << "������" << d_constell << endl;
                    cout << "���䣺" << year - 1659 + 11 << endl;
                    cout << "��Ǯ��" << d_value_gold << endl;

                    for(int i = 0; i < 5; i++){
                        cout << d_value_names[i] << "��" << setw(4) << d_value_array[i];
                        //�趨���Ե�ȡֵ���ֵΪ999
                        int solidCount =(int)((d_value_array[i]/99.0) * 10);//ʵ�ķ�������
                        for(int j = 0; j < 10; j++){
                            if(j < solidCount)
                                cout << "��";
                            else
                                cout << "��";
                        }
                        cout << endl;
                    }
                    break;
                case 2:{//�����г�
                    string month_value[] {"��Ѯ", "��Ѯ", "��Ѯ"};
                    int temp1, temp2, temp3;
                    //һ����ֻ���ۼ�ѡ3�Σ���ѡ����ƣ�Ͷ�>=90ʱ������������3���²����µ�~ƣ�Ͷ���Ҫ����)
                    for(int i = 0; i < 3; i++){
                        //���������������������¡�����
                        cout << month << "��" << month_value[i] << "��Ҫ����ʲô�أ�"<< endl;
                        cout << "1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ" << endl;
                        cout << "��ѡ��";
                        cin >> choice;
                        //�жϽ�Ǯ����ʱ��ǿ�ƴ�
                        if(d_value_gold <= 0 && (choice == 1 || choice == 2 || choice == 3 || choice == 4)){
                            cout << "��Ǯ������ǿ��ѡ���׬Ǯ��" << endl;
                            choice = 5;
                        }
                        srand(time(NULL));
                        switch(choice){
                            case 1://����        +���� +���� -��Ǯ   ���0-5֮��
                                d_value_array[0] += temp1 = rand() % 5;
                                d_value_array[2] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //��Ҽ�0-10֮��
                                cout << "վ����,������,����磡" << endl;
                                cout << "��ѧ����֮��" << d_value_names[0] << "����" << temp1
                                     << ", " << d_value_names[2] << "����" << temp2
                                     << ", ��Ǯ-" << temp3 << endl;
                                break;
                            case 2://ѧ��        +���� +���� -��Ǯ
                                d_value_array[1] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //��Ҽ�0-10֮��
                                cout << "֪֮Ϊ֪֮����֪Ϊ��֪����֪Ҳ��" << endl;
                                cout << "����ѧϰ֮��" << d_value_names[1] << "����" << temp1
                                     << ", " << d_value_names[4] << "����" << temp2
                                     << ", ��Ǯ-" << temp3 << endl;
                                break;
                            case 3://��        +���� +���� -��Ǯ
                                d_value_array[3] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //��Ҽ�0-10֮��
                                cout << "����������������������Ҳ���������������Ҳ��" << endl;
                                cout << "�����ж�֮��" << d_value_names[3] << "����" << temp1
                                     << ", " << d_value_names[4] << "����" << temp2
                                     << ", ��Ǯ-" << temp3 << endl;
                                break;
                            case 4://��������    +���� +���� -��Ǯ
                                d_value_array[0] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //��Ҽ�0-10֮��
                                cout << "��������������,���ó�Ϧ�����ǣ�" << endl;
                                cout << "������й�����" << d_value_names[0] << "����" << temp1
                                     << ", " << d_value_names[4] << "����" << temp2
                                     << ", ��Ǯ-" << temp3 << endl;
                                break;
                            case 5://�򹤣������+ƣ��
                                d_value_gold += temp1 = 50 + rand() % 51;       //�������50-100֮��
                                cout << "����ƶ������쳧������򹤣���Ǯ+" << temp1 << endl;
                                break;
                        }
                    }
                    break;
                }
                case 3:
                {//����̸��
                    int temp1, temp2;
                    cout << "1�����к�\n2�������˵��\n3�������ؽ���\n4��������Ǯ" << endl;
                    cin >> choice;
                    if(choice == 1 || choice == 2){
                        cout << "hi��" << daughter_name << "���������...." << endl;
                    }else if(choice == 3){
                        cout << "����" << father_name << "��Ů��" << daughter_name << "������һ�������Ľ�����" << endl;
                        d_value_array[3] = temp1 = rand() % 16;
                        cout << "����+" << temp1 << endl;
                    }else if(choice == 4){
                        srand(time(NULL));
                        cout << "������Ǯ500��" << endl;
                        //�������������ͳһ����10-25
                        for(int i = 0; i < 5; i++){
                            temp = 10 + rand() % 16;
                            cout << d_value_names[i] << "����" << temp << endl;
                            d_value_array[i] += temp;
                        }
                        d_value_gold -= 500;
                    }
                }
                    break;
                case 4://�浵
                    cout << "��δʵ��" << endl;
                    break;
                case 5://����
                    cout << "��δʵ��" << endl;
                    break;
                    //default:
            }


        }
        //cout << endl;
    }

    //��ʾ��Ϸ���
    int d_value_sum = 0;
    for(int i = 0; i < 5; i++){
        d_value_sum += d_value_array[i];
    }
    if(d_value_sum >= 2000){
        cout << "�����������ѧ������" << daughter_name << "���ڵ���Ů����λ��" << endl;
    }else if(d_value_sum >= 1800 && d_value_sum < 2000){
        cout << "����" << endl;
    }else if(d_value_sum >= 1600 && d_value_sum < 1800){
        cout << "Ů����" << endl;
    }else if(d_value_sum >= 1200 && d_value_sum < 1600){
        int maxIndex = 0;
        for(int i = 1; i < 5; i++){
            if(d_value_array[i - 1] < d_value_array[i]){
                maxIndex = i;
                break;//�ҵ����������±�
            }
        }
        //���������������������¡�����
        //��������1200-1600��������ߣ�������>����
        if(maxIndex == 1 && d_value_array[0] > d_value_array[1]){
            cout << "�ʼ�ѧԺ�ܲ�" << endl;
        }else if(maxIndex == 4 && d_value_array[2] > d_value_array[0]){//������ߣ�������>����
            cout << "����" << endl;
        }else if(maxIndex == 0 && d_value_array[4] > d_value_array[2]){//������ߣ�������>����
            cout << "������ʿ�ų�" << endl;
        }else if(maxIndex == 3 && d_value_array[2] > d_value_array[4]){//������ߣ�������>����
            cout << "�߼�����" << endl;
        }else if(maxIndex == 2 && d_value_array[4] > d_value_array[3]){//������ߣ�������>����
            cout << "�����ĳ���" << endl;
        }

    }else{
        array<string, 5> jobArray = {"ũ��", "ħ��ʦ", "��Ů", "����", "�ư�Ů��"};
        srand(time(NULL));
        int index = rand() % 5;
        cout << jobArray[index] << endl;
    }








    return 0;
}
