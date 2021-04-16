#include <iostream>
#include <cstdlib>

using namespace std;

//function prototype
void getNum(int[], int);
int getEvenNum(int[], int);
int getRevNum(int[], int);

int main() {
    const int size = 8;
    int numbers[size] ;

    cout << "Random numbers: ";
    getNum(numbers, size);

    cout << "\nEvery other even number: ";
    getEvenNum(numbers, size);

    cout << "\nNumbers in reverse: ";
    getRevNum(numbers, size);

    return 0;

}
void getNum(int nums[], int size)
{
    for(int index = 0; index < size; index++) {
        nums[index] = rand() % 100;
        cout << nums[index] << " ";
    }
}
int getEvenNum(int nums[], int size)
{

    for(int index = 0; index < size; index++){
        if(nums[index] % 2 == 0 ) {
            cout << nums[index++] << " ";
        }
    }
}

int getRevNum(int nums[], int size)
{
    for(int index = size -1 ; index >= 0; index--){
        cout << nums[index]<< " ";
    }
}