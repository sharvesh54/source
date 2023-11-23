//smart pointr in c++
//its a container or rapper for a raw pointer, it deallocate memory automatically

#include<iostream>
#include<memory>


using namespace std;

// int main(){

//     unique_ptr<int>flag1 = make_unique<int> (25);

//     cout << *flag1 << endl;
// }

class santu {
    public:
        santu() {
            cout << "constructor invoked" << endl;
        }
        ~santu() {
            cout << "dstructor invoked";
        }
};


int main(){
{
    auto flag = make_unique<santu>();
}
}


int main(){

    auto flag2 = make_shared<int> (69);
    cout << flag2.use_count() << endl;
    auto flag3 = flag2;
    cout << flag2.use_count() << endl;
    cout << *flag3 << endl;

}

// int main(){

//     weak_ptr<int> flag4;
//     {
//         auto flag5 = make_shared<int>(25);
//         flag4 = flag5;

//     }
//}
