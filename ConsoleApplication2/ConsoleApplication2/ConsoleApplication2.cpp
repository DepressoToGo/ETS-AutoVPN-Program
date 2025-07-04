#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    string str1 = "cd C:\\Program Files (x86)\\Cisco\\Cisco Secure Client\\";
    const char *command1 = str1.c_str();
    system(command1);
    string str2 = "vpncli.exe -s <.login_info";
    const char *command2 = str2.c_str();
    system(command2);
    string str3 = "Start \" \" \"C:\\Program Files (x86)\\Cisco\\Cisco Secure Client\\UI\\csc_ui.exe\"";
    const char *command3 = str3.c_str();
    system(command3);
    string str4 = "exit";
    const char *command4 = str4.c_str();
    system(command4);
}