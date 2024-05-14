#include <iostream>
#include <string>
using namespace std;

class buku
{
    string judul;

    public:
        buku setJudul(string judul)
        {
            this->judul = judul;
            return *this; // chain function
        }
        string getJudul()
        {
            return this->judul;
        }
} bukunya;

int main()
{
    // bukunta.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul(); // chain function
    return 0;
}