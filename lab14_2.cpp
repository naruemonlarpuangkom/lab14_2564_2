#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool image[][M]){
    cout << "------------------------------------------------------------------------\n" ;
    for (int q = 0 ; q < N ; q++){
        cout << "|" ;
        for (int w = 0 ; w < M ; w++){
        if (image[q][w] == 0) cout << " " ;
        if (image[q][w] == 1) cout << "*" ;
        }
        cout << "|" << "\n" ;
    }
    cout << "------------------------------------------------------------------------\n" ;
}

void updateImage (bool image[][M],int z,int x,int y){
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < M ; j++){
            if (sqrt(pow(i-x,2)+pow(j-y,2))+1 <= z){
                image[i][j] = 1 ;
            }
        }
    }
} 