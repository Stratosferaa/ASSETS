// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETHER_TetherCableActor_generated_h
#error "TetherCableActor.generated.h already included, missing '#pragma once' in TetherCableActor.h"
#endif
#define TETHER_TetherCableActor_generated_h

#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_SPARSE_DATA
#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_RPC_WRAPPERS
#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATetherCableActor(); \
	friend struct Z_Construct_UClass_ATetherCableActor_Statics; \
public: \
	DECLARE_CLASS(ATetherCableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tether"), NO_API) \
	DECLARE_SERIALIZER(ATetherCableActor)


#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_INCLASS \
private: \
	static void StaticRegisterNativesATetherCableActor(); \
	friend struct Z_Construct_UClass_ATetherCableActor_Statics; \
public: \
	DECLARE_CLASS(ATetherCableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tether"), NO_API) \
	DECLARE_SERIALIZER(ATetherCableActor)


#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATetherCableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATetherCableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATetherCableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATetherCableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATetherCableActor(ATetherCableActor&&); \
	NO_API ATetherCableActor(const ATetherCableActor&); \
public:


#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATetherCableActor(ATetherCableActor&&); \
	NO_API ATetherCableActor(const ATetherCableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATetherCableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATetherCableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATetherCableActor)


#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_39_PROLOG
#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_SPARSE_DATA \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_RPC_WRAPPERS \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_INCLASS \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_SPARSE_DATA \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETHER_API UClass* StaticClass<class ATetherCableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableActor_h


#define FOREACH_ENUM_EMESHBUILDINSTRUCTION(op) \
	op(DoNotBuild) \
	op(BuildIfModified) \
	op(AlwaysBuild) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
