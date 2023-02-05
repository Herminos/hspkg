#include<iostream>
#include<io.h>
#include<direct.h>
using namespace std;
void INFO(string info)
{
    cout<<"[INFO]: "<<info<<endl;
}
void WARN(string info)
{
    cout<<"[WARN]: "<<info<<endl;
}
void ERROR(string info)
{
    cout<<"[ERROR]: "<<info<<endl;
}
void FATAL(string info)
{
    cout<<"[FATAL]: "<<info<<endl;
    exit(0);
}
void INIT()
{
    INFO("Initializing...");
    if(_access(".\\pkgs",0)==0)
        INFO("pkgs dir founded");
    else
    {
        INFO("pkgs dir not founded,contrusting a new one.");
        _mkdir(".\\pkgs");
        if(_access(".\\pkgs",0)==0)
            INFO("pkgs dir founded");
        else
            FATAL("pkgs dir not founded,contrusting failed.");
    }
}
int main(int argc,char *argv[])
{
    INIT();
    system("pause");
}