#include <iostream>
using namespace std;

int pos = 0;

template <class T>
class Massiv
{     
  private:
      int size = 10;
      T* Array = new T[size];
      T* zavd_Array = new T[size];
      int count;

  public:

      void Add(T x) // Конструктор
      {
          Array[pos] = x;
          pos++;
          count = pos;
      }

      ~Massiv() // Деструктор
      {
          delete[] Array;
      }

      void fill_Array_int() // Заполнение массива типа int
      {
          Massiv<int>;
          for (int i = 0; i < size; i++)
          {
              Add(rand() % 10);
          }
          pos = 0;
      }

      void fill_Array_double() // Заполнение массива типа double
      {
          Massiv<double>;
          for (int i = 0; i < size; i++)
          {
              Add((double)(rand()) / RAND_MAX * 10);
          }
          pos = 0;
      }

      void fill_Array_char() // Заполнение массива типа char
      {
          char c;
          int r;
          Massiv<char>;
          for (int i = 0; i < size; i++)
          {
              r = rand() % 26;
              c = 'a' + r;
             Add(c);
          }
          pos = 0;
      }

      void zavd_arr() //Метод для 1 задания
      {
          
          for (int i = 0; i < size - 1; i++)
          {
              zavd_Array[i] = Array[i] + Array[i + 1];
          }
      }

      void Lb1_zd2() //Метод для 2 задания
      {
          int size;
          cout << "Введите размер матрицы: ";
          cin >> size;
          int res[2] = { 0 };

          ////////////////////////////// выделение памяти
          int** matrix = new int* [size];
          for (int i = 0; i < size; i++)
          {
              matrix[i] = new int[size];
          }

          ////////////////////////////// инициализация
          for (int i = 0; i < size; i++)
          {
              for (int j = 0; j < size; j++)
              {
                  matrix[i][j] = rand() % 20 - 10;
              }
          }

          ////////////////////////////// вывод в констоль 
          cout << "\n\n";
          for (int i = 0; i < size; i++)
          {
              for (int j = 0; j < size; j++)
              {
                  cout << "\t" << matrix[i][j];
              }
              cout << endl;
          }
          cout << "\n\n";

          ///////////////////////////// верхний
          int* top = new int[((size * size) - 4) / 2];
          int n = 0;
          for (int i = 0; i < size; i++)
          {
              for (int j = 1 + i; j < size; j++)
              {
                  top[n] = matrix[i][j]; n++;
              }

          }


          for (int i = 0; i < n; i++)
          {
              if (top[i] < 0)
              {
                  res[1] += top[i];
              }
          }
          //cout << sum1 << endl;
          ///////////////////////////// нижний 
          int* low = new int[((size * size) - 4) / 2];
          n = 0;
          for (int i = 0; i < size; i++)
          {
              for (int j = 0; j < i; j++)
              {
                  low[n] = matrix[i][j]; n++;
              }

          }


          for (int i = 0; i < n; i++)
          {
              if (low[i] < 0)
              {
                  res[0] += low[i];
              }
          }

          cout << "top " << res[1] << endl;
          cout << "low " << res[0] << endl;
          cout << "\n\n";

      }

      void Show() //Вывод в консоль
      {
   
          for (int i = 0; i < count; i++)
          {
              cout << "\t" << Array[i];
          }
          cout << endl;
      }

      void Show_zavd() //Вывод в консоль 2 задание
      {

          for (int i = 0; i < count - 1; i++)
          {
              cout << "\t" << zavd_Array[i];
          }
          cout << endl;
      }

};

int main()
{
    setlocale(0, "russian");
    srand(time(NULL));

    Massiv<int> Arr;
    Arr.fill_Array_int();
    cout << "Array int: ";
    Arr.Show();

    Massiv<double> Arr2;
    Arr2.fill_Array_double();
    cout << "Array double: ";
    Arr2.Show();

    Massiv<char> Arr3;
    Arr3.fill_Array_char();
    cout << "Array char: ";
    Arr3.Show();

    cout << endl;

    cout << "zavd_Array int: ";
    Arr.zavd_arr();
    Arr.Show_zavd();
    cout << "zavd_Array double: ";
    Arr2.zavd_arr();
    Arr2.Show_zavd();
    cout << "zavd_Array char: ";
    Arr3.zavd_arr();
    Arr3.Show_zavd();

    cout << endl;
    Arr.Lb1_zd2();

    return 0;
}