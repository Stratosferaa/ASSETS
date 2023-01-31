// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSimulationSegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationSegment() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParticle();
	UPackage* Z_Construct_UPackage__Script_Tether();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationParticle;
class UScriptStruct* FTetherSimulationParticle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationParticle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationParticle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationParticle, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationParticle"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationParticle.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationParticle>()
{
	return FTetherSimulationParticle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ParticleUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFree_MetaData[];
#endif
		static void NewProp_bFree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationParticle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId = { "ParticleUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, ParticleUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData[] = {
		{ "Comment", "/** If this point is free (simulating) or fixed to something */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "If this point is free (simulating) or fixed to something" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_SetBit(void* Obj)
	{
		((FTetherSimulationParticle*)Obj)->bFree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree = { "bFree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationParticle), &Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Current position of point */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Current position of point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData[] = {
		{ "Comment", "/** Position of point on previous iteration */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Position of point on previous iteration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationParticle",
		sizeof(FTetherSimulationParticle),
		alignof(FTetherSimulationParticle),
		Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParticle()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationParticle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationParticle.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationParticle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationSegment;
class UScriptStruct* FTetherSimulationSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationSegment, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationSegment"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationSegment.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationSegment>()
{
	return FTetherSimulationSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SegmentUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineSegmentInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineSegmentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Particles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Particles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvalidated_MetaData[];
#endif
		static void NewProp_bInvalidated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvalidated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData[] = {
		{ "Comment", "// Unique ID of the segment - also the array index in the Model\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Unique ID of the segment - also the array index in the Model" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId = { "SegmentUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SegmentUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData[] = {
		{ "Comment", "// Segment info in world space\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Segment info in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo = { "SplineSegmentInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SplineSegmentInfo), Z_Construct_UScriptStruct_FSplineSegmentInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData)) }; // 3551903335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData[] = {
		{ "Comment", "// Physical length of cable segment including slack\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Physical length of cable segment including slack" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_Inner = { "Particles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSimulationParticle, METADATA_PARAMS(nullptr, 0) }; // 3404895422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, Particles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData)) }; // 3404895422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SimulationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData[] = {
		{ "Comment", "// Is the segment invalid and in need of being resimulated\n// False if the segment is up to date, or if there is an async simulation running with the\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegment.h" },
		{ "ToolTip", "Is the segment invalid and in need of being resimulated\nFalse if the segment is up to date, or if there is an async simulation running with the" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_SetBit(void* Obj)
	{
		((FTetherSimulationSegment*)Obj)->bInvalidated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated = { "bInvalidated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationSegment), &Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationSegment",
		sizeof(FTetherSimulationSegment),
		alignof(FTetherSimulationSegment),
		Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationSegment.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationSegment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegment_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegment_h_Statics::ScriptStructInfo[] = {
		{ FTetherSimulationParticle::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewStructOps, TEXT("TetherSimulationParticle"), &Z_Registration_Info_UScriptStruct_TetherSimulationParticle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationParticle), 3404895422U) },
		{ FTetherSimulationSegment::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewStructOps, TEXT("TetherSimulationSegment"), &Z_Registration_Info_UScriptStruct_TetherSimulationSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationSegment), 879276763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegment_h_2336549343(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegment_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
