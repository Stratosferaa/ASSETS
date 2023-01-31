// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETHER_TetherSimulationParams_generated_h
#error "TetherSimulationParams.generated.h already included, missing '#pragma once' in TetherSimulationParams.h"
#endif
#define TETHER_TetherSimulationParams_generated_h

#define FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TETHER_API UScriptStruct* StaticStruct<struct FTetherSegmentSimulationParams>();

#define FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetherSimulationParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TETHER_API UScriptStruct* StaticStruct<struct FTetherSimulationParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h


#define FOREACH_ENUM_ETETHERSIMULATIONTIMINGMODE(op) \
	op(ETetherSimulationTimingMode::SimulateInSequence) \
	op(ETetherSimulationTimingMode::ProgressSimulation) 

enum class ETetherSimulationTimingMode : uint8;
template<> TETHER_API UEnum* StaticEnum<ETetherSimulationTimingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
