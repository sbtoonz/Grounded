// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIREST_EJiraStatus_generated_h
#error "EJiraStatus.generated.h already included, missing '#pragma once' in EJiraStatus.h"
#endif
#define OEIREST_EJiraStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIRest_Public_EJiraStatus_h


#define FOREACH_ENUM_EJIRASTATUS(op) \
	op(EJiraStatus::NotStarted) \
	op(EJiraStatus::InProgress) \
	op(EJiraStatus::Reopened) \
	op(EJiraStatus::Resolved) \
	op(EJiraStatus::Closed_Waived) \
	op(EJiraStatus::Complete) \
	op(EJiraStatus::NeedsApproval) \
	op(EJiraStatus::Open) \
	op(EJiraStatus::WaiveRequested) \
	op(EJiraStatus::ResolvedByDev) \
	op(EJiraStatus::Closed) \
	op(EJiraStatus::CannotReproduce) \
	op(EJiraStatus::NeedsMoreInfo) \
	op(EJiraStatus::UnableToTest) \
	op(EJiraStatus::Cut) \
	op(EJiraStatus::NeedsVerification) \
	op(EJiraStatus::FixFailed) \
	op(EJiraStatus::Closed_NotABug) \
	op(EJiraStatus::Blocked) \
	op(EJiraStatus::Acknowledged) \
	op(EJiraStatus::Backlog) \
	op(EJiraStatus::SelectedForDevelopment) \
	op(EJiraStatus::New) \
	op(EJiraStatus::AwaitingApproval) \
	op(EJiraStatus::Approved) \
	op(EJiraStatus::FirstPass) \
	op(EJiraStatus::NeedsReview) \
	op(EJiraStatus::Queued) \
	op(EJiraStatus::NeedsExternalReview) \
	op(EJiraStatus::QACheck) \
	op(EJiraStatus::Design_Concept) \
	op(EJiraStatus::Functional) \
	op(EJiraStatus::Alpha) \
	op(EJiraStatus::Final) \
	op(EJiraStatus::IT) \
	op(EJiraStatus::Manager) \
	op(EJiraStatus::AccountCleanup) \
	op(EJiraStatus::NeedsReviewStrikeTeam) \
	op(EJiraStatus::ADD) \
	op(EJiraStatus::Blockout) \
	op(EJiraStatus::Shelved) \
	op(EJiraStatus::ApprovedForCheckIn) \
	op(EJiraStatus::FirstPassArt) \
	op(EJiraStatus::AlphaArt) \
	op(EJiraStatus::FirstPassGameplay) \
	op(EJiraStatus::SecondPassGameplay) \
	op(EJiraStatus::OnCalendar) \
	op(EJiraStatus::OfferRequested) \
	op(EJiraStatus::OfferApproved) \
	op(EJiraStatus::Posted) \
	op(EJiraStatus::OnTrack) \
	op(EJiraStatus::AtRisk) \
	op(EJiraStatus::ReadyForReview) \
	op(EJiraStatus::Requested) \
	op(EJiraStatus::HRReview) \
	op(EJiraStatus::PhoneScreen) \
	op(EJiraStatus::PhoneInterview) \
	op(EJiraStatus::Test) \
	op(EJiraStatus::In_PersonInterview) \
	op(EJiraStatus::OfferExtended) \
	op(EJiraStatus::Scheduled) \
	op(EJiraStatus::Designed) \
	op(EJiraStatus::Implemented) \
	op(EJiraStatus::ReadyToShip) \
	op(EJiraStatus::Verify) \
	op(EJiraStatus::Review) \
	op(EJiraStatus::NeedsExternalFix) \
	op(EJiraStatus::InDesign) \
	op(EJiraStatus::BasicImplementationDone) \
	op(EJiraStatus::FinalImplementationDone) \
	op(EJiraStatus::NotReady) \
	op(EJiraStatus::DesignReviewed) \
	op(EJiraStatus::DesignDone) \
	op(EJiraStatus::BasicImplementationReviewed) \
	op(EJiraStatus::FinalImplementationWithPlaceholders) \
	op(EJiraStatus::FinalImplementationReviewed) \
	op(EJiraStatus::AwaitingOutsourcer) \
	op(EJiraStatus::ObsidianReviewing) \
	op(EJiraStatus::ToDo) \
	op(EJiraStatus::NeedsRenewal) \
	op(EJiraStatus::Renewed) \
	op(EJiraStatus::Cancelled) \
	op(EJiraStatus::TaskCreated) \
	op(EJiraStatus::UnderReview) \
	op(EJiraStatus::Rejected) \
	op(EJiraStatus::ReadyForT2) \
	op(EJiraStatus::Archive) \
	op(EJiraStatus::Paused) \
	op(EJiraStatus::Behind) \
	op(EJiraStatus::Tasked) \
	op(EJiraStatus::Bugged) \
	op(EJiraStatus::RegressionBlocked) \
	op(EJiraStatus::Done) \
	op(EJiraStatus::Self_Review) \
	op(EJiraStatus::PerformanceReview) \
	op(EJiraStatus::GameDirectorsReview) \
	op(EJiraStatus::Directors_OwnersReview) \
	op(EJiraStatus::Live) \
	op(EJiraStatus::DepartmentHeadReview) \
	op(EJiraStatus::InReview) \
	op(EJiraStatus::HighPoly) \
	op(EJiraStatus::LowPoly) \
	op(EJiraStatus::InitialRigging) \
	op(EJiraStatus::FinalPass) \
	op(EJiraStatus::ToneMap) \
	op(EJiraStatus::ExecutiveProducer) \
	op(EJiraStatus::VPOfDevelopment) \
	op(EJiraStatus::StudioHead) \
	op(EJiraStatus::CIO) \
	op(EJiraStatus::QABlocked) \
	op(EJiraStatus::QAInProgress) \
	op(EJiraStatus::Unknown) 

enum class EJiraStatus;
template<> OEIREST_API UEnum* StaticEnum<EJiraStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
