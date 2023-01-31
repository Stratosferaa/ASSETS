// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherCableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableActor() {}
// Cross Module References
	TETHER_API UEnum* Z_Construct_UEnum_Tether_EMeshBuildInstruction();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UClass* Z_Construct_UClass_ATetherCableActor_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_ATetherCableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription();
	TETHER_API UClass* Z_Construct_UClass_UTetherCableMeshComponent_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshBuildInstruction;
	static UEnum* EMeshBuildInstruction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshBuildInstruction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshBuildInstruction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tether_EMeshBuildInstruction, Z_Construct_UPackage__Script_Tether(), TEXT("EMeshBuildInstruction"));
		}
		return Z_Registration_Info_UEnum_EMeshBuildInstruction.OuterSingleton;
	}
	template<> TETHER_API UEnum* StaticEnum<EMeshBuildInstruction>()
	{
		return EMeshBuildInstruction_StaticEnum();
	}
	struct Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enumerators[] = {
		{ "DoNotBuild", (int64)DoNotBuild },
		{ "BuildIfModified", (int64)BuildIfModified },
		{ "AlwaysBuild", (int64)AlwaysBuild },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysBuild.Name", "AlwaysBuild" },
		{ "BuildIfModified.Name", "BuildIfModified" },
		{ "DoNotBuild.Name", "DoNotBuild" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		"EMeshBuildInstruction",
		"EMeshBuildInstruction",
		Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tether_EMeshBuildInstruction()
	{
		if (!Z_Registration_Info_UEnum_EMeshBuildInstruction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshBuildInstruction.InnerSingleton, Z_Construct_UEnum_Tether_EMeshBuildInstruction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshBuildInstruction.InnerSingleton;
	}
	void ATetherCableActor::StaticRegisterNativesATetherCableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetherCableActor);
	UClass* Z_Construct_UClass_ATetherCableActor_NoRegister()
	{
		return ATetherCableActor::StaticClass();
	}
	struct Z_Construct_UClass_ATetherCableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CableProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockCurrentState_MetaData[];
#endif
		static void NewProp_bLockCurrentState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSynchronousRealtime_MetaData[];
#endif
		static void NewProp_bSynchronousRealtime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronousRealtime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeInEditorTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RealtimeInEditorTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeSimulationParticles_MetaData[];
#endif
		static void NewProp_bDebugVisualizeSimulationParticles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeSimulationParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeSimulationCollision_MetaData[];
#endif
		static void NewProp_bDebugVisualizeSimulationCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeSimulationCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData[];
#endif
		static void NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeBuiltStaticMeshPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeContactPoints_MetaData[];
#endif
		static void NewProp_bDebugVisualizeContactPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeContactPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeComponentLocations_MetaData[];
#endif
		static void NewProp_bDebugVisualizeComponentLocations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeComponentLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeTangents_MetaData[];
#endif
		static void NewProp_bDebugVisualizeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCreated_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuideSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GuideSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSimulationModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSimulationModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuiltCurveDescriptionLocalSpaceSimplified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicPreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetherCableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tether's core Actor representing a cable in the world\n */" },
		{ "HideCategories", "Physics Activation" },
		{ "IncludePath", "TetherCableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Tether's core Actor representing a cable in the world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties = { "CableProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, CableProperties), Z_Construct_UScriptStruct_FTetherCableProperties, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData)) }; // 784995132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Freeze the current simulation and mesh to prevent it updating, after which it can be moved around like a static mesh\n\x09 * This is useful to stop the cable being changed accidentally when it's meant to be final\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
		{ "ToolTip", "Freeze the current simulation and mesh to prevent it updating, after which it can be moved around like a static mesh\nThis is useful to stop the cable being changed accidentally when it's meant to be final" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bLockCurrentState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState = { "bLockCurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bSynchronousRealtime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime = { "bSynchronousRealtime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
		{ "UIMax", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation = { "RealtimeInEditorTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, RealtimeInEditorTimeDilation), METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeSimulationParticles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles = { "bDebugVisualizeSimulationParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "Comment", "/* Can severely impact performance for cables with a low Simulation Particle Segment Length */" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
		{ "ToolTip", "Can severely impact performance for cables with a low Simulation Particle Segment Length" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeSimulationCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision = { "bDebugVisualizeSimulationCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeBuiltStaticMeshPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints = { "bDebugVisualizeBuiltStaticMeshPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeContactPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints = { "bDebugVisualizeContactPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeComponentLocations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations = { "bDebugVisualizeComponentLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData[] = {
		{ "Category", "TetherDebug" },
		{ "Comment", "/**\n\x09 * Shows start and end tangents of each segment.\n\x09 * Note: The end tangent is shown reversed, to be distinguishable from the next segment's start tangent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
		{ "ToolTip", "Shows start and end tangents of each segment.\nNote: The end tangent is shown reversed, to be distinguishable from the next segment's start tangent." },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents = { "bDebugVisualizeTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Controls if the mesh for the cable is visible or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "NoResimulate", "" },
		{ "ToolTip", "Controls if the mesh for the cable is visible or not" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TetherProperties" },
		{ "Comment", "// Static mesh component containing the baked cable\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Static mesh component containing the baked cable" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData[] = {
		{ "Comment", "// UTC time that this cable was initially created in editor\n// Used to determine which cables should collide with which other cables, for deterministic interaction between multiple cables\n" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "UTC time that this cable was initially created in editor\nUsed to determine which cables should collide with which other cables, for deterministic interaction between multiple cables" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated = { "TimeCreated", nullptr, (EPropertyFlags)0x0040800000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, TimeCreated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData[] = {
		{ "Comment", "// Spline used to allow the user to direct the overall shape of the cable and segments before simulation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Spline used to allow the user to direct the overall shape of the cable and segments before simulation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline = { "GuideSpline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, GuideSpline), Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData[] = {
		{ "Comment", "// The active simulation state for the cable\n// This is updated before and after the cable is simulated, and is used to create the mesh geometry\n" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "The active simulation state for the cable\nThis is updated before and after the cable is simulated, and is used to create the mesh geometry" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel = { "ActiveSimulationModel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, ActiveSimulationModel), Z_Construct_UScriptStruct_FTetherSimulationModel, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData)) }; // 3450382127
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "// Internal static mesh object to contain mesh data without having to generate and maintain an external asset\n// NonPIEDuplicateTransient - We don't want to copy the reference to the StaticMesh in the source actor when duplicating in editor, but we do want to copy it for PIE worlds\n" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Internal static mesh object to contain mesh data without having to generate and maintain an external asset\nNonPIEDuplicateTransient - We don't want to copy the reference to the StaticMesh in the source actor when duplicating in editor, but we do want to copy it for PIE worlds" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040800000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData[] = {
		{ "Comment", "// Last set of parameters that have been built to static mesh\n// Tracked so that we know when the static mesh is dirty/invalidated, and so we don't rebuild it and invalidate static lighting when we don't need to\n// Not marked as transient - copied to the duplicated actor\n" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Last set of parameters that have been built to static mesh\nTracked so that we know when the static mesh is dirty/invalidated, and so we don't rebuild it and invalidate static lighting when we don't need to\nNot marked as transient - copied to the duplicated actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified = { "BuiltCurveDescriptionLocalSpaceSimplified", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, BuiltCurveDescriptionLocalSpaceSimplified), Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData)) }; // 65284019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData[] = {
		{ "Comment", "// Editor preview mesh which can be quickly updated without having to bake a static mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ToolTip", "Editor preview mesh which can be quickly updated without having to bake a static mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh = { "DynamicPreviewMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, DynamicPreviewMesh), Z_Construct_UClass_UTetherCableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, MeshGenerator), Z_Construct_UClass_UTetherMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetherCableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetherCableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetherCableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetherCableActor_Statics::ClassParams = {
		&ATetherCableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetherCableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetherCableActor()
	{
		if (!Z_Registration_Info_UClass_ATetherCableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetherCableActor.OuterSingleton, Z_Construct_UClass_ATetherCableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetherCableActor.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<ATetherCableActor>()
	{
		return ATetherCableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetherCableActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::EnumInfo[] = {
		{ EMeshBuildInstruction_StaticEnum, TEXT("EMeshBuildInstruction"), &Z_Registration_Info_UEnum_EMeshBuildInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2340660282U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetherCableActor, ATetherCableActor::StaticClass, TEXT("ATetherCableActor"), &Z_Registration_Info_UClass_ATetherCableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetherCableActor), 2559411657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_2537913985(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
