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
string �ڷ����� getline�Լ��� ����ؼ� ������ ���ڿ��� ������ �ν��ϵ��� �ϴ� ���� ���´�. 

getline�� cin�� ȥ���ؼ� ���� '\n'�� ó�����־�� �Ѵ�. 
cin�� ��� ����ϸ� �˾Ƽ� '\n'�� �ɷ�������, getline�� �Ÿ��� ���ϴµ�
-> std::cin.ignore(32767,'\n');�� ���ָ�, stream�� �����ִ� '\n'�� �������ش�.
-> 32767�� 2byte�� ���� �� �ִ� ���� ū �� (cin::ignore() �Լ��� ������ ������ ��)
*/