// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_mainGameMode_generated_h
#error "mainGameMode.generated.h already included, missing '#pragma once' in mainGameMode.h"
#endif
#define MAIN_mainGameMode_generated_h

#define main_Source_main_mainGameMode_h_12_RPC_WRAPPERS
#define main_Source_main_mainGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define main_Source_main_mainGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmainGameMode(); \
	friend MAIN_API class UClass* Z_Construct_UClass_AmainGameMode(); \
public: \
	DECLARE_CLASS(AmainGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/main"), MAIN_API) \
	DECLARE_SERIALIZER(AmainGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define main_Source_main_mainGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmainGameMode(); \
	friend MAIN_API class UClass* Z_Construct_UClass_AmainGameMode(); \
public: \
	DECLARE_CLASS(AmainGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/main"), MAIN_API) \
	DECLARE_SERIALIZER(AmainGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define main_Source_main_mainGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MAIN_API AmainGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmainGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MAIN_API, AmainGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MAIN_API AmainGameMode(AmainGameMode&&); \
	MAIN_API AmainGameMode(const AmainGameMode&); \
public:


#define main_Source_main_mainGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MAIN_API AmainGameMode(AmainGameMode&&); \
	MAIN_API AmainGameMode(const AmainGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MAIN_API, AmainGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmainGameMode)


#define main_Source_main_mainGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define main_Source_main_mainGameMode_h_9_PROLOG
#define main_Source_main_mainGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_main_mainGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	main_Source_main_mainGameMode_h_12_RPC_WRAPPERS \
	main_Source_main_mainGameMode_h_12_INCLASS \
	main_Source_main_mainGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define main_Source_main_mainGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_main_mainGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	main_Source_main_mainGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	main_Source_main_mainGameMode_h_12_INCLASS_NO_PURE_DECLS \
	main_Source_main_mainGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID main_Source_main_mainGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
