// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/TetherMeshGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherMeshGenerator() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	void UTetherMeshGenerator::StaticRegisterNativesUTetherMeshGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherMeshGenerator);
	UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister()
	{
		return UTetherMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UTetherMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Mesh/TetherMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/Mesh/TetherMeshGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherMeshGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherMeshGenerator_Statics::ClassParams = {
		&UTetherMeshGenerator::StaticClass,
		"TetherModeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherMeshGenerator()
	{
		if (!Z_Registration_Info_UClass_UTetherMeshGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherMeshGenerator.OuterSingleton, Z_Construct_UClass_UTetherMeshGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherMeshGenerator.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTetherMeshGenerator>()
	{
		return UTetherMeshGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherMeshGenerator);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherMeshGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherMeshGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherMeshGenerator, UTetherMeshGenerator::StaticClass, TEXT("UTetherMeshGenerator"), &Z_Registration_Info_UClass_UTetherMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherMeshGenerator), 774711845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherMeshGenerator_h_1044746724(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherMeshGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherMeshGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
