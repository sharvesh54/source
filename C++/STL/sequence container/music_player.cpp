#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<iterator>
#include<string>


using namespace std;

class Song {

    friend ostream &operator<<(ostream &os, const Song &s);

    string Name;
    string Artist;
    int Rating;

public:

    Song() = default;
    Song(string name, string artist, int rating) : Name{name}, Artist{artist}, Rating{rating} {};

    bool operator<(const Song &rhs) const {
        return this->Rating < rhs.Rating;
    }
    bool operator==(const Song &rhs) const {
        return (this->Name == rhs.Name && this->Artist == rhs.Artist  && this->Rating == rhs.Rating);
    }

};

ostream &operator<<(ostream &os, const Song &s){
    os << s.Name << "          " << s.Artist << "          " << s.Rating << endl;
    return os;
}

template<typename T>
void display(const list<T> &d){
    cout << endl;
    for(const auto &i : d)
        cout << i << " ";
    cout << endl;
}


void display_menu(){


    cout << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "F - Play first Song" << endl;
    cout << "N - Play Next Song" << endl;
    cout << "P - Play Previous Song" << endl;
    cout << "A - Add and Play a new Song at current location" << endl;
    cout << "L - List the current play list" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter your selection (Q to qiut): ";
}

int main(){

    list<Song> l {
        {"song-1", "Artist-1",4},
        {"song-2", "Artist-2",5},
        {"song-3", "Artist-3",5},
        {"song-4", "Artist-4",4},
        {"song-5", "Artist-5",5}
    };

    auto it = l.begin();
    char flag {};

    do{

        display_menu();
        cin >> flag;
        if(flag == 'L' || flag == 'l')
            display(l);

        else if (flag == 'F' || flag == 'f'){
            it = l.begin();
            cout << "\ncurrently playing : " << *it << endl;
        }

        else if (flag == 'N' || flag == 'n'){
            it++;
            cout << "\ncurrently playing : " << *it << endl;
            if(it == l.end()){
                it = l.begin();
                cout << "\ncurrently playing : " << *it << endl;
            }
            else{
                it++;
                cout << "\ncurrently playing : " << *it << endl;
            }
            
        }

        else if (flag == 'p' || flag == 'P'){

            if(it == l.begin()){
                it = l.end();
                cout << "\ncurrently playing : " << *it << endl;
            }
            else{
                it--;
                cout << "\ncurrently playing : " << *it << endl;
            }
        }

        else if (flag == 'A' || flag == 'a'){
            string a, b {};
            int c {};
            cout << "\nEnter the song name, artist, rating seperated by space: ";
            cin >> a >> b >> c;
            l.emplace(it, a, b, c);
            it--;
            cout << "\ncurrently playing : " << *it << endl;
        }

        else if (flag == 'Q' || flag == 'q'){
            cout << "Thanks for listning!";

        }
        
        else
            cout << "invalid choice : please enter valid choice" << endl;


    }while(flag != 'Q' && flag != 'q' );


}