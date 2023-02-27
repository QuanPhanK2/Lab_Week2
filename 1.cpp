#include <iostream>
using namespace std;


bool isLoShuMagicSquare(int arr[3][3]) {
    // Check if array has 3 rows and 3 columns
    // if (sizeof(arr) / sizeof(arr[0]) != 3 || sizeof(arr[0]) / sizeof(arr[0][0]) != 3) {
    //     return false;
    // }

    // Check if each element is between 1 and 9
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < 1 || arr[i][j] > 9) {
                return false;
            }
        }
    }

    // Calculate sums of rows, columns and diagonals
    int rowSum = arr[0][0] + arr[0][1] + arr[0][2];
    int colSum = arr[0][0] + arr[1][0] + arr[2][0];
    int diagSum = arr[0][0] + arr[1][1] + arr[2][2];
    int antiDiagSum = arr[0][2] + arr[1][1] + arr[2][0];

    // Check if sums are equal to 15
    if (rowSum != colSum || rowSum != diagSum || rowSum != antiDiagSum) {
        return false;
    }


    return true;
}

int main(){
    int arr[3][3];
    cout << "Lo Shu Magic Square";
    cout << "Input 2d array 3x3:" << endl;
     for (int i = 0; i < 3; i++) { 
         for (int j = 0; j < 3; j++) {
    cin >> arr[i][j]; 
  }
}
    isLoShuMagicSquare(arr);
    if(isLoShuMagicSquare(arr)){
        cout << "This 2d array is the Lo Shu Magic Square!" << endl;
    }else{
        cout << "This 2d array is not the Lo Shu Magic Square!";
    }
}