#include"generate.h"
#include"description.h"
#include"info.h"

#include<fstream>
#include<iostream>

using namespace std;

class CMAKE_GENERATOR
{
    public:
    string pkgname;
    string ConfigFilePath;
    string IncludeDirPath;
    string LibDirPath;
    string CMAKELISTS;
    string CMAKELISTS_CONTENT;
    string CMAKE_GENERATE()
    {
        CMAKELISTS_CONTENT+="#paste the following content into the CMakeLists.txt file\n";
        CMAKELISTS_CONTENT="cmake_minimum_required(VERSION xxx)\n";
        CMAKELISTS_CONTENT+="project(xxx)\n";
        CMAKELISTS_CONTENT+="set("+pkgname+"_DIR "+ConfigFilePath+")\n";
        CMAKELISTS_CONTENT+="find_package("+pkgname+")\n";
        CMAKELISTS_CONTENT+="include_directories("+IncludeDirPath+")\n";
        CMAKELISTS_CONTENT+="link_directories("+LibDirPath+")\n";
        CMAKELISTS_CONTENT+="add_executable(xxx xxx.cpp)\n";
        CMAKELISTS_CONTENT+="target_link_libraries(xxx ${"+pkgname+"_LIBS})\n"; 
        return CMAKELISTS_CONTENT;
    }
    
};
void GENERATE(string pkgname)
{
    INFO("Generating "+pkgname+"...");


}

void GENERATE_MANUALLY(string pkgname)
{
    INFO("Generating "+ pkgname +" manually...");
    CMAKE_GENERATOR CMAKE;
    CMAKE.ConfigFilePath=QUES("Where is the path of the xxxConfig.cmake file? (Not including the file)");
    CMAKE.IncludeDirPath=QUES("Where is the path of the include dir?");
    CMAKE.LibDirPath=QUES("Where is the path of the lib dir?");
    string CMAKECONTENT=CMAKE.CMAKE_GENERATE();
    INFO("CMakeLists.txt generated done.");
    INFO("The content of CMakeLists.txt is:");
    cout<<CMAKECONTENT<<endl;
    INFO("Generating "+ pkgname +"done.");
}