#include <iostream>
#include <string>

using namespace std;

int a = 1;

class Detail
{
    string name;
    string weight;
    string width;
    string length;
    string height;
    int serial_number;
public:
    Detail()
    {
        name =  "-";
        weight = "-";
        width = "-";
        length = "-";
        height = "-";
    }

    Detail(string name, string weight, string width, string length, string height)
    {
        this->name = name;
        this->weight = weight;
        this->width = width;
        this->length = length;
        this->height = height;
        serial_number = a;
        a++;
    }

    int get_num()
    {
        return serial_number;
    }

    void print_all_data()
    {
        cout << "Серийный номер: " << serial_number << endl;
        cout << "Имя: " << name << endl;
        cout << "Вес: " << weight << endl;
        cout << "Ширина: " << width << endl;
        cout << "Длина: " << length << endl;
        cout << "Высота: " << height << endl;
        cout << endl;
    }           

    ~Detail() {}
};

int main()
{
    setlocale(LC_ALL, "ru");

    const int size = 3;
    int search_type;
    cout << "Введите серийный номер: ";
    cin >> search_type;

    Detail* arr = new Detail[size];

    Detail test1("Ilya", "13кг", "40см", "40см", "20см");
    Detail test2("Andry", "20кг", "50см", "30см", "40см");
    Detail test3("Dany", "5кг", "10см", "20см", "5см");

    arr[0] = test1;
    arr[1] = test2;
    arr[2] = test3;

    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].get_num() == search_type)
        {
            arr[i].print_all_data();
            cout << endl;
            check = 1;
        }
        if ((i + 1 == size) && (check == 0))
        {
            cout << "Серийный номер не найдено." << endl;
        }
    }
    delete[] arr;

    return 0;
}