#include <iostream>
#include <string>
#include <string.h>

using namespace std;

//���� if-else
//if () {}
//else if () {}
//else();
//if(||) - ������� ��� �� ��� ��
//if(&&) - ������� � �� � ��

//���� switch-case - �������� ���������� �� ������ ����������
//switch(){
//case 5:��������; break;
// default:��������;
//}

//��������� ����� �� ��
//1+rand()%�����

//������ � ���������
//*num=new int[3] - ��������� �� ������
//delete num[] - �������� �� ������ �� ������

//void name(int a) {
//
//}

//int name(int a, int b) {
//    return a + b;
//}

//���������
// int num = 10;
//int &a = num;

class Building {

private:
    int year;
    string type;

public:
    Building(int y, string t) {
        year = y;
        type = t;
    }
    void st_data(int y, string t) {
        year = y;
        type = t;
    }

    void get_info() {
        cout << "Type: " << type << ". Year:" << year << endl;
    }
};

int main() {
	setlocale(LC_ALL, "RU");
    
    Building school(2000,"�����");
    //school.st_data(2000, "�����");
    ///*school.type = "�����";
    //school.year = 2000;*/
    school.get_info();

    Building house(2010,"���");
    house.st_data(2010, "���");
    /*school.type = "���";
    school.year = 2010;*/
    house.get_info();

	return 0;
}


