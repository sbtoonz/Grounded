// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIRest/Public/EJiraStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJiraStatus() {}
// Cross Module References
	OEIREST_API UEnum* Z_Construct_UEnum_OEIRest_EJiraStatus();
	UPackage* Z_Construct_UPackage__Script_OEIRest();
// End Cross Module References
	static UEnum* EJiraStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIRest_EJiraStatus, Z_Construct_UPackage__Script_OEIRest(), TEXT("EJiraStatus"));
		}
		return Singleton;
	}
	template<> OEIREST_API UEnum* StaticEnum<EJiraStatus>()
	{
		return EJiraStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJiraStatus(EJiraStatus_StaticEnum, TEXT("/Script/OEIRest"), TEXT("EJiraStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIRest_EJiraStatus_Hash() { return 3477352967U; }
	UEnum* Z_Construct_UEnum_OEIRest_EJiraStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIRest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJiraStatus"), 0, Get_Z_Construct_UEnum_OEIRest_EJiraStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJiraStatus::NotStarted", (int64)EJiraStatus::NotStarted },
				{ "EJiraStatus::InProgress", (int64)EJiraStatus::InProgress },
				{ "EJiraStatus::Reopened", (int64)EJiraStatus::Reopened },
				{ "EJiraStatus::Resolved", (int64)EJiraStatus::Resolved },
				{ "EJiraStatus::Closed_Waived", (int64)EJiraStatus::Closed_Waived },
				{ "EJiraStatus::Complete", (int64)EJiraStatus::Complete },
				{ "EJiraStatus::NeedsApproval", (int64)EJiraStatus::NeedsApproval },
				{ "EJiraStatus::Open", (int64)EJiraStatus::Open },
				{ "EJiraStatus::WaiveRequested", (int64)EJiraStatus::WaiveRequested },
				{ "EJiraStatus::ResolvedByDev", (int64)EJiraStatus::ResolvedByDev },
				{ "EJiraStatus::Closed", (int64)EJiraStatus::Closed },
				{ "EJiraStatus::CannotReproduce", (int64)EJiraStatus::CannotReproduce },
				{ "EJiraStatus::NeedsMoreInfo", (int64)EJiraStatus::NeedsMoreInfo },
				{ "EJiraStatus::UnableToTest", (int64)EJiraStatus::UnableToTest },
				{ "EJiraStatus::Cut", (int64)EJiraStatus::Cut },
				{ "EJiraStatus::NeedsVerification", (int64)EJiraStatus::NeedsVerification },
				{ "EJiraStatus::FixFailed", (int64)EJiraStatus::FixFailed },
				{ "EJiraStatus::Closed_NotABug", (int64)EJiraStatus::Closed_NotABug },
				{ "EJiraStatus::Blocked", (int64)EJiraStatus::Blocked },
				{ "EJiraStatus::Acknowledged", (int64)EJiraStatus::Acknowledged },
				{ "EJiraStatus::Backlog", (int64)EJiraStatus::Backlog },
				{ "EJiraStatus::SelectedForDevelopment", (int64)EJiraStatus::SelectedForDevelopment },
				{ "EJiraStatus::New", (int64)EJiraStatus::New },
				{ "EJiraStatus::AwaitingApproval", (int64)EJiraStatus::AwaitingApproval },
				{ "EJiraStatus::Approved", (int64)EJiraStatus::Approved },
				{ "EJiraStatus::FirstPass", (int64)EJiraStatus::FirstPass },
				{ "EJiraStatus::NeedsReview", (int64)EJiraStatus::NeedsReview },
				{ "EJiraStatus::Queued", (int64)EJiraStatus::Queued },
				{ "EJiraStatus::NeedsExternalReview", (int64)EJiraStatus::NeedsExternalReview },
				{ "EJiraStatus::QACheck", (int64)EJiraStatus::QACheck },
				{ "EJiraStatus::Design_Concept", (int64)EJiraStatus::Design_Concept },
				{ "EJiraStatus::Functional", (int64)EJiraStatus::Functional },
				{ "EJiraStatus::Alpha", (int64)EJiraStatus::Alpha },
				{ "EJiraStatus::Final", (int64)EJiraStatus::Final },
				{ "EJiraStatus::IT", (int64)EJiraStatus::IT },
				{ "EJiraStatus::Manager", (int64)EJiraStatus::Manager },
				{ "EJiraStatus::AccountCleanup", (int64)EJiraStatus::AccountCleanup },
				{ "EJiraStatus::NeedsReviewStrikeTeam", (int64)EJiraStatus::NeedsReviewStrikeTeam },
				{ "EJiraStatus::ADD", (int64)EJiraStatus::ADD },
				{ "EJiraStatus::Blockout", (int64)EJiraStatus::Blockout },
				{ "EJiraStatus::Shelved", (int64)EJiraStatus::Shelved },
				{ "EJiraStatus::ApprovedForCheckIn", (int64)EJiraStatus::ApprovedForCheckIn },
				{ "EJiraStatus::FirstPassArt", (int64)EJiraStatus::FirstPassArt },
				{ "EJiraStatus::AlphaArt", (int64)EJiraStatus::AlphaArt },
				{ "EJiraStatus::FirstPassGameplay", (int64)EJiraStatus::FirstPassGameplay },
				{ "EJiraStatus::SecondPassGameplay", (int64)EJiraStatus::SecondPassGameplay },
				{ "EJiraStatus::OnCalendar", (int64)EJiraStatus::OnCalendar },
				{ "EJiraStatus::OfferRequested", (int64)EJiraStatus::OfferRequested },
				{ "EJiraStatus::OfferApproved", (int64)EJiraStatus::OfferApproved },
				{ "EJiraStatus::Posted", (int64)EJiraStatus::Posted },
				{ "EJiraStatus::OnTrack", (int64)EJiraStatus::OnTrack },
				{ "EJiraStatus::AtRisk", (int64)EJiraStatus::AtRisk },
				{ "EJiraStatus::ReadyForReview", (int64)EJiraStatus::ReadyForReview },
				{ "EJiraStatus::Requested", (int64)EJiraStatus::Requested },
				{ "EJiraStatus::HRReview", (int64)EJiraStatus::HRReview },
				{ "EJiraStatus::PhoneScreen", (int64)EJiraStatus::PhoneScreen },
				{ "EJiraStatus::PhoneInterview", (int64)EJiraStatus::PhoneInterview },
				{ "EJiraStatus::Test", (int64)EJiraStatus::Test },
				{ "EJiraStatus::In_PersonInterview", (int64)EJiraStatus::In_PersonInterview },
				{ "EJiraStatus::OfferExtended", (int64)EJiraStatus::OfferExtended },
				{ "EJiraStatus::Scheduled", (int64)EJiraStatus::Scheduled },
				{ "EJiraStatus::Designed", (int64)EJiraStatus::Designed },
				{ "EJiraStatus::Implemented", (int64)EJiraStatus::Implemented },
				{ "EJiraStatus::ReadyToShip", (int64)EJiraStatus::ReadyToShip },
				{ "EJiraStatus::Verify", (int64)EJiraStatus::Verify },
				{ "EJiraStatus::Review", (int64)EJiraStatus::Review },
				{ "EJiraStatus::NeedsExternalFix", (int64)EJiraStatus::NeedsExternalFix },
				{ "EJiraStatus::InDesign", (int64)EJiraStatus::InDesign },
				{ "EJiraStatus::BasicImplementationDone", (int64)EJiraStatus::BasicImplementationDone },
				{ "EJiraStatus::FinalImplementationDone", (int64)EJiraStatus::FinalImplementationDone },
				{ "EJiraStatus::NotReady", (int64)EJiraStatus::NotReady },
				{ "EJiraStatus::DesignReviewed", (int64)EJiraStatus::DesignReviewed },
				{ "EJiraStatus::DesignDone", (int64)EJiraStatus::DesignDone },
				{ "EJiraStatus::BasicImplementationReviewed", (int64)EJiraStatus::BasicImplementationReviewed },
				{ "EJiraStatus::FinalImplementationWithPlaceholders", (int64)EJiraStatus::FinalImplementationWithPlaceholders },
				{ "EJiraStatus::FinalImplementationReviewed", (int64)EJiraStatus::FinalImplementationReviewed },
				{ "EJiraStatus::AwaitingOutsourcer", (int64)EJiraStatus::AwaitingOutsourcer },
				{ "EJiraStatus::ObsidianReviewing", (int64)EJiraStatus::ObsidianReviewing },
				{ "EJiraStatus::ToDo", (int64)EJiraStatus::ToDo },
				{ "EJiraStatus::NeedsRenewal", (int64)EJiraStatus::NeedsRenewal },
				{ "EJiraStatus::Renewed", (int64)EJiraStatus::Renewed },
				{ "EJiraStatus::Cancelled", (int64)EJiraStatus::Cancelled },
				{ "EJiraStatus::TaskCreated", (int64)EJiraStatus::TaskCreated },
				{ "EJiraStatus::UnderReview", (int64)EJiraStatus::UnderReview },
				{ "EJiraStatus::Rejected", (int64)EJiraStatus::Rejected },
				{ "EJiraStatus::ReadyForT2", (int64)EJiraStatus::ReadyForT2 },
				{ "EJiraStatus::Archive", (int64)EJiraStatus::Archive },
				{ "EJiraStatus::Paused", (int64)EJiraStatus::Paused },
				{ "EJiraStatus::Behind", (int64)EJiraStatus::Behind },
				{ "EJiraStatus::Tasked", (int64)EJiraStatus::Tasked },
				{ "EJiraStatus::Bugged", (int64)EJiraStatus::Bugged },
				{ "EJiraStatus::RegressionBlocked", (int64)EJiraStatus::RegressionBlocked },
				{ "EJiraStatus::Done", (int64)EJiraStatus::Done },
				{ "EJiraStatus::Self_Review", (int64)EJiraStatus::Self_Review },
				{ "EJiraStatus::PerformanceReview", (int64)EJiraStatus::PerformanceReview },
				{ "EJiraStatus::GameDirectorsReview", (int64)EJiraStatus::GameDirectorsReview },
				{ "EJiraStatus::Directors_OwnersReview", (int64)EJiraStatus::Directors_OwnersReview },
				{ "EJiraStatus::Live", (int64)EJiraStatus::Live },
				{ "EJiraStatus::DepartmentHeadReview", (int64)EJiraStatus::DepartmentHeadReview },
				{ "EJiraStatus::InReview", (int64)EJiraStatus::InReview },
				{ "EJiraStatus::HighPoly", (int64)EJiraStatus::HighPoly },
				{ "EJiraStatus::LowPoly", (int64)EJiraStatus::LowPoly },
				{ "EJiraStatus::InitialRigging", (int64)EJiraStatus::InitialRigging },
				{ "EJiraStatus::FinalPass", (int64)EJiraStatus::FinalPass },
				{ "EJiraStatus::ToneMap", (int64)EJiraStatus::ToneMap },
				{ "EJiraStatus::ExecutiveProducer", (int64)EJiraStatus::ExecutiveProducer },
				{ "EJiraStatus::VPOfDevelopment", (int64)EJiraStatus::VPOfDevelopment },
				{ "EJiraStatus::StudioHead", (int64)EJiraStatus::StudioHead },
				{ "EJiraStatus::CIO", (int64)EJiraStatus::CIO },
				{ "EJiraStatus::QABlocked", (int64)EJiraStatus::QABlocked },
				{ "EJiraStatus::QAInProgress", (int64)EJiraStatus::QAInProgress },
				{ "EJiraStatus::Unknown", (int64)EJiraStatus::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccountCleanup.Name", "EJiraStatus::AccountCleanup" },
				{ "Acknowledged.Name", "EJiraStatus::Acknowledged" },
				{ "ADD.Name", "EJiraStatus::ADD" },
				{ "Alpha.Name", "EJiraStatus::Alpha" },
				{ "AlphaArt.Name", "EJiraStatus::AlphaArt" },
				{ "Approved.Name", "EJiraStatus::Approved" },
				{ "ApprovedForCheckIn.Name", "EJiraStatus::ApprovedForCheckIn" },
				{ "Archive.Name", "EJiraStatus::Archive" },
				{ "AtRisk.Name", "EJiraStatus::AtRisk" },
				{ "AwaitingApproval.Name", "EJiraStatus::AwaitingApproval" },
				{ "AwaitingOutsourcer.Name", "EJiraStatus::AwaitingOutsourcer" },
				{ "Backlog.Name", "EJiraStatus::Backlog" },
				{ "BasicImplementationDone.Name", "EJiraStatus::BasicImplementationDone" },
				{ "BasicImplementationReviewed.Name", "EJiraStatus::BasicImplementationReviewed" },
				{ "Behind.Name", "EJiraStatus::Behind" },
				{ "Blocked.Name", "EJiraStatus::Blocked" },
				{ "Blockout.Name", "EJiraStatus::Blockout" },
				{ "Bugged.Name", "EJiraStatus::Bugged" },
				{ "Cancelled.Name", "EJiraStatus::Cancelled" },
				{ "CannotReproduce.Name", "EJiraStatus::CannotReproduce" },
				{ "CIO.Name", "EJiraStatus::CIO" },
				{ "Closed.Name", "EJiraStatus::Closed" },
				{ "Closed_NotABug.Name", "EJiraStatus::Closed_NotABug" },
				{ "Closed_Waived.Name", "EJiraStatus::Closed_Waived" },
				{ "Complete.Name", "EJiraStatus::Complete" },
				{ "Cut.Name", "EJiraStatus::Cut" },
				{ "DepartmentHeadReview.Name", "EJiraStatus::DepartmentHeadReview" },
				{ "Design_Concept.Name", "EJiraStatus::Design_Concept" },
				{ "DesignDone.Name", "EJiraStatus::DesignDone" },
				{ "Designed.Name", "EJiraStatus::Designed" },
				{ "DesignReviewed.Name", "EJiraStatus::DesignReviewed" },
				{ "Directors_OwnersReview.Name", "EJiraStatus::Directors_OwnersReview" },
				{ "Done.Name", "EJiraStatus::Done" },
				{ "ExecutiveProducer.Name", "EJiraStatus::ExecutiveProducer" },
				{ "Final.Name", "EJiraStatus::Final" },
				{ "FinalImplementationDone.Name", "EJiraStatus::FinalImplementationDone" },
				{ "FinalImplementationReviewed.Name", "EJiraStatus::FinalImplementationReviewed" },
				{ "FinalImplementationWithPlaceholders.Name", "EJiraStatus::FinalImplementationWithPlaceholders" },
				{ "FinalPass.Name", "EJiraStatus::FinalPass" },
				{ "FirstPass.Name", "EJiraStatus::FirstPass" },
				{ "FirstPassArt.Name", "EJiraStatus::FirstPassArt" },
				{ "FirstPassGameplay.Name", "EJiraStatus::FirstPassGameplay" },
				{ "FixFailed.Name", "EJiraStatus::FixFailed" },
				{ "Functional.Name", "EJiraStatus::Functional" },
				{ "GameDirectorsReview.Name", "EJiraStatus::GameDirectorsReview" },
				{ "HighPoly.Name", "EJiraStatus::HighPoly" },
				{ "HRReview.Name", "EJiraStatus::HRReview" },
				{ "Implemented.Name", "EJiraStatus::Implemented" },
				{ "In_PersonInterview.Name", "EJiraStatus::In_PersonInterview" },
				{ "InDesign.Name", "EJiraStatus::InDesign" },
				{ "InitialRigging.Name", "EJiraStatus::InitialRigging" },
				{ "InProgress.Name", "EJiraStatus::InProgress" },
				{ "InReview.Name", "EJiraStatus::InReview" },
				{ "IT.Name", "EJiraStatus::IT" },
				{ "Live.Name", "EJiraStatus::Live" },
				{ "LowPoly.Name", "EJiraStatus::LowPoly" },
				{ "Manager.Name", "EJiraStatus::Manager" },
				{ "ModuleRelativePath", "Public/EJiraStatus.h" },
				{ "NeedsApproval.Name", "EJiraStatus::NeedsApproval" },
				{ "NeedsExternalFix.Name", "EJiraStatus::NeedsExternalFix" },
				{ "NeedsExternalReview.Name", "EJiraStatus::NeedsExternalReview" },
				{ "NeedsMoreInfo.Name", "EJiraStatus::NeedsMoreInfo" },
				{ "NeedsRenewal.Name", "EJiraStatus::NeedsRenewal" },
				{ "NeedsReview.Name", "EJiraStatus::NeedsReview" },
				{ "NeedsReviewStrikeTeam.Name", "EJiraStatus::NeedsReviewStrikeTeam" },
				{ "NeedsVerification.Name", "EJiraStatus::NeedsVerification" },
				{ "New.Name", "EJiraStatus::New" },
				{ "NotReady.Name", "EJiraStatus::NotReady" },
				{ "NotStarted.Name", "EJiraStatus::NotStarted" },
				{ "ObsidianReviewing.Name", "EJiraStatus::ObsidianReviewing" },
				{ "OfferApproved.Name", "EJiraStatus::OfferApproved" },
				{ "OfferExtended.Name", "EJiraStatus::OfferExtended" },
				{ "OfferRequested.Name", "EJiraStatus::OfferRequested" },
				{ "OnCalendar.Name", "EJiraStatus::OnCalendar" },
				{ "OnTrack.Name", "EJiraStatus::OnTrack" },
				{ "Open.Name", "EJiraStatus::Open" },
				{ "Paused.Name", "EJiraStatus::Paused" },
				{ "PerformanceReview.Name", "EJiraStatus::PerformanceReview" },
				{ "PhoneInterview.Name", "EJiraStatus::PhoneInterview" },
				{ "PhoneScreen.Name", "EJiraStatus::PhoneScreen" },
				{ "Posted.Name", "EJiraStatus::Posted" },
				{ "QABlocked.Name", "EJiraStatus::QABlocked" },
				{ "QACheck.Name", "EJiraStatus::QACheck" },
				{ "QAInProgress.Name", "EJiraStatus::QAInProgress" },
				{ "Queued.Name", "EJiraStatus::Queued" },
				{ "ReadyForReview.Name", "EJiraStatus::ReadyForReview" },
				{ "ReadyForT2.Name", "EJiraStatus::ReadyForT2" },
				{ "ReadyToShip.Name", "EJiraStatus::ReadyToShip" },
				{ "RegressionBlocked.Name", "EJiraStatus::RegressionBlocked" },
				{ "Rejected.Name", "EJiraStatus::Rejected" },
				{ "Renewed.Name", "EJiraStatus::Renewed" },
				{ "Reopened.Name", "EJiraStatus::Reopened" },
				{ "Requested.Name", "EJiraStatus::Requested" },
				{ "Resolved.Name", "EJiraStatus::Resolved" },
				{ "ResolvedByDev.Name", "EJiraStatus::ResolvedByDev" },
				{ "Review.Name", "EJiraStatus::Review" },
				{ "Scheduled.Name", "EJiraStatus::Scheduled" },
				{ "SecondPassGameplay.Name", "EJiraStatus::SecondPassGameplay" },
				{ "SelectedForDevelopment.Name", "EJiraStatus::SelectedForDevelopment" },
				{ "Self_Review.Name", "EJiraStatus::Self_Review" },
				{ "Shelved.Name", "EJiraStatus::Shelved" },
				{ "StudioHead.Name", "EJiraStatus::StudioHead" },
				{ "TaskCreated.Name", "EJiraStatus::TaskCreated" },
				{ "Tasked.Name", "EJiraStatus::Tasked" },
				{ "Test.Name", "EJiraStatus::Test" },
				{ "ToDo.Name", "EJiraStatus::ToDo" },
				{ "ToneMap.Name", "EJiraStatus::ToneMap" },
				{ "UnableToTest.Name", "EJiraStatus::UnableToTest" },
				{ "UnderReview.Name", "EJiraStatus::UnderReview" },
				{ "Unknown.Name", "EJiraStatus::Unknown" },
				{ "Verify.Name", "EJiraStatus::Verify" },
				{ "VPOfDevelopment.Name", "EJiraStatus::VPOfDevelopment" },
				{ "WaiveRequested.Name", "EJiraStatus::WaiveRequested" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIRest,
				nullptr,
				"EJiraStatus",
				"EJiraStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
