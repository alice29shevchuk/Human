#include <iostream>
#include"Human.h"
#include"Student.h"
#include"School.h"
#include"Worker.h"
int main()
{
    setlocale(0, "");
    char name[100];
    std::cout << "Введите имя: ";
    gets_s(name);
    int age;
    std::cout << "Введите возраст: ";
    std::cin >> age;
    Human human(name, age);
    std::cout << "\nВыберите кем является данный человек:\n";
    int ch;
    do
    {
        std::cout << "Меню:\n";
        std::cout << "1 - Студент\n";
        std::cout << "2 - Школьник\n";
        std::cout << "3 - Работник\n";
        std::cout << "4 - Изменить данные о человеке\n";
        std::cout << "0 - Выход\n";
        std::cout << "\nВаш выбор: ";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
        {
            system("cls");
            std::cout << "СТУДЕНТ!\n";
            double stipendia;
            std::cout << "Введите стипендию: ";
            std::cin >> stipendia;
            Student student(name, age, stipendia);
            std::cout << "\n";
            student.Print();
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "ШКОЛЬНИК!\n";
            char homework[100];
            std::cout << "Введите задано ли домашнее задание (Y - да, N - нет): ";
            std::cin >> homework;
            School school(name, age, homework);
            std::cout << "\n";
            if (_stricmp(homework, "y")==0)
            {
                school.Print();
                std::cout << "задано!\n";
            }
            else
            {
                school.Print();
                std::cout << "не задано!\n";
            }
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            system("cls");
            std::cout << "РАБОТНИК!\n";
            double salary;
            std::cout << "Введите зарплату: ";
            std::cin >> salary;
            Worker worker(name, age, salary);
            std::cout << "\n";
            worker.Print();
            system("pause");
            system("cls");
            break;
        }
        case 4:
            system("cls");
            std::cout << "Введите имя: ";
            std::cin.ignore();
            std::cin.getline(name, 100);
            human.SetName(name);
            std::cout << "Введите возраст: ";
            std::cin >> age;
            human.SetAge(age);
            break;
        }
    } while (ch != 0);
    std::cout << "Вы вышли!";
}

