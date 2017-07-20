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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/src/CupDispenser.o \
	${OBJECTDIR}/src/Machine.o \
	${OBJECTDIR}/src/MachineStates/LoadingState.o \
	${OBJECTDIR}/src/MachineStates/SaleReadyState.o \
	${OBJECTDIR}/src/MachineStates/VMState.o \
	${OBJECTDIR}/src/Product.o \
	${OBJECTDIR}/src/Pump.o \
	${OBJECTDIR}/src/Syrup.o \
	${OBJECTDIR}/src/SyrupPump.o


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
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/src/CupDispenser.o: src/CupDispenser.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/CupDispenser.o src/CupDispenser.cpp

${OBJECTDIR}/src/Machine.o: src/Machine.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Machine.o src/Machine.cpp

${OBJECTDIR}/src/MachineStates/LoadingState.o: src/MachineStates/LoadingState.cpp
	${MKDIR} -p ${OBJECTDIR}/src/MachineStates
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MachineStates/LoadingState.o src/MachineStates/LoadingState.cpp

${OBJECTDIR}/src/MachineStates/SaleReadyState.o: src/MachineStates/SaleReadyState.cpp
	${MKDIR} -p ${OBJECTDIR}/src/MachineStates
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MachineStates/SaleReadyState.o src/MachineStates/SaleReadyState.cpp

${OBJECTDIR}/src/MachineStates/VMState.o: src/MachineStates/VMState.cpp
	${MKDIR} -p ${OBJECTDIR}/src/MachineStates
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MachineStates/VMState.o src/MachineStates/VMState.cpp

${OBJECTDIR}/src/Product.o: src/Product.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Product.o src/Product.cpp

${OBJECTDIR}/src/Pump.o: src/Pump.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Pump.o src/Pump.cpp

${OBJECTDIR}/src/Syrup.o: src/Syrup.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Syrup.o src/Syrup.cpp

${OBJECTDIR}/src/SyrupPump.o: src/SyrupPump.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SyrupPump.o src/SyrupPump.cpp

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
