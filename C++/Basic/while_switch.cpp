#include <iostream>
#include <vector>

using namespace std;

int main(){
//Taking input and pushing data in vector
    vector <int> vec{};

    cout << "Enter how many numbers you want to store: ";
    int temp {};
    cin >> temp;

    for (int i {0}; i < temp; i++){

        int flag {};
        cout << "enter " << i+1 << " number :";
        cin >> flag;
        vec.push_back(flag);
    }
// constructing menu using switch

    char choice {};
    while (true){
        char again {};

        cout << "=================*MENU*==================" << endl;
        cout << "P - print numbers" << endl;
        cout << "A - Add numbers" << endl;
        cout << "M - Mean of numbers" << endl;
        cout << "S - Smallest numbers" << endl;
        cout << "L - Largest numbers" << endl;
        cout << "Q - Quit" << endl;
        cout << "==========================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 'p':
            case 'P':
                if (vec.size() == 0)
                    cout << "[]" << endl;
                else {
                    for (int i : vec)
                        cout << i << " ";
                }
                break;
                cout << endl;
            case 'a':
            case 'A':
                if (vec.size() == 0)
                    cout << "list is empty []: " << "sum = 0"  << endl;
                else {
                    int sum {};
                    for (int i : vec)
                        sum += i;
                    cout << "Sum = " << sum << endl;
                }
                break;

            case 'M':
            case 'm':
                if (vec.size() == 0)
                    cout << "list is empty []: " << "Mean = 0" << endl;
                else {
                    int sum {};
                    for (int i : vec)
                        sum += i;
                    cout << "Mean = " << static_cast <double> (sum)/vec.size() << endl;
                }
                break;
            case 's':
            case 'S':
                if (vec.size() == 0)
                    cout << "list is empty []: " <<  endl;
                else {
                    int small {100000000};
                    for (int i : vec)
                        if (i < small){
                            small = i;
                        }
                    cout << "Smallest = " << small << endl;
                }
                break;
            case 'L':
            case 'l':
                if (vec.size() == 0)
                    cout << "list is empty []: " <<  endl;
                else {
                    int large {};
                    for (int i : vec)
                        if (i > large){
                            large = i;
                        }
                    cout << "Largest = " << large << endl;
                }
                break;
            case 'q':
            case 'Q':
                cout << "Thanks for the visit :)" << endl;
                break;
            default:
                cout << "Enter valid entry" << endl;
        }

        cout << "Do you want to go back to menu? (Y/N)";
        cin >> again;
        if (again == 'n' || again == 'N')
            break;
             

    }
    return 0;
}