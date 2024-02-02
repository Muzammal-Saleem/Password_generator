#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string make_pasward(int length);
int main()
{
    int length;
    cout << "Enter length of pasward : " << endl;
    cin >> length;
    cout << "your pasward is : " << make_pasward(length);

    return 0;
}
string make_pasward(int length)
{
    string pasward;
    string base = "qwertyuioplkjhgfdsamnbvcxz123456789";
    int choise = base.size();
    srand(time(0));
    for (int i = 1; i <= length; i++)
    {
        int word = rand() % choise;
        pasward += base[word];
    }
    return pasward;
}