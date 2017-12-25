// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALLINONE_allinoneCharacter_generated_h
#error "allinoneCharacter.generated.h already included, missing '#pragma once' in allinoneCharacter.h"
#endif
#define ALLINONE_allinoneCharacter_generated_h

#define main_Source_allinone_allinoneCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRattack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rattack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRLR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RLR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRFB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RFB(); \
		P_NATIVE_END; \
	}


#define main_Source_allinone_allinoneCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRattack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rattack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRLR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RLR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRFB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RFB(); \
		P_NATIVE_END; \
	}


#define main_Source_allinone_allinoneCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAallinoneCharacter(); \
	friend ALLINONE_API class UClass* Z_Construct_UClass_AallinoneCharacter(); \
public: \
	DECLARE_CLASS(AallinoneCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/allinone"), NO_API) \
	DECLARE_SERIALIZER(AallinoneCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define main_Source_allinone_allinoneCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAallinoneCharacter(); \
	friend ALLINONE_API class UClass* Z_Construct_UClass_AallinoneCharacter(); \
public: \
	DECLARE_CLASS(AallinoneCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/allinone"), NO_API) \
	DECLARE_SERIALIZER(AallinoneCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define main_Source_allinone_allinoneCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AallinoneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AallinoneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AallinoneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AallinoneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AallinoneCharacter(AallinoneCharacter&&); \
	NO_API AallinoneCharacter(const AallinoneCharacter&); \
public:


#define main_Source_allinone_allinoneCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AallinoneCharacter(AallinoneCharacter&&); \
	NO_API AallinoneCharacter(const AallinoneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AallinoneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AallinoneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AallinoneCharacter)


#define main_Source_allinone_allinoneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AallinoneCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AallinoneCharacter, FollowCamera); }


#define main_Source_allinone_allinoneCharacter_h_9_PROLOG
#define main_Source_allinone_allinoneCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_allinone_allinoneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	main_Source_allinone_allinoneCharacter_h_12_RPC_WRAPPERS \
	main_Source_allinone_allinoneCharacter_h_12_INCLASS \
	main_Source_allinone_allinoneCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define main_Source_allinone_allinoneCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_allinone_allinoneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	main_Source_allinone_allinoneCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	main_Source_allinone_allinoneCharacter_h_12_INCLASS_NO_PURE_DECLS \
	main_Source_allinone_allinoneCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID main_Source_allinone_allinoneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
