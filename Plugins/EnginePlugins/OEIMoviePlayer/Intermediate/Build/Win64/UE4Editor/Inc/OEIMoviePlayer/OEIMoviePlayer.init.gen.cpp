// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMoviePlayer_init() {}
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFailedToOpen__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieResourceLoaded__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFinished__DelegateSignature();
	OEIMOVIEPLAYER_API UFunction* Z_Construct_UDelegateFunction_OEIMoviePlayer_OnSourceOpened__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFailedToOpen__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieResourceLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIMoviePlayer_OnMovieFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIMoviePlayer_OnSourceOpened__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/OEIMoviePlayer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3B5B038C,
				0xCE95E8B3,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
