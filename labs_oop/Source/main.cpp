#include <iostream>
#include <locale>
#include "FirstTaskClasses/classesFirstTask.hpp"
#include "SecondTaskClasses/classesSecondTask.hpp"
#include "ThirdTaskClasses/classesThirdTask.hpp"

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
    std::string a="",b="",symb;
    std::string a_fract="0",b_fract="0";
    bool flag = false;
    for (int i =0; i<str.length(); ++i) {
        bool flag_fract_a = false, flag_fract_b = false;
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || flag == true){

            if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
                symb = str[i];
            if(flag == false)
                flag = true;
            if(str[i] == '.' || str[i] == ','){
                b="";
                flag_fract_b = true;
            }
            if (flag_fract_b == true) {
                b_fract+=str[i];
            }
            else
                if(str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')
                    b+=str[i];
        }
        else{
            if(str[i] == '.' || str[i] == ','){
                flag_fract_a = true;
                a = "";
            }
            if (flag_fract_a == true) {
                a_fract+=str[i];
            }
            else
                a+=str[i];
        }

    }
    Fraction one(stoi(a),stoi(a_fract));
    Fraction two(stoi(b),stoi(b_fract));
    Calculator First(one,symb,two);
    First.operations();
    std::cout<<First;
//    Fraction First(1,10);
//    Fraction Second(2,10);
//    First = Second;
//    std::cout<<First;
}






int main() {
//    int num;
//    cout<<"Введите номер задания:1,2,3: ";
//    num = GetValueInt("Неверно введенное число, повторите попытку");
//        switch (num) {
//            case 1:
//                FirstTask();
//                break;
//            case 2:
//                SecondTask();
//            case 3:
//                ThirdTask();
//            default:
//                break;
//        }
//
    ThirdTask();
    
    return 0;
}


//лаптев: №44 стр 26
