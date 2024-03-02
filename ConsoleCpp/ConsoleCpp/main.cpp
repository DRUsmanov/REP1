#include <iostream>
#include <string>
#include <string.h>

using namespace std;

//Цикл if-else
//if () {}
//else if () {}
//else();
//if(||) - условие или то или то
//if(&&) - условие и то и то

//Цикл switch-case - проверка переменной на точное совпадение
//switch(){
//case 5:действие; break;
// default:действие;
//}

//Случайное число от до
//1+rand()%число

//Ссылки и указатели
//*num=new int[3] - указатель на массив
//delete num[] - удаление из памяти на массив

//void name(int a) {
//
//}

//int name(int a, int b) {
//    return a + b;
//}

//Указатели
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
    
    Building school(2000,"Школа");
    //school.st_data(2000, "Школа");
    ///*school.type = "Школа";
    //school.year = 2000;*/
    school.get_info();

    Building house(2010,"Дом");
    house.st_data(2010, "Дом");
    /*school.type = "Дом";
    school.year = 2010;*/
    house.get_info();

	return 0;
}


