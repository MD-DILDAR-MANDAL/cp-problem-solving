##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=STL_list
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/deepjal/Documents/Documents
ProjectPath            :=C:/Users/deepjal/Documents/Documents/STL_list
IntermediateDirectory  :=../build-$(ConfigurationName)/STL_list
OutDir                 :=../build-$(ConfigurationName)/STL_list
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Deepjal
Date                   :=18/12/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/ar.exe rcu
CXX      := C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe
CC       := C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/STL_list/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/STL_list/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\STL_list" mkdir "..\build-$(ConfigurationName)\STL_list"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\STL_list" mkdir "..\build-$(ConfigurationName)\STL_list"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/STL_list/.d:
	@if not exist "..\build-$(ConfigurationName)\STL_list" mkdir "..\build-$(ConfigurationName)\STL_list"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/STL_list/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/STL_list/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/deepjal/Documents/Documents/STL_list/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/STL_list/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/STL_list/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/STL_list/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/STL_list/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/STL_list/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/STL_list//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


