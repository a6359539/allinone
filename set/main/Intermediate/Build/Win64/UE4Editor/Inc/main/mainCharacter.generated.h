// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_mainCharacter_generated_h
#error "mainCharacter.generated.h already included, missing '#pragma once' in mainCharacter.h"
#endif
#define MAIN_mainCharacter_generated_h

#define main_Source_main_mainCharacter_h_14_RPC_WRAPPERS \
	virtual bool RsetLR_Validate(float ); \
	virtual void RsetLR_Implementation(float val); \
	virtual bool RsetFB_Validate(float ); \
	virtual void RsetFB_Implementation(float val); \
 \
	DECLARE_FUNCTION(execRsetLR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->RsetLR_Validate(Z_Param_val)) \
		{ \
			RPC_ValidateFailed(TEXT("RsetLR_Validate")); \
			return; \
		} \
		this->RsetLR_Implementation(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRsetFB) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->RsetFB_Validate(Z_Param_val)) \
		{ \
			RPC_ValidateFailed(TEXT("RsetFB_Validate")); \
			return; \
		} \
		this->RsetFB_Implementation(Z_Param_val); \
		P_NATIVE_END; \
	} \
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


#define main_Source_main_mainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool RsetLR_Validate(float ); \
	virtual void RsetLR_Implementation(float val); \
	virtual bool RsetFB_Validate(float ); \
	virtual void RsetFB_Implementation(float val); \
 \
	DECLARE_FUNCTION(execRsetLR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->RsetLR_Validate(Z_Param_val)) \
		{ \
			RPC_ValidateFailed(TEXT("RsetLR_Validate")); \
			return; \
		} \
		this->RsetLR_Implementation(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRsetFB) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->RsetFB_Validate(Z_Param_val)) \
		{ \
			RPC_ValidateFailed(TEXT("RsetFB_Validate")); \
			return; \
		} \
		this->RsetFB_Implementation(Z_Param_val); \
		P_NATIVE_END; \
	} \
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


#define main_Source_main_mainCharacter_h_14_EVENT_PARMS \
	struct mainCharacter_eventRsetFB_Parms \
	{ \
		float val; \
	}; \
	struct mainCharacter_eventRsetLR_Parms \
	{ \
		float val; \
	};


#define main_Source_main_mainCharacter_h_14_CALLBACK_WRAPPERS
#define main_Source_main_mainCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmainCharacter(); \
	friend MAIN_API class UClass* Z_Construct_UClass_AmainCharacter(); \
public: \
	DECLARE_CLASS(AmainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/main"), NO_API) \
	DECLARE_SERIALIZER(AmainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define main_Source_main_mainCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAmainCharacter(); \
	friend MAIN_API class UClass* Z_Construct_UClass_AmainCharacter(); \
public: \
	DECLARE_CLASS(AmainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/main"), NO_API) \
	DECLARE_SERIALIZER(AmainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define main_Source_main_mainCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmainCharacter(AmainCharacter&&); \
	NO_API AmainCharacter(const AmainCharacter&); \
public:


#define main_Source_main_mainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmainCharacter(AmainCharacter&&); \
	NO_API AmainCharacter(const AmainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmainCharacter)


#define main_Source_main_mainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AmainCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AmainCharacter, FollowCamera); }


#define main_Source_main_mainCharacter_h_11_PROLOG \
	main_Source_main_mainCharacter_h_14_EVENT_PARMS


#define main_Source_main_mainCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_main_mainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	main_Source_main_mainCharacter_h_14_RPC_WRAPPERS \
	main_Source_main_mainCharacter_h_14_CALLBACK_WRAPPERS \
	main_Source_main_mainCharacter_h_14_INCLASS \
	main_Source_main_mainCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define main_Source_main_mainCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	main_Source_main_mainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	main_Source_main_mainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	main_Source_main_mainCharacter_h_14_CALLBACK_WRAPPERS \
	main_Source_main_mainCharacter_h_14_INCLASS_NO_PURE_DECLS \
	main_Source_main_mainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID main_Source_main_mainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
