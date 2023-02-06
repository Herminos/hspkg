#include<iostream>
#include"info.h"
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
string QUES(string question)
{
    cout<<"[QUES]: "<<question<<endl;
    string answer;
    cin>>answer;
    return answer;
}