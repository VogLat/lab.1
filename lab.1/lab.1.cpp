
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <sstream>
#include <array>
#include <string>
using namespace std;
   

int func(string a) {
    int  c = 0;
    string file = a + ".txt";
    int array[9];
    int keys[9];
    int mas[9][5];
    int base[] = {111110100,101101000,111110000,111011000,110010100,1010010010,101101100,1001010101,110101100,101011001};
    char base_chars[] = { 'O','4','П','Р','С','7','Ч','2','Ь','9' };
    int  y=0;
    ifstream potik;
    potik.open(file);
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 5; j++)
            potik >> mas[i][j];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl; // Перехід на новий рядок після кожного рядка масиву
    }
            for (int i = 0; i < 4; i++) {
                if (mas[i][0] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 5; i < 9; i++) {
                if (mas[i][0] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 0; i < 4; i++) {
                if (mas[i][4] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 5; i < 9; i++) {
                if (mas[i][4] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
          
            for (int i = 1; i < 4; i++) {
                if (mas[0][i] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 1; i < 4; i++) {
                if (mas[4][i])
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 0; i < 4; i++) {
                if (mas[8][i])
                    c +=1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int i = 1; i < 4; i++) {
                if (mas[i][4 - i] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;
            for (int j = 5; j < 8; j++) {
                if (mas[j][8 - j] == 1)
                    c += 1;
            }
            if (c >= 3)
                array[y] = 1;
            else array[y] = 0;
            y++;
            c = 0;  
            cout << "\n";
            int num,id;
            for (int j = 0; j <= 9; j++) {
                num = base[j];
                for (int i = 8; i >= 0; i--) {
                    keys[i] = num % 10;
                    num /= 10;
                    //cout << keys[i];
                }
                int result = 0;
                for (int i = 0; i < 9; i++) {
                    result += abs(array[i] - keys[i]);
                }
                if (result) {
                }
                else {
                    cout << "Знайдено відіповідність з символом --- ";
                    cout << base_chars[j] << "\n";
                    break;
                }
            }
            cout << "Код елемента зчитаного з файлу: ";
                //for (int i = 0; i < 9; i++) {
                //cout << keys[i];
            //}
                for (int i = 0; i < 9; i++) {
                cout << array[i];
            }
            return 1;
}

    int main()
    {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   
    string a;
    cout << "Введіть який символ буде зчитуватися: "<<"\n";
    cout << "1-О;2-4;3-П;4-Р;5-С;6-7;7-Ч;8-2;9-Ь;10-9"<<"\n";
    cin >> a;
    func(a);
}


