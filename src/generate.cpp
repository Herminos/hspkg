#include"generate.h"
#include"description.h"
#include"info.h"

#include<fstream>
#include<iostream>

using namespace std;

void GENERATE(string pkgname)
{
    INFO("Generating "+pkgname+"...");


}

void GENERATE_MANUALLY(string pkgname)
{
    INFO("Generating "+ pkgname +" manually...");
    string ConfigFilePath=QUES("Where is the path of the xxxConfig.cmake file? (Not including the file)");
    string IncludeDirPath=QUES("Where is the path of the include dir?");
    string LibDirPath=QUES("Where is the path of the lib dir?");
    string

    INFO("Generating "+ pkgname +"done.");
}