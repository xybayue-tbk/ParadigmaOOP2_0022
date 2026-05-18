#include <iostream>
using namespace std;

class AbstraksiKls{
    private: string x, y;
    public:
    //
    //
    void setXY(string a, string b){
        x = a;
        y = b;
    }

    void display(){
        cout << "Nilai x: " << x << endl;
        cout << "Nilai y: " << y << endl;
    }
};

int main(){
    AbstraksiKls ak;
    ak.setXY("Yogyakarta", "kampus");
    ak.display();

    return 0;
}