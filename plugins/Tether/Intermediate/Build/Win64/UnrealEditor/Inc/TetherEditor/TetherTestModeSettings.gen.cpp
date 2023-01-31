// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetherEditor/Public/Tests/TetherTestModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherTestModeSettings() {}
// Cross Module References
	TETHEREDITOR_API UClass* Z_Construct_UClass_UTetherTestModeSettings_NoRegister();
	TETHEREDITOR_API UClass* Z_Construct_UClass_UTetherTestModeSettings();
	TETHEREDITOR_API UClass* Z_Construct_UClass_UTetherModeSettings();
	UPackage* Z_Construct_UPackage__Script_TetherEditor();
// End Cross Module References
	void UTetherTestModeSettings::StaticRegisterNativesUTetherTestModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherTestModeSettings);
	UClass* Z_Construct_UClass_UTetherTestModeSettings_NoRegister()
	{
		return UTetherTestModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTetherTestModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherTestModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTetherModeSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TetherEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherTestModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mode settings subclass for testing which ignores config\n */" },
		{ "IncludePath", "Tests/TetherTestModeSettings.h" },
		{ "ModuleRelativePath", "Public/Tests/TetherTestModeSettings.h" },
		{ "ToolTip", "Mode settings subclass for testing which ignores config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherTestModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherTestModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherTestModeSettings_Statics::ClassParams = {
		&UTetherTestModeSettings::StaticClass,
		"TetherTestModeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherTestModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherTestModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherTestModeSettings()
	{
		if (!Z_Registration_Info_UClass_UTetherTestModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherTestModeSettings.OuterSingleton, Z_Construct_UClass_UTetherTestModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherTestModeSettings.OuterSingleton;
	}
	template<> TETHEREDITOR_API UClass* StaticClass<UTetherTestModeSettings>()
	{
		return UTetherTestModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherTestModeSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_Tests_TetherTestModeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_Tests_TetherTestModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherTestModeSettings, UTetherTestModeSettings::StaticClass, TEXT("UTetherTestModeSettings"), &Z_Registration_Info_UClass_UTetherTestModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherTestModeSettings), 2632078766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_Tests_TetherTestModeSettings_h_1364353318(TEXT("/Script/TetherEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_Tests_TetherTestModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_Tests_TetherTestModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
