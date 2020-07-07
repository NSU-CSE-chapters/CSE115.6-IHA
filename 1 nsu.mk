##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=1 nsu
ConfigurationName      :=Debug
WorkspacePath          :="/media/fahim/Projects/1 nsu"
ProjectPath            :="/media/fahim/Projects/1 nsu"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Fahim Muntashir
Date                   :=07/07/20
CodeLitePath           :=/home/fahim/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="1 nsu.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/hello.c$(ObjectSuffix) $(IntermediateDirectory)/milesTokm.c$(ObjectSuffix) $(IntermediateDirectory)/test.c$(ObjectSuffix) $(IntermediateDirectory)/string.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/hello.c$(ObjectSuffix): hello.c $(IntermediateDirectory)/hello.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/media/fahim/Projects/1 nsu/hello.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hello.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hello.c$(DependSuffix): hello.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hello.c$(ObjectSuffix) -MF$(IntermediateDirectory)/hello.c$(DependSuffix) -MM hello.c

$(IntermediateDirectory)/hello.c$(PreprocessSuffix): hello.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hello.c$(PreprocessSuffix) hello.c

$(IntermediateDirectory)/milesTokm.c$(ObjectSuffix): milesTokm.c $(IntermediateDirectory)/milesTokm.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/media/fahim/Projects/1 nsu/milesTokm.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/milesTokm.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/milesTokm.c$(DependSuffix): milesTokm.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/milesTokm.c$(ObjectSuffix) -MF$(IntermediateDirectory)/milesTokm.c$(DependSuffix) -MM milesTokm.c

$(IntermediateDirectory)/milesTokm.c$(PreprocessSuffix): milesTokm.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/milesTokm.c$(PreprocessSuffix) milesTokm.c

$(IntermediateDirectory)/test.c$(ObjectSuffix): test.c $(IntermediateDirectory)/test.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/media/fahim/Projects/1 nsu/test.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test.c$(DependSuffix): test.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test.c$(ObjectSuffix) -MF$(IntermediateDirectory)/test.c$(DependSuffix) -MM test.c

$(IntermediateDirectory)/test.c$(PreprocessSuffix): test.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test.c$(PreprocessSuffix) test.c

$(IntermediateDirectory)/string.c$(ObjectSuffix): string.c $(IntermediateDirectory)/string.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/media/fahim/Projects/1 nsu/string.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/string.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/string.c$(DependSuffix): string.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/string.c$(ObjectSuffix) -MF$(IntermediateDirectory)/string.c$(DependSuffix) -MM string.c

$(IntermediateDirectory)/string.c$(PreprocessSuffix): string.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/string.c$(PreprocessSuffix) string.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


