// Пз3_пример2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define length 5
#define NAME(var) #var
using namespace std;

void enter_arr(int arr[], const char* name);
void analytics_links(int arr[], const char* name, int& max, int& max_pos, int& min, int& min_pos);
void analytics_pointers(int arr[], const char* name, int* max, int* max_pos, int* min, int* min_pos);
void loop_func(int X[], const char* name, int max, int max_pos, int min, int min_pos);
int main()
{
    setlocale(LC_ALL, "ru");
    int X[length], Y[length], Z[length], max = 0, max_pos = 0, min = 0, min_pos = 0;
    loop_func(X, NAME(X), max, max_pos, min, min_pos);
    loop_func(Y, NAME(Y), max, max_pos, min, min_pos);
    loop_func(Z, NAME(Z), max, max_pos, min, min_pos);
    return 0;
}
void loop_func(int X[], const char* name, int max, int max_pos, int min, int min_pos)
{
    enter_arr(X, name);
    analytics_links(X, name, max, max_pos, min, min_pos);
    analytics_pointers(X, name, &max, &max_pos, &min, &min_pos);
}
void enter_arr(int arr[], const char* name)
{
    cout << "Enter the array «" << name << "»: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}
void analytics_links(int arr[], const char* name, int& max, int& max_pos, int& min, int& min_pos)
{
    max = arr[0];
    max_pos = 0;
    min = arr[0];
    min_pos = 0;
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_pos = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            min_pos = i;
        }
    }
    cout << "For array «" << name << "»: max = " << max << ", stands on " << max_pos << " place in array; min = " << min << ", stands on " << min_pos << " place in array.\n";
}
void analytics_pointers(int arr[], const char* name, int* max, int* max_pos, int* min, int* min_pos)
{
    *max = arr[0];
    *max_pos = 0;
    *min = arr[0];
    *min_pos = 0;
    for (int i = 0; i < length; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
            *max_pos = i;
        }
        if (*min > arr[i])
        {
            *min = arr[i];
            *min_pos = i;
        }
    }
    cout << "For array «" << name << "»: max = " << *max << ", stands on " << *max_pos << " place in array; min = " << *min << ", stands on " << *min_pos << " place in array.\n";
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
