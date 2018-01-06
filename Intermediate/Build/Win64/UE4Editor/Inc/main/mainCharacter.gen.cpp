// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mainCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemainCharacter() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AmainCharacter_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AmainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_main();
	MAIN_API UFunction* Z_Construct_UFunction_AmainCharacter_Rattack();
	MAIN_API UFunction* Z_Construct_UFunction_AmainCharacter_RFB();
	MAIN_API UFunction* Z_Construct_UFunction_AmainCharacter_RLR();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AmainCharacter::StaticRegisterNativesAmainCharacter()
	{
		UClass* Class = AmainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Rattack", (Native)&AmainCharacter::execRattack },
			{ "RFB", (Native)&AmainCharacter::execRFB },
			{ "RLR", (Native)&AmainCharacter::execRLR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AmainCharacter_Rattack()
	{
		struct mainCharacter_eventRattack_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((mainCharacter_eventRattack_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(mainCharacter_eventRattack_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Example Nodes" },
				{ "ModuleRelativePath", "mainCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AmainCharacter, "Rattack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(mainCharacter_eventRattack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AmainCharacter_RFB()
	{
		struct mainCharacter_eventRFB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(mainCharacter_eventRFB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Example Nodes" },
				{ "ModuleRelativePath", "mainCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AmainCharacter, "RFB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(mainCharacter_eventRFB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AmainCharacter_RLR()
	{
		struct mainCharacter_eventRLR_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(mainCharacter_eventRLR_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Example Nodes" },
				{ "ModuleRelativePath", "mainCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AmainCharacter, "RLR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(mainCharacter_eventRLR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AmainCharacter_NoRegister()
	{
		return AmainCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AmainCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_main,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AmainCharacter_Rattack, "Rattack" }, // 1161227106
				{ &Z_Construct_UFunction_AmainCharacter_RFB, "RFB" }, // 2939027287
				{ &Z_Construct_UFunction_AmainCharacter_RLR, "RLR" }, // 410643976
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "mainCharacter.h" },
				{ "ModuleRelativePath", "mainCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[] = {
				{ "Category", "mainCharacter" },
				{ "ModuleRelativePath", "mainCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FB = { UE4CodeGen_Private::EPropertyClass::Float, "FB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AmainCharacter, FB), METADATA_PARAMS(NewProp_FB_MetaData, ARRAY_COUNT(NewProp_FB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "mainCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AmainCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "mainCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AmainCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "mainCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AmainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "mainCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AmainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AmainCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AmainCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmainCharacter, 1231407327);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmainCharacter(Z_Construct_UClass_AmainCharacter, &AmainCharacter::StaticClass, TEXT("/Script/main"), TEXT("AmainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmainCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
