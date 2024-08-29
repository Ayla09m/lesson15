#include <iostream>

using namespace std;
void arrdoldurulmasi(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int randnum = rand()%100;
        arr[i] = (int)randnum;
    }
}
void arrayincixarilmasi(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void arrdoldurulmasi(float arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        float randnum = (float)(rand() % 100) / 10;
        arr[i] = (float)randnum;
    }
}
void arrayincixarilmasi(float arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void arrdoldurulmasi(double arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        double randnum = (double)(rand() % 100) / 10;
        arr[i] = (double)randnum;
    }
}
void arrayincixarilmasi(double arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void arrdoldurulmasi(char arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        char randnum = rand();
        arr[i] = (char)randnum;
    }
}
void arrayincixarilmasi(char arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}



void diapazonlaarray(int arr[], int min, int max, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int randnum = rand() % (min + max) - min;
        arr[i] = randnum;
    }
}
void showdiapazonarray(int arr[], int min, int max, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int enboyuk(int arr[], int size) {
    int enboyuk = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > enboyuk) {
            enboyuk = arr[i];
        }
    }
    return enboyuk;
}
float enboyuk(float arr[], int size) {
    float enboyuk = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > enboyuk) {
            enboyuk = arr[i];
        }
    }
    return enboyuk;
}
double enboyuk(double arr[], int size) {
    double enboyuk = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > enboyuk) {
            enboyuk = arr[i];
        }
    }
    return enboyuk;
}

int enkicik(int arr[], int size) {
    int enkicik = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < enkicik) {
            enkicik = arr[i];
        }
    }
    return enkicik;
}

float enkicik(float arr[], int size) {
    float enkicik = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < enkicik) {
            enkicik = arr[i];
        }
    }
    return enkicik;
}

double enkicik(double arr[], int size) {
    double enkicik = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < enkicik) {
            enkicik = arr[i];
        }
    }
    return enkicik;
}

void swipe(int arr[], int size, int swipe) {
    for (int i = size-swipe; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < size - swipe; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void swipe(float arr[], int size, int swipe) {
    for (int i = size - swipe; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < size - swipe; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void swipe(double arr[], int size, int swipe) {
    for (int i = size - swipe; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < size - swipe; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void swipe(char arr[], int size, int swipe) {
    for (int i = size - swipe; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < size - swipe; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void bubblesort(int arr[], int size, bool function) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (function) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

}

void bubblesort(float arr[], int size, bool function) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (function) {
                if (arr[j] > arr[j + 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubblesort(double arr[], int size, bool function) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (function) {
                if (arr[j] > arr[j + 1]) {
                    double temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    double temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

}

void search(int arr[], int size ,int num) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==num)
        {
            cout << i;
        }
    }
}
void search(float arr[], int size, float num) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << i;
        }
    }
}
void search(double arr[], int size, double num) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << i;
        }
    }
}
int main()
{
    cout << "\ntask1,3" << endl;
    float myarrf[10] = {};
    double myarrd[10] = {};
    char myarrc[10] = {};
    arrdoldurulmasi(myarrf, 10);
    arrayincixarilmasi(myarrf, 10);
    arrdoldurulmasi(myarrd, 10);
    arrayincixarilmasi(myarrd, 10);
    arrdoldurulmasi(myarrc, 10);
    arrayincixarilmasi(myarrc, 10);

    cout << "\ntask2" << endl;
    int myarr2[10] = {};

    diapazonlaarray(myarr2, 0, 10, 5);
    showdiapazonarray(myarr2, 0, 10, 5);

    cout << "\ntask4" << endl;
    int myarr4[5] = {};
    float myarr4f[5] = {};
    double myarr4d[5] = {};

    cout << "\nint array:" << endl;
    arrdoldurulmasi(myarr4, 5);
    arrayincixarilmasi(myarr4, 5);

    cout << "\nfloat array:" << endl;
    arrdoldurulmasi(myarr4f, 5);
    arrayincixarilmasi(myarr4f, 5);

    cout << "\ndouble array:" << endl;
    arrdoldurulmasi(myarr4d, 5);
    arrayincixarilmasi(myarr4d, 5);

    cout << "\nint true:" << endl;
    bubblesort(myarr4, 5, true);
    arrayincixarilmasi(myarr4, 5);
    cout << "\nint false:" << endl;
    bubblesort(myarr4, 5, false);
    arrayincixarilmasi(myarr4, 5);

    cout << "\nfloat ture:" << endl;
    bubblesort(myarr4f, 5, true);
    arrayincixarilmasi(myarr4f, 5);
    cout << "\nfloat false:" << endl;
    bubblesort(myarr4f, 5, false);
    arrayincixarilmasi(myarr4f, 5);

    cout << "\ndouble true:" << endl;
    bubblesort(myarr4d, 5, true);
    arrayincixarilmasi(myarr4d, 5);
    cout << "\nfloat false:" << endl;
    bubblesort(myarr4d, 5, false);
    arrayincixarilmasi(myarr4d, 5);

    cout << "\ntask5" << endl;
    int myarr5[5] = {10,2,4,7,1};
    double myarr5d[5] = { 1.0,2.3,4.6,5.1,6.1 };
    float myarr5f[5] = { 1.3,2.5,4.9,5.0 ,4.4};

    arrayincixarilmasi(myarr5, 5);
    cout << endl;
    cout << "index;";
    search(myarr5, 5, 10);
    cout << endl;

    arrayincixarilmasi(myarr5d, 5);
    cout << endl;
    cout << "index;";
    search(myarr5d, 5, 2.3);
    cout << endl;

    arrayincixarilmasi(myarr5f, 5);
    cout << endl;
    cout << "index;";
    search(myarr5f, 5, 4.9);
    cout << endl;

    cout << "\ntask6" << endl;
    int myarr6[5] = {};
    float myarr6f[5] = {};
    double myarr6d[5] = {};

    arrdoldurulmasi(myarr6, 5);
    arrayincixarilmasi(myarr6, 5);
    int enkiciki = enkicik(myarr6, 5);
    cout << enkiciki << endl;

    arrdoldurulmasi(myarr6f, 5);
    arrayincixarilmasi(myarr6f, 5);
    float enkicikf = enkicik(myarr6f, 5);
    cout << enkicikf << endl;

    arrdoldurulmasi(myarr6d, 5);
    arrayincixarilmasi(myarr6d, 5);
    double enkicikd = enkicik(myarr6d, 5);
    cout << enkicikd << endl;

    cout << "\ntask7" << endl;
    int myarr7[5] = {};
    float myarr7f[5] = {};
    double myarr7d[5] = {};

    arrdoldurulmasi(myarr7, 5);
    arrayincixarilmasi(myarr7, 5);
    int enboyuki = enboyuk(myarr7, 5);
    cout << enboyuki << endl;

    arrdoldurulmasi(myarr7f, 5);
    arrayincixarilmasi(myarr7f, 5);
    float enboyukf=enboyuk(myarr7f, 5);
    cout << enboyukf << endl;

    arrdoldurulmasi(myarr7d, 5);
    arrayincixarilmasi(myarr7d, 5);
    double enboyukd = enboyuk(myarr7d, 5);
    cout << enboyukd << endl;
    
    cout << "\ntask8" << endl;
    int myarr8[5] = {};
    float myarr8f[5] = {};
    double myarr8d[5] = {};
    double myarr8c[5] = {};
    arrdoldurulmasi(myarr8, 5);
    arrayincixarilmasi(myarr8, 5);
    swipe(myarr8, 5, 3);
    
    arrdoldurulmasi(myarr8f, 5);
    arrayincixarilmasi(myarr8f, 5);
    swipe(myarr8f, 5, 3);

    arrdoldurulmasi(myarr8d, 5);
    arrayincixarilmasi(myarr8d, 5);
    swipe(myarr8d, 5, 3);

    arrdoldurulmasi(myarr8c, 5);
    arrayincixarilmasi(myarr8c, 5);
    swipe(myarr8c, 5, 3);


}
