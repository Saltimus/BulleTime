// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletTime/Public/TowerControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerControl() {}

// Begin Cross Module References
BULLETTIME_API UClass* Z_Construct_UClass_ATowerControl();
BULLETTIME_API UClass* Z_Construct_UClass_ATowerControl_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_BulletTime();
// End Cross Module References

// Begin Class ATowerControl
void ATowerControl::StaticRegisterNativesATowerControl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerControl);
UClass* Z_Construct_UClass_ATowerControl_NoRegister()
{
	return ATowerControl::StaticClass();
}
struct Z_Construct_UClass_ATowerControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TowerControl.h" },
		{ "ModuleRelativePath", "Public/TowerControl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATowerControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BulletTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerControl_Statics::ClassParams = {
	&ATowerControl::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerControl_Statics::Class_MetaDataParams), Z_Construct_UClass_ATowerControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATowerControl()
{
	if (!Z_Registration_Info_UClass_ATowerControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerControl.OuterSingleton, Z_Construct_UClass_ATowerControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATowerControl.OuterSingleton;
}
template<> BULLETTIME_API UClass* StaticClass<ATowerControl>()
{
	return ATowerControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerControl);
ATowerControl::~ATowerControl() {}
// End Class ATowerControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Desktop_Personal___Irvin_Git_BulleTime_BulletTime_Source_BulletTime_Public_TowerControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATowerControl, ATowerControl::StaticClass, TEXT("ATowerControl"), &Z_Registration_Info_UClass_ATowerControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerControl), 3276893565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Desktop_Personal___Irvin_Git_BulleTime_BulletTime_Source_BulletTime_Public_TowerControl_h_2418167882(TEXT("/Script/BulletTime"),
	Z_CompiledInDeferFile_FID_Users_Admin_Desktop_Personal___Irvin_Git_BulleTime_BulletTime_Source_BulletTime_Public_TowerControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Desktop_Personal___Irvin_Git_BulleTime_BulletTime_Source_BulletTime_Public_TowerControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
