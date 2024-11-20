#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num1{0}, num2{0};
        char operation;
        cout << "Введите два числа по примеру 2 + 2 (не больше одного действия)\nДля выхода нажмите ctrl + c\n";
        cin >> num1 >> operation >> num2;
        switch (operation)
        {
        case '+':
            cout << "Ответ: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Ответ: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Ответ: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Делить на ноль нельзя, попробуйте ещё раз\n";
                continue;
            }
            cout << "Ответ: " << num1 / num2 << endl;
            break;
        default:
            cout << "неверная операция, попробуйте ещё раз";
            continue;
        }
    }
}