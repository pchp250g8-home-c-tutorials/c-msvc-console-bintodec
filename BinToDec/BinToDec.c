// BinToDec.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

int main(int argc, char* argv[])
{
    const unsigned int nMaxBinDigits = (unsigned int)(floor(log2(UINT32_MAX)));
    unsigned int nBinPower = 1;
    unsigned int nBinNum = 0;
    char szLine1[256],szLine2[256];
    size_t nStrLen1,nStrLen2;
    bool bIsRightString = false;
    system("cls");
    printf("Input a binary number\r\n");
    scanf("%[^\n]", &szLine1);
    sscanf(szLine1, "%[0-1]", szLine2);
    nStrLen1 = strlen(szLine1);
    nStrLen2 = strlen(szLine2);
    bIsRightString = (nStrLen1 <= nMaxBinDigits) && (nStrLen1 == nStrLen2);
    if (!bIsRightString)
    {
        printf("Wrong binary number format!!!\r\n");
        getchar();
        getc(stdin);
        return 0;
    }
    for (unsigned int i = 0; i < nStrLen1; i++)
    {
        unsigned int nBinDigit = szLine1[nStrLen1 - 1 - i] - '0';
        nBinNum += (nBinDigit * nBinPower);
        nBinPower *= 2;
    }
    printf("The decenary equavalent of the binary number %s is %d\r\n", szLine1, nBinNum);
    getchar();
    getc(stdin);
    return 0;
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
