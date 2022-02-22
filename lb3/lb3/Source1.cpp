#include <iostream>
#include <string>
#include <math.h>
using namespace std;



class TMatrix
{
    int row;
    int col;  //��������� �������
    int** arr; //�������
public:
    void set_row_and_col(int row, int col) { this->row = row; this->col = col; } //������ ��� ��������� �������
    int get_row() { return row; }
    int get_col() { return col; } //������� ��� ��������� ���������
    void create_arr(int Row, int Col)
    {
        arr = new int* [Row];
        for (int i = 0; i < Row; i++)
        {
            arr[i] = new int[Col];
        }
    }                    // ��������� ������� ���������� ��� �� ���
    void fill_in_arr()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int a;
                cout << "a" << i + 1 << j + 1 << " = ";            // ���������� ������� � ��������� ��������
                cin >> a;
                arr[i][j] = a;
            }
            cout << endl;
        }
    }
    void show_arr()
    {
        cout << "�������: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";             //��������� ������� �� �����
            }
            cout << endl;
        }
        cout << "---------------" << endl;
    }
    void determinant()
    {
        if (row == col)
        {
            if (row == 2)
            {
                cout << "���������: " << arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0] << endl;
            }
            else if (row == 1)
            {
                cout << "���������: " << arr[0][0] << endl;
            }
            else if (row == 3)
            {
                cout << "���������: " << arr[0][0] * arr[1][1] * arr[2][2] + arr[2][0] * arr[0][1] * arr[1][2] + arr[0][2] * arr[2][1] * arr[1][0] - arr[2][0] * arr[1][1] * arr[0][2] - arr[0][0] * arr[1][2] * arr[2][1] - arr[0][1] * arr[1][0] * arr[2][2] << endl;
            }
        }
        else { cout << "��������� ������ �� �������." << endl; }
    }
    TMatrix() { row = 1; col = 1; }      //����������� ��� ���������
    TMatrix(int row, int col) { this->row = row; this->col = col; }   //����������� � �����������


    ~TMatrix() { delete[] arr; }            // ����������

    TMatrix(const TMatrix& other)
    {
        this->col = other.col;
        this->row = other.row;
        this->arr = new int* [other.row];
        for (int i = 0; i < other.row; i++)
        {
            this->arr[i] = new int[other.col];                 // ����������� ���������
        };
        for (int i = 0; i < other.row; i++)
        {
            for (int j = 0; j < other.col; j++)
            {
                this->arr[i][j] = other.arr[i][j];
            }
        }
    }
    void full_operation_on_massive()         //����� ��� �������� ������������ 
    {
        create_arr(row, col);
        fill_in_arr();
        show_arr();
    }
    TMatrix operator * (const TMatrix& other)            //���������� ��������� *
    {
        TMatrix new_arr;
        if (get_col() == other.row) {
            int row_new = get_row(), col_new = other.col;
            new_arr.set_row_and_col(row_new, col_new);
            new_arr.create_arr(row_new, col_new);
            for (int i = 0; i < row_new; i++)
            {
                for (int j = 0; j < col_new; j++)
                {
                    new_arr.arr[i][j] = 0;
                    for (int k = 0; k < other.row; k++)
                    {
                        new_arr.arr[i][j] += arr[i][k] * other.arr[k][j];
                    }
                }
            }
            return new_arr;
        }
    }

};





void main()
{
    setlocale(LC_ALL, "ru");



    TMatrix a(4, 2);   //������� �
    a.full_operation_on_massive();
    a.determinant();
    TMatrix b(2, 1);             //������� �
    b.full_operation_on_massive();
    b.determinant();
    TMatrix c = a * b;       //������� � �� � �������� � �� �
    c.show_arr();
}