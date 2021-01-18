#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    while (1) {
        getline(cin, str);
        if (str == "")
            break;
        cout << str << endl;
    }
    return 0;
}
/*
string 자료형과 getline함수를 사용해서 공백을 문자열의 끝으로 인식하도록 하는 것을 막는다. 

getline과 cin을 혼용해서 쓰면 '\n'을 처리해주어야 한다. 
cin만 계속 사용하면 알아서 '\n'을 걸러주지만, getline은 거르지 못하는듯
-> std::cin.ignore(32767,'\n');을 해주면, stream에 남아있는 '\n'을 제거해준다.
-> 32767은 2byte가 가질 수 있는 가장 큰 값 (cin::ignore() 함수가 무시할 문자의 수)
*/