// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/TMG_CustomMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMG_CustomMesh() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTMG_CustomMesh_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTMG_CustomMesh();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomMeshProperties;
class UScriptStruct* FCustomMeshProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomMeshProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomMeshProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomMeshProperties, Z_Construct_UPackage__Script_Tether(), TEXT("CustomMeshProperties"));
	}
	return Z_Registration_Info_UScriptStruct_CustomMeshProperties.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCustomMeshProperties>()
{
	return FCustomMeshProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomMeshProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshReference_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceMeshReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFitToCableWidth_MetaData[];
#endif
		static void NewProp_bFitToCableWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFitToCableWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomMeshProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *  Source Static Mesh asset to repeat along the cable\n\x09 *  Needs to be x-axis aligned\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
		{ "ToolTip", "Source Static Mesh asset to repeat along the cable\nNeeds to be x-axis aligned" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference = { "SourceMeshReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, SourceMeshReference), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *  Rotation (in degrees) of the mesh around the center of the cable\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
		{ "ToolTip", "Rotation (in degrees) of the mesh around the center of the cable" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, OffsetRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *  Number of times to repeat the Source Mesh along the length of the cable\n\x09 *  0 = Calculate automatically to best fit with minimum stretching based on Source Mesh dimensions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
		{ "ToolTip", "Number of times to repeat the Source Mesh along the length of the cable\n0 = Calculate automatically to best fit with minimum stretching based on Source Mesh dimensions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, NumInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 *  If true, width of mesh will be fitted to the Cable Width\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
		{ "ToolTip", "If true, width of mesh will be fitted to the Cable Width" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_SetBit(void* Obj)
	{
		((FCustomMeshProperties*)Obj)->bFitToCableWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth = { "bFitToCableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomMeshProperties), &Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CustomMeshProperties",
		sizeof(FCustomMeshProperties),
		alignof(FCustomMeshProperties),
		Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomMeshProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomMeshProperties.InnerSingleton, Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomMeshProperties.InnerSingleton;
	}
	void UTMG_CustomMesh::StaticRegisterNativesUTMG_CustomMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTMG_CustomMesh);
	UClass* Z_Construct_UClass_UTMG_CustomMesh_NoRegister()
	{
		return UTMG_CustomMesh::StaticClass();
	}
	struct Z_Construct_UClass_UTMG_CustomMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTMG_CustomMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTetherMeshGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Custom Cable Mesh" },
		{ "IncludePath", "Mesh/TMG_CustomMesh.h" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ModuleRelativePath", "Public/Mesh/TMG_CustomMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMG_CustomMesh, Properties), Z_Construct_UScriptStruct_FCustomMeshProperties, METADATA_PARAMS(Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData)) }; // 3040809870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTMG_CustomMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTMG_CustomMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTMG_CustomMesh_Statics::ClassParams = {
		&UTMG_CustomMesh::StaticClass,
		"TetherModeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers),
		0,
		0x003010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTMG_CustomMesh()
	{
		if (!Z_Registration_Info_UClass_UTMG_CustomMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTMG_CustomMesh.OuterSingleton, Z_Construct_UClass_UTMG_CustomMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTMG_CustomMesh.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTMG_CustomMesh>()
	{
		return UTMG_CustomMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTMG_CustomMesh);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ScriptStructInfo[] = {
		{ FCustomMeshProperties::StaticStruct, Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewStructOps, TEXT("CustomMeshProperties"), &Z_Registration_Info_UScriptStruct_CustomMeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomMeshProperties), 3040809870U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTMG_CustomMesh, UTMG_CustomMesh::StaticClass, TEXT("UTMG_CustomMesh"), &Z_Registration_Info_UClass_UTMG_CustomMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTMG_CustomMesh), 3986509812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_244976338(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TMG_CustomMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
