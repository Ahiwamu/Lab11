#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future." << endl;
    string text;
    for(int i = 0; i < 3; i++){
        getline(cin, text);
    }
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    
    srand(time(0));
    int i = rand() % 9;
    cout << "You will get " << grade[i] << " in this 261102.";
    return 0;
}