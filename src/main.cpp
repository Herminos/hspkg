#include<iostream>
#include<io.h>
#include<direct.h>

#include"info.h"
#include"description.h"

using namespace std;


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
            ERROR("pkgs dir not founded,contrusting failed.");
    }
}

int main(int argc,char *argv[])
{
    if(argc==1)
    {
        VERSION_DESCRIPTION();
        USAGE_DESCRIPTION();
        return 0;
    }
    if(argc==2)
    {
        if(strcmp(argv[1],"-v")==0)
        {
            VERSION_DESCRIPTION();
            return 0;
        }
        if(strcmp(argv[1],"-h")==0)
        {
            USAGE_DESCRIPTION();
            return 0;
        }
        if(strcmp(argv[1],"-i")==0)
        {
            INIT();
            return 0;
        }
        if(strcmp(argv[1],"-list")==0)
        {
            INFO("The packages list:");
            system("dir .\\pkgs");
            return 0;
        }
        else
        {
            ERROR("Unknown argument. use -h to get help.");
            return 0;
        }
    }
    if(argc==3)
    {
        if(strcmp(argv[1],"-install")==0)
        {
            string cmd="hspkg.exe -i";
            system(cmd.c_str());
            cmd="copy .\\pkgs\\"+string(argv[2])+" .\\";
            system(cmd.c_str());
            cmd="hspkg.exe -i";
            system(cmd.c_str());
            return 0;
        }
        if(strcmp(argv[1],"-remove")==0)
        {
            string cmd="hspkg.exe -i";
            system(cmd.c_str());
            cmd="del .\\"+string(argv[2]);
            system(cmd.c_str());
            cmd="hspkg.exe -i";
            system(cmd.c_str());
            return 0;
        }
        if(strcmp(argv[1],"-generate"))
        {

        }
        else
        {
            ERROR("Unknown argument. use -h to get help.");
            return 0;
        }
    }
    else
    {
        ERROR("Unknown argument. use -h to get help.");
        return 0;
    }
}