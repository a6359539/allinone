// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "allinoneCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeallinoneCharacter() {}
// Cross Module References
	ALLINONE_API UClass* Z_Construct_UClass_AallinoneCharacter_NoRegister();
	ALLINONE_API UClass* Z_Construct_UClass_AallinoneCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_allinone();
	ALLINONE_API UFunction* Z_Construct_UFunction_AallinoneCharacter_RFB();
	ALLINONE_API UFunction* Z_Construct_UFunction_AallinoneCharacter_RLR();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AallinoneCharacter::StaticRegisterNativesAallinoneCharacter()
	{
		UClass* Class = AallinoneCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RFB", (Native)&AallinoneCharacter::execRFB },
			{ "RLR", (Native)&AallinoneCharacter::execRLR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AallinoneCharacter_RFB()
	{
		struct allinoneCharacter_eventRFB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(allinoneCharacter_eventRFB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Example Nodes" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AallinoneCharacter, "RFB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(allinoneCharacter_eventRFB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AallinoneCharacter_RLR()
	{
		struct allinoneCharacter_eventRLR_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(allinoneCharacter_eventRLR_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Example Nodes" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AallinoneCharacter, "RLR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(allinoneCharacter_eventRLR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AallinoneCharacter_NoRegister()
	{
		return AallinoneCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AallinoneCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_allinone,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AallinoneCharacter_RFB, "RFB" }, // 898875885
				{ &Z_Construct_UFunction_AallinoneCharacter_RLR, "RLR" }, // 3959789554
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "allinoneCharacter.h" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[] = {
				{ "Category", "allinoneCharacter" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FB = { UE4CodeGen_Private::EPropertyClass::Float, "FB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AallinoneCharacter, FB), METADATA_PARAMS(NewProp_FB_MetaData, ARRAY_COUNT(NewProp_FB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AallinoneCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AallinoneCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AallinoneCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "allinoneCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AallinoneCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AallinoneCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AallinoneCharacter::StaticClass,
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
	IMPLEMENT_CLASS(AallinoneCharacter, 2049900103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AallinoneCharacter(Z_Construct_UClass_AallinoneCharacter, &AallinoneCharacter::StaticClass, TEXT("/Script/allinone"), TEXT("AallinoneCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AallinoneCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
