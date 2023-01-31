// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSimulationInstanceResources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationInstanceResources() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources;
class UScriptStruct* FTetherSimulationInstanceResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationInstanceResources"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationInstanceResources>()
{
	return FTetherSimulationInstanceResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages resources for a single simulation instance that need to be accessible by reference on the simulation worker thread\n * This needs to be created before a simulation runs and destroyed when it is finished, both on the game thread\n */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationInstanceResources.h" },
		{ "ToolTip", "Manages resources for a single simulation instance that need to be accessible by reference on the simulation worker thread\nThis needs to be created before a simulation runs and destroyed when it is finished, both on the game thread" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationInstanceResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationInstanceResources.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FTetherSimulationInstanceResources*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationInstanceResources), &Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationInstanceResources.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationInstanceResources, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationInstanceResources.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationInstanceResources, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationInstanceResources",
		sizeof(FTetherSimulationInstanceResources),
		alignof(FTetherSimulationInstanceResources),
		Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationInstanceResources_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationInstanceResources_h_Statics::ScriptStructInfo[] = {
		{ FTetherSimulationInstanceResources::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewStructOps, TEXT("TetherSimulationInstanceResources"), &Z_Registration_Info_UScriptStruct_TetherSimulationInstanceResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationInstanceResources), 648147391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationInstanceResources_h_1310550269(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationInstanceResources_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationInstanceResources_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
