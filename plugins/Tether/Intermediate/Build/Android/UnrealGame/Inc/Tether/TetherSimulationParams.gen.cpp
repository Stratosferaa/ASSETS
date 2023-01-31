// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSimulationParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationParams() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ETetherSimulationTimingMode();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParams();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams;
class UScriptStruct* FTetherSegmentSimulationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSegmentSimulationParams"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSegmentSimulationParams>()
{
	return FTetherSegmentSimulationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSimulateSegment_MetaData[];
#endif
		static void NewProp_bShouldSimulateSegment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSimulateSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSegmentSimulationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData[] = {
		{ "Comment", "// If true, the segment following this point (if any) should be simulated\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
		{ "ToolTip", "If true, the segment following this point (if any) should be simulated" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationParams*)Obj)->bShouldSimulateSegment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment = { "bShouldSimulateSegment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationParams), &Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSegmentSimulationParams, SimulationOptions), Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData)) }; // 3759060144
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSegmentSimulationParams",
		sizeof(FTetherSegmentSimulationParams),
		alignof(FTetherSegmentSimulationParams),
		Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.InnerSingleton, Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETetherSimulationTimingMode;
	static UEnum* ETetherSimulationTimingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETetherSimulationTimingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETetherSimulationTimingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tether_ETetherSimulationTimingMode, Z_Construct_UPackage__Script_Tether(), TEXT("ETetherSimulationTimingMode"));
		}
		return Z_Registration_Info_UEnum_ETetherSimulationTimingMode.OuterSingleton;
	}
	template<> TETHER_API UEnum* StaticEnum<ETetherSimulationTimingMode>()
	{
		return ETetherSimulationTimingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enumerators[] = {
		{ "ETetherSimulationTimingMode::SimulateInSequence", (int64)ETetherSimulationTimingMode::SimulateInSequence },
		{ "ETetherSimulationTimingMode::ProgressSimulation", (int64)ETetherSimulationTimingMode::ProgressSimulation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
		{ "ProgressSimulation.Comment", "// Simulate all segments, one at a time, by the desired time\n" },
		{ "ProgressSimulation.Name", "ETetherSimulationTimingMode::ProgressSimulation" },
		{ "ProgressSimulation.ToolTip", "Simulate all segments, one at a time, by the desired time" },
		{ "SimulateInSequence.Name", "ETetherSimulationTimingMode::SimulateInSequence" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		"ETetherSimulationTimingMode",
		"ETetherSimulationTimingMode",
		Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tether_ETetherSimulationTimingMode()
	{
		if (!Z_Registration_Info_UEnum_ETetherSimulationTimingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETetherSimulationTimingMode.InnerSingleton, Z_Construct_UEnum_Tether_ETetherSimulationTimingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETetherSimulationTimingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationParams;
class UScriptStruct* FTetherSimulationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationParams, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationParams"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationParams.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationParams>()
{
	return FTetherSimulationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredParticleDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredParticleDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CableForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName = { "SimulationName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SimulationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode = { "TimingMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, TimingMode), Z_Construct_UEnum_Tether_ETetherSimulationTimingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData)) }; // 2917019626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth = { "CollisionWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, CollisionWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance = { "DesiredParticleDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, DesiredParticleDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SimulationOptions), Z_Construct_UScriptStruct_FTetherCableSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData)) }; // 263904097
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_Inner = { "SegmentParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSegmentSimulationParams, METADATA_PARAMS(nullptr, 0) }; // 3420058653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams = { "SegmentParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SegmentParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData)) }; // 3420058653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationParams",
		sizeof(FTetherSimulationParams),
		alignof(FTetherSimulationParams),
		Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationParams.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::EnumInfo[] = {
		{ ETetherSimulationTimingMode_StaticEnum, TEXT("ETetherSimulationTimingMode"), &Z_Registration_Info_UEnum_ETetherSimulationTimingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2917019626U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::ScriptStructInfo[] = {
		{ FTetherSegmentSimulationParams::StaticStruct, Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewStructOps, TEXT("TetherSegmentSimulationParams"), &Z_Registration_Info_UScriptStruct_TetherSegmentSimulationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSegmentSimulationParams), 3420058653U) },
		{ FTetherSimulationParams::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewStructOps, TEXT("TetherSimulationParams"), &Z_Registration_Info_UScriptStruct_TetherSimulationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationParams), 2911104955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_3430189422(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationParams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
