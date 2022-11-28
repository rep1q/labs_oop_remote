#include <iostream>
#include <locale>
#include <ctime>
#include "classesFirstTask.hpp"
#include "classesSecondTask.hpp"
#include "classesThirdTask.hpp"
#include "Pair.hpp"
#include "Rational.hpp"
#include "NewPair.hpp"
#include "NewFraction.hpp"
#include "NewFuzzyNumber.hpp"
#include "List.hpp"

using namespace std;


int GetValueInt(const string& error)
{
    while (true)
    {
        int value;
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(235432, '\n');
            cout << error << '\n';
        }
        else
        {
            cin.ignore();
            return value;
        }
    }
}

int GetValueDouble(const string& error)
{
    while (true)
    {
        double value;
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(235432, '\n');
            cout << error << '\n';
        }
        else
        {
            cin.ignore();
            return value;
        }
    }
}

void FirstTask(){
    cout<<"Введите координаты по Х и У: ";
    int coordinates_X = GetValueInt("Неверно введенное число, повторите попытку");
    int coordinates_Y = GetValueInt("Неверно введенное число, повторите попытку");
    cout<<"\nВведите размер: ";
    int size = GetValueInt("Неверно введенное число, повторите попытку");
    cout<<"\nВведите два значения: вид и видимость курсора, где(0 - горизонтальный/невидимый, а 1 - вертикальный - видимый): ";
    bool view, visible;
    cin>>view>>visible;
    Cursor Cursor(coordinates_X,coordinates_Y,size,view,visible);
    
    if(size>=1 && size<=15 && size){

        Cursor.SetViewAndVisible(view, visible);
        cout<<"Выберите что вы желаете сделать:\n1 - сместить курсор\n2 - увеличить/уменьшить размер\n3 - изменить вид\n4 - изменить видимость\n5 - Завершить программу и увидеть результат:\n";
        int x;
        cin>>x;
        while(x!=5)
            switch (x) {
                case 1:
                    cout<<"Введите смещение сначала по х, потом по у: ";
                    int x1,y1;
                    cin>>x1>>y1;
                    Cursor.ChangeXnY(x1, y1);
                    cout<<"\nВыберите что вы желаете сделать:\n1 - сместить курсор\n2 - увеличить/уменьшить размер\n3 - изменить вид\n4 - изменить видимость\n5 - Завершить программу и увидеть результат:\n";
                    cin>>x;
                    break;
                case 2:
                    cout<<"Введите Изменение размера: ";
                    int sz;
                    cin>>sz;
                    Cursor.ChangeSize(sz);
                    cout<<"\nВыберите что вы желаете сделать:\n1 - сместить курсор\n2 - увеличить/уменьшить размер\n3 - изменить вид\n4 - изменить видимость\n5 - Завершить программу и увидеть результат:\n";
                    cin>>x;
                    break;
                case 3:
                    cout<<"Введите желаемый вид курсора, где 0 - горизонтальный, а 1 - вертикальный: ";
                    bool vw;
                    cin>>vw;
                    Cursor.ChangeView(vw);
                    cout<<"\nВыберите что вы желаете сделать:\n1 - сместить курсор\n2 - увеличить/уменьшить размер\n3 - изменить вид\n4 - изменить видимость\n5 - Завершить программу и увидеть результат:\n";
                    cin>>x;
                    break;
                case 4:
                    cout<<"Введите желаемый вид курсора, где 0 - невидимый, а 1 - видимый: ";
                    bool vb;
                    cin>>vb;
                    Cursor.ChangeVisible(vb);
                    cout<<"\nВыберите что вы желаете сделать:\n1 - сместить курсор\n2 - увеличить/уменьшить размер\n3 - изменить вид\n4 - изменить видимость\n5 - Завершить программу и увидеть результат:\n";
                    cin>>x;
                    break;
                default:
                    cout<<"Некорректное значение";
                    break;
            }
    }
    else
        cout<<"Размер введен некорректно\n";
    cout<<Cursor.toString();
}







void SecondTask(){
    std::cout<<"Введите сначала число х, затем е1 и затем е2: ";
    //        double x = GetValueDouble("Неверно введенное число, повторите попытку");
    //        double e1 = GetValueDouble("Неверно введенное число, повторите попытку");
    //        double e2 = GetValueDouble("Неверно введенное число, повторите попытку");
    double x,e1,e2;
    cin>>x>>e1>>e2;

        FuzzyNumber First(x,e1,e2);
    cin>>x>>e1>>e2;
        FuzzyNumber Second(x,e1,e2);
    std::cout<<"First = "<<First<<"Second = "<<Second;
    std::cout<<First - Second<<"\n";
    std::cout<<"First "<<First<<" = "<<"Second "<<Second<<"\nThird = First + Second = ";
        FuzzyNumber Third = First + Second;
    std::cout<<Third<<"\nThird /= First = ";
        Third = Third / First;
    std::cout<<Third<<"\nFirst = Second*Third = ";
        First = Second*Third;
    std::cout<<First<<"\nSecond = Third - First = ";
        Second = Third - First;
    std::cout<<Second<<"\nSecond = Third = ";
        Second = Third;
    std::cout<<Second<<"\n";
    FuzzyNumber Fourth;
    std::cout<<"Введите значение нового элемента Fourth\n";
    std::cin>>Fourth;
    std::cout<<"First = "<<First<<"\n";
    std::cout<<"Second = "<<Second<<"\n";
    std::cout<<"Third = "<<Third<<"\n";
    std::cout<<"Fourth = "<<Fourth<<"\n";
    if (Fourth==Fourth) {
        std::cout<<Fourth<<" Fourth == Fourth "<<Fourth;
    }
    else{
        std::cout<<Fourth<<" Fourth != Fourth "<<Fourth;
    }
    if (Fourth==Third) {
        std::cout<<Fourth<<" Fourth == Third "<<Third;
    }
    else{
        std::cout<<Fourth<<" Fourth != Third "<<Third;
    }
    if (Fourth!=Fourth) {
        std::cout<<Fourth<<" Fourth != Fourth "<<Fourth;
    }
    else{
        std::cout<<Fourth<<" Fourth == Fourth "<<Fourth;
    }
    if (Fourth!=Third) {
        std::cout<<Fourth<<" Fourth != Third "<<Third;
    }
    else{
        std::cout<<Fourth<<" Fourth == Third "<<Third;
    }
}


void ThirdTask(){
    std::string str;
    std::cout<<"Введите арифметичекское выражение: ";
    cin>>str;
    Calculator First(str);
    std::cout<<str<<" = "<<First<<"\n";
}


void FourthTask(){
    std::string str ="";
    int a, b;
    std::cout<<"\nВведите первую пару: ";
    a = GetValueInt("Erorr");
    b = GetValueInt("Erorr");
    Pair First(a,b);
    std::cout<<"\nВведите вторую пару: ";
    a = GetValueInt("Erorr");
    b = GetValueInt("Erorr");
    Pair Second(a,b);
    Pair res = First - Second;
    std::cout<<"\n"<<res<<"\nВведите первую дробную пару: ";
    Rational one(3,2);
    Rational two(1,3);
    std::cout<<"\nВведите вторую пару: ";
    Rational three(1,2);
    Rational four(2,3);
    Pair* res_one = one * three;
    Rational* p = (Rational*)res_one;
    Pair* res_two = two * four;
    Rational* p2 = (Rational*)res_two;//dynamic_cast
    std::cout<<"\n( "<<*p<<", "<<*p2<<")\n";
    
}

void FifthTask(){
    int n;
    std::cout<<"Введите что желаете сделать:\n1. Ввести значения и провести операции над Fraction\n2. Ввести значения и провести операции над FuzzyNumber\n";
    std::cin>>n;
    while(n!=1 && n!= 2){
        std::cout<<"Ошибка ввода, повторите попытку:\n";
        cin>>n;
    }
    if(n==1){
        std::cout<<"Введите значения первой дроби(cначала целую часть, потом десятичную): ";
        int num,num_fract;
        cin>>num>>num_fract;
        NewPair* a = new NewFraction(num,num_fract);
        std::cout<<"Введите значения второй дроби(cначала целую часть, потом десятичную): ";
        cin>>num>>num_fract;
        NewPair* b = new NewFraction(num,num_fract);
        NewPair* c = new NewFraction;
        a->print();
        b->print();
        std::cout<<"Result:\n";
        c->mul(a, b);
        c->del(a, b);
        c->summ(a, b);
        c->minus(a, b);
        delete a;
        delete b;
        delete c;
    }else if (n==2){
        std::cout<<"Введите значения первого FuzzyNumber(cначала е1 часть, потом х, потом е2 часть): ";
        double e11,x1,e21;
        cin>>e11>>x1>>e21;
        NewPair* d = new NewFuzzyNumber(e11,x1,e21);
        std::cout<<"Введите значения первого FuzzyNumber(cначала е1 часть, потом х, потом е2 часть): ";
        double e12,x2,e22;
        cin>>e12>>x2>>e22;
        NewPair* e = new NewFuzzyNumber(e12,x2,e22);
        NewPair* f = new NewFuzzyNumber;
        std::cout<<"Первый FuzzyNumber: ("<<e11<<", "<<x1<<", "<<e21<<" )\nВторой FuzzyNumber: ("<<e12<<", "<<x2<<", "<<e22<<" )\nResult:\n";
        f->summ(d, e);
        f->minus(d, e);
        f->mul(d, e);
        f->del(d,e);
        
        delete d;
        delete e;
        delete f;
    }
}

void SixTask(){
    List<int> list1, list2, list3;
    int n, n1, n2, x;
    std::cout << "способ задания списка\n    1 - Заполнение случайными числами\n    2 - Ввод с клавиатуры\n";
    std::cin >> n1;
    while (n1 < 1 || n1 > 2) {
        std::cout << "Ошибкa, повторите попытку\n";
        std::cin >> n1;
    }
    std::cout << "Введите кол-во эллементов списка: ";
    std::cin >> n;
    while (n < 1) {
        std::cout << "Ошибка, повторите попытку: ";
        std::cin >> n;
    }
    switch (n1) {
    case 1:
        for (int i = 0; i < n; i++)
            list1.push_back(-10 + rand() % 21);
        break;
    case 2:
        std::cout << "Введите элементы списка: ";
        for (int i = 0; i < n; i++) {
            std::cin >> n2;
            list1.push_back(n2);
        }
        break;
    }
//    while (n!=7) {
        std::cout << "\nСписок " << list1.print() << "\n\n";
        Iterator<int> it1(nullptr);
        Iterator<int> it2(nullptr);
        Iterator<int> it3(nullptr);
        Iterator<int> it4(nullptr);
        std::cout << "    1 - добавление группы элементов\n    2 -  Удаление группы элементов\n    3 - Замена группы элементов\n    4 -  поиск группы элементов\n    5 - объединение списков\n    6 - пересечение списков\n    7 - завершить программу\n";
        std::cin >> n;
        while (n < 1 || n > 7) {
            std::cout << "Ошибка, повторите попытку: ";
            std::cin >> n;
        }
        switch (n) {
            case 1:
                std::cout << "Введите количество элементов которые добавить\n";
                std::cin >> n1;
                while (n1 < 1) {
                    std::cout << "Ошибка, повторите попытку: \n";
                    std::cin >> n1;
                }
                std::cout << "Введите элементы: ";
                for (int i = 0; i < n1; i++) {
                    std::cin >> x;
                    list2.push_back(x);
                }
                std::cout << "Введите id элемента, после которого добавить группу: \n";
                std::cin >> n2;
                while (n2 < 0 || n2 > list1.size()) {
                    std::cout << "Ошибка, повторите попытку: \n";
                    std::cin >> n2;
                }
                it1 = list1.begin();
                it2 = list2.begin();
                it3 = list2.begin();
                if (n2 == 0) {
                    list1.addToHead(it2);
                    it1 = list1.begin();
                    ++it2;
                }
                it1.advance(n2 - 1);
                it3.advance(n1 - 1);
                list1.addGroup(it1, it2, it3);
                std::cout << "\nСписок " << list1.print() << "\n\n";
                break;
            case 2:
                std::cout << "Введите два id(начало и конец): ";
                std::cin >> n1 >> n2;
                while (n1 > n2 || n1 > list1.size() || n1 < 1) {
                    std::cout << "Ошибка, повторите попытку: ";
                    std::cin >> n1 >> n2;
                }
                it1 = list1.begin();
                it2 = list1.begin();
                it1.advance(n1 - 1);
                it2.advance(n2 - 1);
                list1.delGroup(it1, it2);
                std::cout << "\nСписок " << list1.print() << "\n\n";
                break;
            case 3:
                std::cout << "Введите два id(начало и конец): ";
                std::cin >> n1 >> n2;
                while (n1 > n2 || n1 > list1.size() || n1 < 1) {
                    std::cout << "Ошибка, повторите попытку: ";
                    std::cin >> n1 >> n2;
                }
                std::cout << "Введите новые значение элементов: ";
                for (int i = 0; i < n2 - n1 + 1; i++) {
                    std::cin >> x;
                    list2.push_back(x);
                }
                it1 = list1.begin();
                it2 = list1.begin();
                it3 = list2.begin();
                it4 = list2.begin();
                it1.advance(n1 - 1);
                it2.advance(n2 - 1);
                it4.advance(n2 - n1);
                list1.editGroup(it1, it2, it3, it4);
                std::cout << "\nСписок " << list1.print() << "\n\n";
                break;
            case 4:
                std::cout << "Кол-во искомых элементов: \n";
                std::cin >> n1;
                while (n1 < 1) {
                    std::cout << "Ошибка, повторите попытку: \n";
                    std::cin >> n1;
                }
                std::cout << "Введите элементы: ";
                for (int i = 0; i < n1; i++) {
                    std::cin >> x;
                    list2.push_back(x);
                }
                
                if (n1 == 1) {
                    it1 = list1.begin();
                    it2 = list1.begin();
                    it2.advance(list1.size() - 1);
                    it3 = list1.search(x, it1, it2);
                }
                else {
                    it1 = list2.begin();
                    it2 = list2.begin();
                    it2.advance(n1 - 1);
                    it3 = list1.searchGroup(it1, it2);
                }
                if (it3 != NULL) {
                    it4 = list1.begin();
                    n2 = 1;
                    while (it3 != it4) {
                        ++it4;
                        n2++;
                    }
                    std::cout << "Искомая группа начинается с " << n2 << " id\n";
                }
                else {
                    std::cout << "Не найдено\n";
                }
                std::cout << "\nСписок " << list1.print() << "\n\n";
                break;
            case 5:
                std::cout << "способ задания списка\n    1 - Заполнение случайными числами\n    2 - Ввод с клавиатуры\n";
                std::cin >> n1;
                while (n1 < 1 || n1 > 2) {
                    std::cout << "Ошибка, повторите попытку: ";
                    std::cin >> n1;
                }
                std::cout << "Введите кол-во элементов: ";
                std::cin >> n2;
                while (n2 < 1) {
                    std::cout << "Ошибка, повторите попытку: ";
                    std::cin >> n2;
                }
                switch (n1) {
                    case 1:
                        for (int i = 0; i < n2; i++)
                            list2.push_back(-10 + rand() % 21);
                        break;
                    case 2:
                        std::cout << "Введите элементы списка: ";
                        for (int i = 0; i < n2; i++) {
                            std::cin >> x;
                            list2.push_back(x);
                        }
                        break;
                }
                std::cout << "Первый список " << list1.print() << "Второй список " << list2.print() << "\n\n";
                list3.combine(list1, list2);
                std::cout << "Объединение списков " << list3.print() << '\n';
                break;
            case 6:
                std::cout << "способ задания списка\n    1 - Заполнение случайными числами\n    2 - Ввод с клавиатуры\n";
                std::cin >> n1;
                while (n1 < 1 || n1 > 2) {
                    std::cout << "Ошибка, повторите попытку: \n";
                    std::cin >> n1;
                }
                std::cout << "Введите кол-во элементов списка: ";
                std::cin >> n2;
                while (n2 < 1) {
                    std::cout << "Ошибка, повторите попытку: ";
                    std::cin >> n2;
                }
                switch (n1) {
                    case 1:
                        for (int i = 0; i < n2; i++)
                            list2.push_back(-10 + rand() % 21);
                        break;
                    case 2:
                        std::cout << "Введите элементы списка: ";
                        for (int i = 0; i < n2; i++) {
                            std::cin >> x;
                            list2.push_back(x);
                        }
                        break;
                }
                std::cout << "Первый спискок " << list1.print() << "Второй список " << list2.print() << "\n\n";
                list3.intersection(list1, list2);
                std::cout << "Пересечение списков " << list3.print() << '\n';
                break;
//            case 7:
//                break;
//        }
        
    }
}

int main() {
    srand(time(NULL));
    int num;
    cout<<"Введите номер задания:1,2,3,4,5,6: ";
    num = GetValueInt("Неверно введенное число, повторите попытку");
        switch (num) {
            case 1:
                FirstTask();
                break;
            case 2:
                SecondTask();
                break;
            case 3:
                ThirdTask();
                break;
            case 4:
                FourthTask();
                break;
            case 5:
                FifthTask();
                break;
            case 6:
                SixTask();
            default:
                break;
        }

    return 0;
}


//5:лаптев: №78 стр 67
//6: №16 стр 125
