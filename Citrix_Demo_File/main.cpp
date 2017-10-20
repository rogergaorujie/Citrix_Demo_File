/*************************************************
 * 文件名：main.cpp
 * 创建人：老九学堂·窖头
 * 日  期：2017-3-16
 * 描  述：C++第一阶段项目《小公举养成记》
 * 修改人：someone
 * 日  期：someday
 * 版  本：1.0.0
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
    SetConsoleTitle("阶段案例：小公举养成记~可爱可以传染");
    //1、父亲姓名    2、女儿姓名
    string father_name = "Gates", daughter_name = "Luna";
    //3、女儿生日
    int d_brith_year = 1648, d_birth_month = 5, d_birth_day = 21;
    int d_value_array[5];//女儿的5个基本属性：体力、智力、魅力、道德、气质
    int d_value_gold = 500;    //初始资金
    string d_constell;          //女儿的星座
    //4、根据生日设置女儿的初始化属性
    string constellations[12][2] = {
        {"山羊座", "水瓶座"},
        {"水瓶座", "双鱼座"},
        {"双鱼座", "白羊座"},
        {"白羊座", "金牛座"},
        {"金牛座", "双子座"},
        {"双子座", "巨蟹座"},
        {"巨蟹座", "狮子座"},
        {"狮子座", "处女座"},
        {"处女座", "天秤座"},
        {"天秤座", "天蝎座"},
        {"天蝎座", "射手座"},
        {"射手座", "山羊座"},
    };
    //水瓶座开始，每个星座在各月的第一天日期
    int constell_date[] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    d_constell = constellations[d_birth_month-1][d_birth_day/constell_date[d_birth_month-1]];
    string d_value_names[] {"体力", "智力", "魅力", "道德", "气质"};

    string answer;
    int choice, temp;
    int count = 0;  //计数器

    /****************************************************************/
    cout << "请输入父亲的名字：" ;
    cin >> father_name;
    cout << "请输入女儿的名字：";
    cin >> daughter_name;
    cout << "女儿生日(MM/DD)：";
    cin >> d_birth_month >> d_birth_day; //生日数字的合法性需要自行判断
    cout << "\n公元1659年，勇者" << father_name << "收养了小女孩" << daughter_name << endl;
    cout << "女儿详细信息：" << endl;
    cout << left;
    cout << "姓名：" << daughter_name << endl;
    cout << "生日：" << d_brith_year << '-' << d_birth_month << '-' << d_birth_day << endl;
    cout << "星座：" << d_constell << endl;
    cout << "年龄：" << 11 << "岁" << endl;
    cout << "金钱：" << d_value_gold << endl;
    cout << "*********游戏开始*********\n" << endl;

    /***************************************************************/



    if(d_constell == "白羊座"){
        d_value_array[0] = 80;  d_value_array[1] = 15; d_value_array[2] = 15; d_value_array[3] = 11; d_value_array[4] = 21;
    }else if(d_constell == "金牛座"){
        d_value_array[0] = 46;  d_value_array[1] = 30; d_value_array[2] = 28; d_value_array[3] = 20; d_value_array[4] = 29;
    }else if(d_constell == "双子座"){
        d_value_array[0] = 50;  d_value_array[1] = 35; d_value_array[2] = 23; d_value_array[3] = 8;  d_value_array[4] = 20;
    }else if(d_constell == "巨蟹座"){
        d_value_array[0] = 40;  d_value_array[1] = 31; d_value_array[2] = 33; d_value_array[3] = 17; d_value_array[4] = 33;
    }else if(d_constell == "狮子座"){
        d_value_array[0] = 85;  d_value_array[1] = 9 ; d_value_array[2] = 11; d_value_array[3] = 20; d_value_array[4] = 37;
    }else if(d_constell == "处女座"){
        d_value_array[0] = 35;  d_value_array[1] = 28; d_value_array[2] = 36; d_value_array[3] = 18; d_value_array[4] = 40;
    }else if(d_constell == "天秤座"){
        d_value_array[0] = 42;  d_value_array[1] = 33; d_value_array[2] = 25; d_value_array[3] = 32; d_value_array[4] = 28;
    }else if(d_constell == "天蝎座"){
        d_value_array[0] = 50;  d_value_array[1] = 25; d_value_array[2] = 40; d_value_array[3] = 18; d_value_array[4] = 17;
    }else if(d_constell == "射手座"){
        d_value_array[0] = 57;  d_value_array[1] = 31; d_value_array[2] = 15; d_value_array[3] = 19; d_value_array[4] = 20;
    }else if(d_constell == "山羊座"){
        d_value_array[0] = 56;  d_value_array[1] = 21; d_value_array[2] = 16; d_value_array[3] = 25; d_value_array[4] = 23;
    }else if(d_constell == "水瓶座"){
        d_value_array[0] = 43;  d_value_array[1] = 43; d_value_array[2] = 20; d_value_array[3] = 23; d_value_array[4] = 17;
    }else if(d_constell == "双鱼座"){
        d_value_array[0] = 41;  d_value_array[1] = 21; d_value_array[2] = 29; d_value_array[3] = 23; d_value_array[4] = 32;
    }




    //游戏主循环:从1659年6月开始，11岁到18岁的年底
    for(int year = 1659; year <= 1659+7; year++){
        for(int month = (year==1659) ? 6: 1; month <= 12; month++){
            cout << "当前时间：" <<  year << "年" << "-" << month << "月 " ;
            //如果是生日月
            if(month == d_birth_month){
                cout << "本月" << d_birth_day << "日是小公举" << daughter_name << "的生日，要送生日礼物吗？(y/n)";
                cin >> answer;
                if(answer == "y" || answer == "Y"){
                    cout << "花费200金买了件精美的礼物！" << endl;
                    srand(time(NULL));
                    //送礼物各项属性统一增加0-15
                    for(int i = 0; i < 5; i++){
                        temp = rand() % 16;
                        cout << d_value_names[i] << "增加" << temp << endl;
                        d_value_array[i] += temp;
                    }
                }
            }
            cout << "\n1、查看状态\n2、安排行程\n3、亲子谈话\n4、存档\n5、读档" << endl;
            cin >> choice;
            switch(choice){
                case 1://查看状态
                    cout << left;
                    cout << "嗯，这孩子现在的状况。。。" << endl;
                    cout << "姓名：" << daughter_name << endl;
                    cout << "生日：" << d_brith_year << '-' << d_birth_month << '-' << d_birth_day << endl;
                    cout << "星座：" << d_constell << endl;
                    cout << "年龄：" << year - 1659 + 11 << endl;
                    cout << "金钱：" << d_value_gold << endl;

                    for(int i = 0; i < 5; i++){
                        cout << d_value_names[i] << "：" << setw(4) << d_value_array[i];
                        //设定属性的取值最大值为999
                        int solidCount =(int)((d_value_array[i]/99.0) * 10);//实心方块数量
                        for(int j = 0; j < 10; j++){
                            if(j < solidCount)
                                cout << "■";
                            else
                                cout << "□";
                        }
                        cout << endl;
                    }
                    break;
                case 2:{//安排行程
                    string month_value[] {"上旬", "中旬", "下旬"};
                    int temp1, temp2, temp3;
                    //一个月只能累计选3次，（选做：疲劳度>=90时会生病，至少3个月不能下地~疲劳度需要定义)
                    for(int i = 0; i < 3; i++){
                        //体力、智力、魅力、道德、气质
                        cout << month << "月" << month_value[i] << "，要做点什么呢？"<< endl;
                        cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
                        cout << "请选择：";
                        cin >> choice;
                        //判断金钱不够时：强制打工
                        if(d_value_gold <= 0 && (choice == 1 || choice == 2 || choice == 3 || choice == 4)){
                            cout << "金钱不够！强制选择打工赚钱！" << endl;
                            choice = 5;
                        }
                        srand(time(NULL));
                        switch(choice){
                            case 1://武艺        +体力 +魅力 -金钱   随机0-5之间
                                d_value_array[0] += temp1 = rand() % 5;
                                d_value_array[2] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //金币减0-10之间
                                cout << "站如松,坐如钟,行如风！" << endl;
                                cout << "勤学苦练之后，" << d_value_names[0] << "增加" << temp1
                                     << ", " << d_value_names[2] << "增加" << temp2
                                     << ", 金钱-" << temp3 << endl;
                                break;
                            case 2://学问        +智力 +气质 -金钱
                                d_value_array[1] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //金币减0-10之间
                                cout << "知之为知之，不知为不知，是知也！" << endl;
                                cout << "认真学习之后，" << d_value_names[1] << "增加" << temp1
                                     << ", " << d_value_names[4] << "增加" << temp2
                                     << ", 金钱-" << temp3 << endl;
                                break;
                            case 3://礼法        +道德 +气质 -金钱
                                d_value_array[3] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //金币减0-10之间
                                cout << "礼尚往来，往而不来非礼也；来而不往亦非礼也！" << endl;
                                cout << "认真诵读之后，" << d_value_names[3] << "增加" << temp1
                                     << ", " << d_value_names[4] << "增加" << temp2
                                     << ", 金钱-" << temp3 << endl;
                                break;
                            case 4://出城修行    +体力 +智力 -金钱
                                d_value_array[0] += temp1 = rand() % 5;
                                d_value_array[4] += temp2 = rand() % 5;
                                d_value_gold -= temp3 = rand() % 10;       //金币减0-10之间
                                cout << "人生由来不满百,安得朝夕事隐忧！" << endl;
                                cout << "外出修行归来，" << d_value_names[0] << "增加" << temp1
                                     << ", " << d_value_names[4] << "增加" << temp2
                                     << ", 金钱-" << temp3 << endl;
                                break;
                            case 5://打工（随机）+疲劳
                                d_value_gold += temp1 = 50 + rand() % 51;       //金币增加50-100之间
                                cout << "惰是贫穷的制造厂！外出打工，金钱+" << temp1 << endl;
                                break;
                        }
                    }
                    break;
                }
                case 3:
                {//亲子谈话
                    int temp1, temp2;
                    cout << "1、打招呼\n2、温柔地说话\n3、严厉地教育\n4、给零用钱" << endl;
                    cin >> choice;
                    if(choice == 1 || choice == 2){
                        cout << "hi，" << daughter_name << "今天吃了吗？...." << endl;
                    }else if(choice == 3){
                        cout << "父亲" << father_name << "对女儿" << daughter_name << "进行了一番严厉的教育！" << endl;
                        d_value_array[3] = temp1 = rand() % 16;
                        cout << "道德+" << temp1 << endl;
                    }else if(choice == 4){
                        srand(time(NULL));
                        cout << "给零用钱500！" << endl;
                        //送礼物各项属性统一增加10-25
                        for(int i = 0; i < 5; i++){
                            temp = 10 + rand() % 16;
                            cout << d_value_names[i] << "增加" << temp << endl;
                            d_value_array[i] += temp;
                        }
                        d_value_gold -= 500;
                    }
                }
                    break;
                case 4://存档
                    cout << "暂未实现" << endl;
                    break;
                case 5://读档
                    cout << "暂未实现" << endl;
                    break;
                    //default:
            }


        }
        //cout << endl;
    }

    //显示游戏结果
    int d_value_sum = 0;
    for(int i = 0; i < 5; i++){
        d_value_sum += d_value_array[i];
    }
    if(d_value_sum >= 2000){
        cout << "经过多年的勤学苦练，" << daughter_name << "终于登上女王大位！" << endl;
    }else if(d_value_sum >= 1800 && d_value_sum < 2000){
        cout << "王妃" << endl;
    }else if(d_value_sum >= 1600 && d_value_sum < 1800){
        cout << "女将军" << endl;
    }else if(d_value_sum >= 1200 && d_value_sum < 1600){
        int maxIndex = 0;
        for(int i = 1; i < 5; i++){
            if(d_value_array[i - 1] < d_value_array[i]){
                maxIndex = i;
                break;//找到最大的属性下标
            }
        }
        //体力、智力、魅力、道德、气质
        //属性总数1200-1600，智力最高，且体力>智力
        if(maxIndex == 1 && d_value_array[0] > d_value_array[1]){
            cout << "皇家学院总裁" << endl;
        }else if(maxIndex == 4 && d_value_array[2] > d_value_array[0]){//气质最高，且魅力>体力
            cout << "公主" << endl;
        }else if(maxIndex == 0 && d_value_array[4] > d_value_array[2]){//体力最高，且气质>魅力
            cout << "近卫骑士团长" << endl;
        }else if(maxIndex == 3 && d_value_array[2] > d_value_array[4]){//道德最高，且魅力>气质
            cout << "高级祭祀" << endl;
        }else if(maxIndex == 2 && d_value_array[4] > d_value_array[3]){//魅力最高，且气质>道德
            cout << "国王的宠妃" << endl;
        }

    }else{
        array<string, 5> jobArray = {"农妇", "魔法师", "修女", "作家", "酒吧女郎"};
        srand(time(NULL));
        int index = rand() % 5;
        cout << jobArray[index] << endl;
    }








    return 0;
}
