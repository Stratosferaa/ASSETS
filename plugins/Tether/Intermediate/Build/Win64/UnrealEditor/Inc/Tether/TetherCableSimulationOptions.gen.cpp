// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherCableSimulationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableSimulationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions;
class UScriptStruct* FTetherCableSimulationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherCableSimulationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("TetherCableSimulationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherCableSimulationOptions>()
{
	return FTetherCableSimulationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessSolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StiffnessSolverIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSelfCollision_MetaData[];
#endif
		static void NewProp_bEnableSelfCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSelfCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionWidthScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionWidthScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParticleDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsEaseInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintsEaseInTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherCableSimulationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 *  The amount of time in seconds to simulate the cable asynchronously after the cable is modified.\n\x09 *  Higher values increase stability of the final result, but also increase the time it takes to run the simulation whenever the cable is modified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "The amount of time in seconds to simulate the cable asynchronously after the cable is modified.\nHigher values increase stability of the final result, but also increase the time it takes to run the simulation whenever the cable is modified." },
		{ "UIMax", "50.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration = { "SimulationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, SimulationDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09 *  Controls the simulation substep time for the cable.\n\x09 *  Lower numbers increase simulation accuracy but increase simulation time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Controls the simulation substep time for the cable.\nLower numbers increase simulation accuracy but increase simulation time." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.005" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, SubstepTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/** Adds stiffness constraints to the cable simulation */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Adds stiffness constraints to the cable simulation" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableStiffness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of solver iterations for constraints, controls how stiff the cable is */" },
		{ "DisplayName", "Stiffness" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "The number of solver iterations for constraints, controls how stiff the cable is" },
		{ "UIMax", "32" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations = { "StiffnessSolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, StiffnessSolverIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 *  Damps velocity of cable particles, reducing cable sway\n\x09 *  This may allow the cable to come to rest faster, therefore requiring less simulation time, at the cost of realism\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Damps velocity of cable particles, reducing cable sway\nThis may allow the cable to come to rest faster, therefore requiring less simulation time, at the cost of realism" },
		{ "UIMax", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, Drag), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *\x09Perform sweeps for each cable particle, each substep, to avoid collisions with the world.\n\x09 *\x09Greatly increases the simulation time.\n\x09 *\x09This only causes the cable to collide with other objects while simulating. Once the cable is simulated, this does not control if the cable blocks other objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Perform sweeps for each cable particle, each substep, to avoid collisions with the world.\nGreatly increases the simulation time.\nThis only causes the cable to collide with other objects while simulating. Once the cable is simulated, this does not control if the cable blocks other objects." },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *  If true, the cable will collide with itself while simulating.\n\x09 *  Adds further simulation time.\n\x09 *  Requires CVar Tether.SelfCollision 1\n\x09 */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "If true, the cable will collide with itself while simulating.\nAdds further simulation time.\nRequires CVar Tether.SelfCollision 1" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableSelfCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision = { "bEnableSelfCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Collision profile to use when simulating the cable, to control how it responds to other objects in the world\n\x09 * This does not affect the collision of the final generated static mesh\n\x09 */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Collision profile to use when simulating the cable, to control how it responds to other objects in the world\nThis does not affect the collision of the final generated static mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData)) }; // 4050625557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Scale to apply to the width of each particle to use for collision */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Scale to apply to the width of each particle to use for collision" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale = { "CollisionWidthScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionWidthScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If collision is enabled, control how much sliding friction is applied when cable is in contact. */" },
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "If collision is enabled, control how much sliding friction is applied when cable is in contact." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09*   Scale to apply to the desired distance between each particle for simulation\n\x09*   Lower values create more particles, increasing simulation accuracy but also simulation time.\n\x09*   Values above 1 may make collision with thin objects not work consistently, as the particles can separate and move around the object\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Scale to apply to the desired distance between each particle for simulation\nLower values create more particles, increasing simulation accuracy but also simulation time.\nValues above 1 may make collision with thin objects not work consistently, as the particles can separate and move around the object" },
		{ "UIMax", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale = { "ParticleDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, ParticleDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Over how much time in seconds from the start of the simulation to ease in constraints\n\x09 * This can be used to artificially increase stability of the final result by reducing movement in the system early on when constraints are being applied to the initial state of the cable\n\x09 * Should be less than the full simulation duration (e.g. half)\n\x09 * The higher this is relative the the simulation duration, the more stiffness constraints will appear to lose their effect in the final result\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherCableSimulationOptions.h" },
		{ "ToolTip", "Over how much time in seconds from the start of the simulation to ease in constraints\nThis can be used to artificially increase stability of the final result by reducing movement in the system early on when constraints are being applied to the initial state of the cable\nShould be less than the full simulation duration (e.g. half)\nThe higher this is relative the the simulation duration, the more stiffness constraints will appear to lose their effect in the final result" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime = { "ConstraintsEaseInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, ConstraintsEaseInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherCableSimulationOptions",
		sizeof(FTetherCableSimulationOptions),
		alignof(FTetherCableSimulationOptions),
		Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.InnerSingleton, Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherCableSimulationOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherCableSimulationOptions_h_Statics::ScriptStructInfo[] = {
		{ FTetherCableSimulationOptions::StaticStruct, Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewStructOps, TEXT("TetherCableSimulationOptions"), &Z_Registration_Info_UScriptStruct_TetherCableSimulationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherCableSimulationOptions), 263904097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherCableSimulationOptions_h_2829688125(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherCableSimulationOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherCableSimulationOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
