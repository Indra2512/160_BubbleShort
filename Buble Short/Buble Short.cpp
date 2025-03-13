#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi Variable Global array dengan panjang 20
int n; //Deklarasi Variable Global n untuk menyimpan elemen pada array

void input () //Prosedur input
{
    int d;
    while(true){
    
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "array maksimal adalah 20" <<endl;
        }
    }
    cout << endl;
    cout << "==========================" << endl;
    cout << "Masukkan elemen pada array" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i <n; i++)
    {
    cout << "Data ke-" << (i + 1) << " = ";
    cin >> arr[1];
    }

}

void buble_sortArray()
{
    int pass = 1; //Step 1
        do{
            for (int j=0;j<=n-1-pass;j++){ //step 2
                if (arr[j] > arr[j+1]) { // step 3
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; // step 4
    }while(pass <= n-1); // step 5
}
void display()
{
    
}
int main()
{

}