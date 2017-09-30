// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestingGroundsGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGroundsGameModeBase() {}
// Cross Module References
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsGameModeBase_NoRegister();
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds();
// End Cross Module References
	void ATestingGroundsGameModeBase::StaticRegisterNativesATestingGroundsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATestingGroundsGameModeBase_NoRegister()
	{
		return ATestingGroundsGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestingGroundsGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_TestingGrounds();
			OuterClass = ATestingGroundsGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATestingGroundsGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TestingGroundsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TestingGroundsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGroundsGameModeBase, 1517985247);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGroundsGameModeBase(Z_Construct_UClass_ATestingGroundsGameModeBase, &ATestingGroundsGameModeBase::StaticClass, TEXT("/Script/TestingGrounds"), TEXT("ATestingGroundsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGroundsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
