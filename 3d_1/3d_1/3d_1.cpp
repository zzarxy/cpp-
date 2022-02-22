#include <iostream>
#include <stdio.h>
#include <math.h>
#include <windows.h>

void SetWindow(int Width, int Height)
{
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;
    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;
    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(Handle, coord);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);
}

int main()
{
    int width = 120 * 2;
    int height = 30 * 2;
    SetWindow(width, height);
    float aspect = (float)width / height;
    float pixelAspect = 11.0f / 24.0f;
    char gradient[] = " .:!/r(l1Z4H9W8$@";
    int gradientSize = std::size(gradient) - 2;

    wchar_t* screen = new wchar_t[width * height + 1];
    screen[width * height] = '\0';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;
    for (int k = 0; k < 10000000; k++)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                x *= aspect * pixelAspect;
               /* x += sin(k * 0.001);*/
                char pixel = ' ';
                /*if (x * x < 0.5 && y * y < 0.5) pixel = '@';*/
                float dist = 0;
                if (x * x < 0.5 && y * y < 0.5) dist = ((x + y)* (x + y))/5;
                int color = (int)(1.0f / dist);
                if (color < 0) color = 0;
                else if (color > gradientSize) color = gradientSize;
                pixel = gradient[color];
                screen[i + j * width] = pixel;
            }
        }
        WriteConsoleOutputCharacter(hConsole, screen, width * height, { 0, 0 }, &dwBytesWritten);
        
    }
    
    getchar();
}