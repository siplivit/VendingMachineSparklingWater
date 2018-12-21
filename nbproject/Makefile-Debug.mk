#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/src/Application/Application.o \
	${OBJECTDIR}/src/Controller/Common/CommonLogic.o \
	${OBJECTDIR}/src/Controller/Common/sm/CommonSM.o \
	${OBJECTDIR}/src/Controller/Common/sm/events/Events.o \
	${OBJECTDIR}/src/Controller/Common/sm/states/Idle.o \
	${OBJECTDIR}/src/Controller/VendingMachineController.o \
	${OBJECTDIR}/src/CupDispenser.o \
	${OBJECTDIR}/src/PersistenceManager/JsonFilePersistence.o \
	${OBJECTDIR}/src/PersistenceManager/PersistenceManager.o \
	${OBJECTDIR}/src/Product.o \
	${OBJECTDIR}/src/Pump.o \
	${OBJECTDIR}/src/SettingsManager.o \
	${OBJECTDIR}/src/Syrup.o \
	${OBJECTDIR}/src/SyrupPump.o \
	${OBJECTDIR}/src/practice/list/listclass.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vendingmachinesparklingwater

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vendingmachinesparklingwater: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vendingmachinesparklingwater ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/src/Application/Application.o: src/Application/Application.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Application
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Application/Application.o src/Application/Application.cpp

${OBJECTDIR}/src/Controller/Common/CommonLogic.o: src/Controller/Common/CommonLogic.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Controller/Common
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Controller/Common/CommonLogic.o src/Controller/Common/CommonLogic.cpp

${OBJECTDIR}/src/Controller/Common/sm/CommonSM.o: src/Controller/Common/sm/CommonSM.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Controller/Common/sm
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Controller/Common/sm/CommonSM.o src/Controller/Common/sm/CommonSM.cpp

${OBJECTDIR}/src/Controller/Common/sm/events/Events.o: src/Controller/Common/sm/events/Events.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Controller/Common/sm/events
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Controller/Common/sm/events/Events.o src/Controller/Common/sm/events/Events.cpp

${OBJECTDIR}/src/Controller/Common/sm/states/Idle.o: src/Controller/Common/sm/states/Idle.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Controller/Common/sm/states
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Controller/Common/sm/states/Idle.o src/Controller/Common/sm/states/Idle.cpp

${OBJECTDIR}/src/Controller/VendingMachineController.o: src/Controller/VendingMachineController.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Controller
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Controller/VendingMachineController.o src/Controller/VendingMachineController.cpp

${OBJECTDIR}/src/CupDispenser.o: src/CupDispenser.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/CupDispenser.o src/CupDispenser.cpp

${OBJECTDIR}/src/PersistenceManager/JsonFilePersistence.o: src/PersistenceManager/JsonFilePersistence.cpp
	${MKDIR} -p ${OBJECTDIR}/src/PersistenceManager
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/PersistenceManager/JsonFilePersistence.o src/PersistenceManager/JsonFilePersistence.cpp

${OBJECTDIR}/src/PersistenceManager/PersistenceManager.o: src/PersistenceManager/PersistenceManager.cpp
	${MKDIR} -p ${OBJECTDIR}/src/PersistenceManager
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/PersistenceManager/PersistenceManager.o src/PersistenceManager/PersistenceManager.cpp

${OBJECTDIR}/src/Product.o: src/Product.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Product.o src/Product.cpp

${OBJECTDIR}/src/Pump.o: src/Pump.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Pump.o src/Pump.cpp

${OBJECTDIR}/src/SettingsManager.o: src/SettingsManager.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SettingsManager.o src/SettingsManager.cpp

${OBJECTDIR}/src/Syrup.o: src/Syrup.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Syrup.o src/Syrup.cpp

${OBJECTDIR}/src/SyrupPump.o: src/SyrupPump.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SyrupPump.o src/SyrupPump.cpp

${OBJECTDIR}/src/practice/list/listclass.o: src/practice/list/listclass.cpp
	${MKDIR} -p ${OBJECTDIR}/src/practice/list
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/practice/list/listclass.o src/practice/list/listclass.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
