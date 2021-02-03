#include <iostream>

using namespace std;

void baseStar()
{
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            if(i*3 + j == 4)
                cout << " ";
            else
                cout << "*";
        }
        cout << '\n';
    }
}

void voidStar()
{
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << " ";
        }
        cout << '\n';
    }
}

void star(int n)
{
 for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            if(i*3 + j == 4){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << '\n';
    }
}


int main() {

    int n;
    cin >> n;

    baseStar();

}
