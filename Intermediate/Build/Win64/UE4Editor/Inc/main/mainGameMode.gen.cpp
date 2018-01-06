// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mainGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemainGameMode() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AmainGameMode_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AmainGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_main();
// End Cross Module References
	void AmainGameMode::StaticRegisterNativesAmainGameMode()
	{
	}
	UClass* Z_Construct_UClass_AmainGameMode_NoRegister()
	{
		return AmainGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AmainGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_main,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "mainGameMode.h" },
				{ "ModuleRelativePath", "mainGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AmainGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AmainGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmainGameMode, 2193240101);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmainGameMode(Z_Construct_UClass_AmainGameMode, &AmainGameMode::StaticClass, TEXT("/Script/main"), TEXT("AmainGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmainGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
