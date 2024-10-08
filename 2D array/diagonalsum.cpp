#include<iostream>
using namespace std;


int DiagonalSum(int mat[][4],int n){
    int sum=0;

    for(int i=0; i<n; i++){ //Outer loop for Rows
        for(int j=0; j<n; j++){ // inner Loop for Columns
            if(i == j){
                sum = sum+ mat[i][j];

            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "sum = "<< sum << endl;
    return sum;
}


int main(){

    int matrix[4][4]= {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    DiagonalSum(matrix, 4);

    return 0;
}


//Time Complexity is O(n^2)
// This is a normal case for an even matrix.


// Below is the special case in which 3*3 Matrice or odd case is taken 


#include<iostream>
using namespace std;


int DiagonalSum(int mat[][3],int n){
    int sum=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum = sum+ mat[i][j];

            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "sum = "<< sum << endl;
    return sum;
}


int main(){

    int matrix[3][3]= {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    DiagonalSum(matrix, 3);

    return 0;
}


// Time Complexity- O(N)
