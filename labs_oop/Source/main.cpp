#include <iostream>
#include <locale>
#include "FirstTaskClasses/classesFirstTask.hpp"
#include "SecondTaskClasses/classesSecondTask.hpp"

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
//    std::cout<<"Введите сначала число х, затем е1 и затем е2: ";
//        double x = GetValueDouble("Неверно введенное число, повторите попытку");
//        double e1 = GetValueDouble("Неверно введенное число, повторите попытку");
//        double e2 = GetValueDouble("Неверно введенное число, повторите попытку");
//
//        FuzzyNumber First(x,e1,e2);
//        FuzzyNumber Second(First);
//        FuzzyNumber Third = First + Second;
//        Third = Third / First;
//        First = Second*Third;
//        Second = Third - First;
//        Second = Third;
//    FuzzyNumber Fourth;
//    std::cout<<"Введите значение нового элемента\n";
//    std::cin>>Fourth;
//    std::cout<<Fourth;
//    std::cout<<First;
//    std::cout<<Second;
//    std::cout<<Third;
//    if (Fourth==Fourth) {
//        std::cout<<"=";
//    }
//    else{
//        std::cout<<"!=";
//    }
//    if (Fourth==Third) {
//        std::cout<<"=";
//    }
//    else{
//        std::cout<<"!=";
//    }
//    if (Fourth!=Fourth) {
//        std::cout<<"!=";
//    }
//    else{
//        std::cout<<"==";
//    }
//    if (Fourth!=Third) {
//        std::cout<<"!=";
//    }
//    else{
//        std::cout<<"==";
//    }
}







int main() {
    int num;
    cout<<"Введите номер задания:1,2: ";
    num = GetValueInt("Неверно введенное число, повторите попытку");
        switch (num) {
            case 1:
                FirstTask();
                break;
            case 2:
                SecondTask();
            default:
                break;
        }
    
    
    return 0;
}
