/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CONFIG_CONFIGCLIENT_H_
#define ALIBABACLOUD_CONFIG_CONFIGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ConfigExport.h"
#include "model/ActiveAggregateConfigRulesRequest.h"
#include "model/ActiveAggregateConfigRulesResult.h"
#include "model/AttachAggregateConfigRuleToCompliancePackRequest.h"
#include "model/AttachAggregateConfigRuleToCompliancePackResult.h"
#include "model/AttachConfigRuleToCompliancePackRequest.h"
#include "model/AttachConfigRuleToCompliancePackResult.h"
#include "model/CreateAggregateCompliancePackRequest.h"
#include "model/CreateAggregateCompliancePackResult.h"
#include "model/CreateAggregateConfigRuleRequest.h"
#include "model/CreateAggregateConfigRuleResult.h"
#include "model/CreateAggregateRemediationRequest.h"
#include "model/CreateAggregateRemediationResult.h"
#include "model/CreateAggregatorRequest.h"
#include "model/CreateAggregatorResult.h"
#include "model/CreateCompliancePackRequest.h"
#include "model/CreateCompliancePackResult.h"
#include "model/CreateConfigRuleRequest.h"
#include "model/CreateConfigRuleResult.h"
#include "model/CreateRemediationRequest.h"
#include "model/CreateRemediationResult.h"
#include "model/DeactiveAggregateConfigRulesRequest.h"
#include "model/DeactiveAggregateConfigRulesResult.h"
#include "model/DeactiveConfigRulesRequest.h"
#include "model/DeactiveConfigRulesResult.h"
#include "model/DeleteAggregateCompliancePacksRequest.h"
#include "model/DeleteAggregateCompliancePacksResult.h"
#include "model/DeleteAggregateConfigRulesRequest.h"
#include "model/DeleteAggregateConfigRulesResult.h"
#include "model/DeleteAggregateRemediationsRequest.h"
#include "model/DeleteAggregateRemediationsResult.h"
#include "model/DeleteAggregatorsRequest.h"
#include "model/DeleteAggregatorsResult.h"
#include "model/DeleteCompliancePacksRequest.h"
#include "model/DeleteCompliancePacksResult.h"
#include "model/DeleteRemediationsRequest.h"
#include "model/DeleteRemediationsResult.h"
#include "model/DetachAggregateConfigRuleToCompliancePackRequest.h"
#include "model/DetachAggregateConfigRuleToCompliancePackResult.h"
#include "model/DetachConfigRuleToCompliancePackRequest.h"
#include "model/DetachConfigRuleToCompliancePackResult.h"
#include "model/GenerateAggregateCompliancePackReportRequest.h"
#include "model/GenerateAggregateCompliancePackReportResult.h"
#include "model/GenerateAggregateConfigRulesReportRequest.h"
#include "model/GenerateAggregateConfigRulesReportResult.h"
#include "model/GenerateCompliancePackReportRequest.h"
#include "model/GenerateCompliancePackReportResult.h"
#include "model/GenerateConfigRulesReportRequest.h"
#include "model/GenerateConfigRulesReportResult.h"
#include "model/GetAggregateAccountComplianceByPackRequest.h"
#include "model/GetAggregateAccountComplianceByPackResult.h"
#include "model/GetAggregateCompliancePackRequest.h"
#include "model/GetAggregateCompliancePackResult.h"
#include "model/GetAggregateCompliancePackReportRequest.h"
#include "model/GetAggregateCompliancePackReportResult.h"
#include "model/GetAggregateConfigRuleRequest.h"
#include "model/GetAggregateConfigRuleResult.h"
#include "model/GetAggregateConfigRuleComplianceByPackRequest.h"
#include "model/GetAggregateConfigRuleComplianceByPackResult.h"
#include "model/GetAggregateConfigRuleSummaryByRiskLevelRequest.h"
#include "model/GetAggregateConfigRuleSummaryByRiskLevelResult.h"
#include "model/GetAggregateConfigRulesReportRequest.h"
#include "model/GetAggregateConfigRulesReportResult.h"
#include "model/GetAggregateDiscoveredResourceRequest.h"
#include "model/GetAggregateDiscoveredResourceResult.h"
#include "model/GetAggregateResourceComplianceByConfigRuleRequest.h"
#include "model/GetAggregateResourceComplianceByConfigRuleResult.h"
#include "model/GetAggregateResourceComplianceByPackRequest.h"
#include "model/GetAggregateResourceComplianceByPackResult.h"
#include "model/GetAggregateResourceComplianceGroupByRegionRequest.h"
#include "model/GetAggregateResourceComplianceGroupByRegionResult.h"
#include "model/GetAggregateResourceComplianceGroupByResourceTypeRequest.h"
#include "model/GetAggregateResourceComplianceGroupByResourceTypeResult.h"
#include "model/GetAggregateResourceComplianceTimelineRequest.h"
#include "model/GetAggregateResourceComplianceTimelineResult.h"
#include "model/GetAggregateResourceConfigurationTimelineRequest.h"
#include "model/GetAggregateResourceConfigurationTimelineResult.h"
#include "model/GetAggregateResourceCountsGroupByRegionRequest.h"
#include "model/GetAggregateResourceCountsGroupByRegionResult.h"
#include "model/GetAggregateResourceCountsGroupByResourceTypeRequest.h"
#include "model/GetAggregateResourceCountsGroupByResourceTypeResult.h"
#include "model/GetAggregatorRequest.h"
#include "model/GetAggregatorResult.h"
#include "model/GetCompliancePackRequest.h"
#include "model/GetCompliancePackResult.h"
#include "model/GetCompliancePackReportRequest.h"
#include "model/GetCompliancePackReportResult.h"
#include "model/GetConfigRuleRequest.h"
#include "model/GetConfigRuleResult.h"
#include "model/GetConfigRuleComplianceByPackRequest.h"
#include "model/GetConfigRuleComplianceByPackResult.h"
#include "model/GetConfigRuleSummaryByRiskLevelRequest.h"
#include "model/GetConfigRuleSummaryByRiskLevelResult.h"
#include "model/GetConfigRulesReportRequest.h"
#include "model/GetConfigRulesReportResult.h"
#include "model/GetDiscoveredResourceRequest.h"
#include "model/GetDiscoveredResourceResult.h"
#include "model/GetDiscoveredResourceCountsGroupByRegionRequest.h"
#include "model/GetDiscoveredResourceCountsGroupByRegionResult.h"
#include "model/GetDiscoveredResourceCountsGroupByResourceTypeRequest.h"
#include "model/GetDiscoveredResourceCountsGroupByResourceTypeResult.h"
#include "model/GetManagedRuleRequest.h"
#include "model/GetManagedRuleResult.h"
#include "model/GetResourceComplianceByConfigRuleRequest.h"
#include "model/GetResourceComplianceByConfigRuleResult.h"
#include "model/GetResourceComplianceByPackRequest.h"
#include "model/GetResourceComplianceByPackResult.h"
#include "model/GetResourceComplianceGroupByRegionRequest.h"
#include "model/GetResourceComplianceGroupByRegionResult.h"
#include "model/GetResourceComplianceGroupByResourceTypeRequest.h"
#include "model/GetResourceComplianceGroupByResourceTypeResult.h"
#include "model/GetResourceComplianceTimelineRequest.h"
#include "model/GetResourceComplianceTimelineResult.h"
#include "model/GetResourceConfigurationTimelineRequest.h"
#include "model/GetResourceConfigurationTimelineResult.h"
#include "model/IgnoreAggregateEvaluationResultsRequest.h"
#include "model/IgnoreAggregateEvaluationResultsResult.h"
#include "model/IgnoreEvaluationResultsRequest.h"
#include "model/IgnoreEvaluationResultsResult.h"
#include "model/ListAggregateCompliancePacksRequest.h"
#include "model/ListAggregateCompliancePacksResult.h"
#include "model/ListAggregateConfigRuleEvaluationResultsRequest.h"
#include "model/ListAggregateConfigRuleEvaluationResultsResult.h"
#include "model/ListAggregateConfigRulesRequest.h"
#include "model/ListAggregateConfigRulesResult.h"
#include "model/ListAggregateDiscoveredResourcesRequest.h"
#include "model/ListAggregateDiscoveredResourcesResult.h"
#include "model/ListAggregateRemediationsRequest.h"
#include "model/ListAggregateRemediationsResult.h"
#include "model/ListAggregateResourceEvaluationResultsRequest.h"
#include "model/ListAggregateResourceEvaluationResultsResult.h"
#include "model/ListAggregatorsRequest.h"
#include "model/ListAggregatorsResult.h"
#include "model/ListCompliancePackTemplatesRequest.h"
#include "model/ListCompliancePackTemplatesResult.h"
#include "model/ListCompliancePacksRequest.h"
#include "model/ListCompliancePacksResult.h"
#include "model/ListConfigRuleEvaluationResultsRequest.h"
#include "model/ListConfigRuleEvaluationResultsResult.h"
#include "model/ListDiscoveredResourcesRequest.h"
#include "model/ListDiscoveredResourcesResult.h"
#include "model/ListManagedRulesRequest.h"
#include "model/ListManagedRulesResult.h"
#include "model/ListRemediationTemplatesRequest.h"
#include "model/ListRemediationTemplatesResult.h"
#include "model/ListRemediationsRequest.h"
#include "model/ListRemediationsResult.h"
#include "model/ListResourceEvaluationResultsRequest.h"
#include "model/ListResourceEvaluationResultsResult.h"
#include "model/RevertAggregateEvaluationResultsRequest.h"
#include "model/RevertAggregateEvaluationResultsResult.h"
#include "model/RevertEvaluationResultsRequest.h"
#include "model/RevertEvaluationResultsResult.h"
#include "model/StartAggregateConfigRuleEvaluationRequest.h"
#include "model/StartAggregateConfigRuleEvaluationResult.h"
#include "model/StartAggregateRemediationRequest.h"
#include "model/StartAggregateRemediationResult.h"
#include "model/StartRemediationRequest.h"
#include "model/StartRemediationResult.h"
#include "model/UpdateAggregateCompliancePackRequest.h"
#include "model/UpdateAggregateCompliancePackResult.h"
#include "model/UpdateAggregateConfigRuleRequest.h"
#include "model/UpdateAggregateConfigRuleResult.h"
#include "model/UpdateAggregateRemediationRequest.h"
#include "model/UpdateAggregateRemediationResult.h"
#include "model/UpdateAggregatorRequest.h"
#include "model/UpdateAggregatorResult.h"
#include "model/UpdateCompliancePackRequest.h"
#include "model/UpdateCompliancePackResult.h"
#include "model/UpdateConfigRuleRequest.h"
#include "model/UpdateConfigRuleResult.h"


namespace AlibabaCloud
{
	namespace Config
	{
		class ALIBABACLOUD_CONFIG_EXPORT ConfigClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActiveAggregateConfigRulesResult> ActiveAggregateConfigRulesOutcome;
			typedef std::future<ActiveAggregateConfigRulesOutcome> ActiveAggregateConfigRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ActiveAggregateConfigRulesRequest&, const ActiveAggregateConfigRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveAggregateConfigRulesAsyncHandler;
			typedef Outcome<Error, Model::AttachAggregateConfigRuleToCompliancePackResult> AttachAggregateConfigRuleToCompliancePackOutcome;
			typedef std::future<AttachAggregateConfigRuleToCompliancePackOutcome> AttachAggregateConfigRuleToCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::AttachAggregateConfigRuleToCompliancePackRequest&, const AttachAggregateConfigRuleToCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachAggregateConfigRuleToCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::AttachConfigRuleToCompliancePackResult> AttachConfigRuleToCompliancePackOutcome;
			typedef std::future<AttachConfigRuleToCompliancePackOutcome> AttachConfigRuleToCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::AttachConfigRuleToCompliancePackRequest&, const AttachConfigRuleToCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachConfigRuleToCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::CreateAggregateCompliancePackResult> CreateAggregateCompliancePackOutcome;
			typedef std::future<CreateAggregateCompliancePackOutcome> CreateAggregateCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateAggregateCompliancePackRequest&, const CreateAggregateCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAggregateCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::CreateAggregateConfigRuleResult> CreateAggregateConfigRuleOutcome;
			typedef std::future<CreateAggregateConfigRuleOutcome> CreateAggregateConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateAggregateConfigRuleRequest&, const CreateAggregateConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAggregateConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateAggregateRemediationResult> CreateAggregateRemediationOutcome;
			typedef std::future<CreateAggregateRemediationOutcome> CreateAggregateRemediationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateAggregateRemediationRequest&, const CreateAggregateRemediationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAggregateRemediationAsyncHandler;
			typedef Outcome<Error, Model::CreateAggregatorResult> CreateAggregatorOutcome;
			typedef std::future<CreateAggregatorOutcome> CreateAggregatorOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateAggregatorRequest&, const CreateAggregatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAggregatorAsyncHandler;
			typedef Outcome<Error, Model::CreateCompliancePackResult> CreateCompliancePackOutcome;
			typedef std::future<CreateCompliancePackOutcome> CreateCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateCompliancePackRequest&, const CreateCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::CreateConfigRuleResult> CreateConfigRuleOutcome;
			typedef std::future<CreateConfigRuleOutcome> CreateConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateConfigRuleRequest&, const CreateConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRemediationResult> CreateRemediationOutcome;
			typedef std::future<CreateRemediationOutcome> CreateRemediationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::CreateRemediationRequest&, const CreateRemediationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRemediationAsyncHandler;
			typedef Outcome<Error, Model::DeactiveAggregateConfigRulesResult> DeactiveAggregateConfigRulesOutcome;
			typedef std::future<DeactiveAggregateConfigRulesOutcome> DeactiveAggregateConfigRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeactiveAggregateConfigRulesRequest&, const DeactiveAggregateConfigRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveAggregateConfigRulesAsyncHandler;
			typedef Outcome<Error, Model::DeactiveConfigRulesResult> DeactiveConfigRulesOutcome;
			typedef std::future<DeactiveConfigRulesOutcome> DeactiveConfigRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeactiveConfigRulesRequest&, const DeactiveConfigRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveConfigRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteAggregateCompliancePacksResult> DeleteAggregateCompliancePacksOutcome;
			typedef std::future<DeleteAggregateCompliancePacksOutcome> DeleteAggregateCompliancePacksOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteAggregateCompliancePacksRequest&, const DeleteAggregateCompliancePacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregateCompliancePacksAsyncHandler;
			typedef Outcome<Error, Model::DeleteAggregateConfigRulesResult> DeleteAggregateConfigRulesOutcome;
			typedef std::future<DeleteAggregateConfigRulesOutcome> DeleteAggregateConfigRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteAggregateConfigRulesRequest&, const DeleteAggregateConfigRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregateConfigRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteAggregateRemediationsResult> DeleteAggregateRemediationsOutcome;
			typedef std::future<DeleteAggregateRemediationsOutcome> DeleteAggregateRemediationsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteAggregateRemediationsRequest&, const DeleteAggregateRemediationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregateRemediationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteAggregatorsResult> DeleteAggregatorsOutcome;
			typedef std::future<DeleteAggregatorsOutcome> DeleteAggregatorsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteAggregatorsRequest&, const DeleteAggregatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregatorsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCompliancePacksResult> DeleteCompliancePacksOutcome;
			typedef std::future<DeleteCompliancePacksOutcome> DeleteCompliancePacksOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteCompliancePacksRequest&, const DeleteCompliancePacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompliancePacksAsyncHandler;
			typedef Outcome<Error, Model::DeleteRemediationsResult> DeleteRemediationsOutcome;
			typedef std::future<DeleteRemediationsOutcome> DeleteRemediationsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DeleteRemediationsRequest&, const DeleteRemediationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRemediationsAsyncHandler;
			typedef Outcome<Error, Model::DetachAggregateConfigRuleToCompliancePackResult> DetachAggregateConfigRuleToCompliancePackOutcome;
			typedef std::future<DetachAggregateConfigRuleToCompliancePackOutcome> DetachAggregateConfigRuleToCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DetachAggregateConfigRuleToCompliancePackRequest&, const DetachAggregateConfigRuleToCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachAggregateConfigRuleToCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::DetachConfigRuleToCompliancePackResult> DetachConfigRuleToCompliancePackOutcome;
			typedef std::future<DetachConfigRuleToCompliancePackOutcome> DetachConfigRuleToCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::DetachConfigRuleToCompliancePackRequest&, const DetachConfigRuleToCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachConfigRuleToCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::GenerateAggregateCompliancePackReportResult> GenerateAggregateCompliancePackReportOutcome;
			typedef std::future<GenerateAggregateCompliancePackReportOutcome> GenerateAggregateCompliancePackReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GenerateAggregateCompliancePackReportRequest&, const GenerateAggregateCompliancePackReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAggregateCompliancePackReportAsyncHandler;
			typedef Outcome<Error, Model::GenerateAggregateConfigRulesReportResult> GenerateAggregateConfigRulesReportOutcome;
			typedef std::future<GenerateAggregateConfigRulesReportOutcome> GenerateAggregateConfigRulesReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GenerateAggregateConfigRulesReportRequest&, const GenerateAggregateConfigRulesReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAggregateConfigRulesReportAsyncHandler;
			typedef Outcome<Error, Model::GenerateCompliancePackReportResult> GenerateCompliancePackReportOutcome;
			typedef std::future<GenerateCompliancePackReportOutcome> GenerateCompliancePackReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GenerateCompliancePackReportRequest&, const GenerateCompliancePackReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCompliancePackReportAsyncHandler;
			typedef Outcome<Error, Model::GenerateConfigRulesReportResult> GenerateConfigRulesReportOutcome;
			typedef std::future<GenerateConfigRulesReportOutcome> GenerateConfigRulesReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GenerateConfigRulesReportRequest&, const GenerateConfigRulesReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateConfigRulesReportAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateAccountComplianceByPackResult> GetAggregateAccountComplianceByPackOutcome;
			typedef std::future<GetAggregateAccountComplianceByPackOutcome> GetAggregateAccountComplianceByPackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateAccountComplianceByPackRequest&, const GetAggregateAccountComplianceByPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateAccountComplianceByPackAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateCompliancePackResult> GetAggregateCompliancePackOutcome;
			typedef std::future<GetAggregateCompliancePackOutcome> GetAggregateCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateCompliancePackRequest&, const GetAggregateCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateCompliancePackReportResult> GetAggregateCompliancePackReportOutcome;
			typedef std::future<GetAggregateCompliancePackReportOutcome> GetAggregateCompliancePackReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateCompliancePackReportRequest&, const GetAggregateCompliancePackReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateCompliancePackReportAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateConfigRuleResult> GetAggregateConfigRuleOutcome;
			typedef std::future<GetAggregateConfigRuleOutcome> GetAggregateConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateConfigRuleRequest&, const GetAggregateConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateConfigRuleComplianceByPackResult> GetAggregateConfigRuleComplianceByPackOutcome;
			typedef std::future<GetAggregateConfigRuleComplianceByPackOutcome> GetAggregateConfigRuleComplianceByPackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateConfigRuleComplianceByPackRequest&, const GetAggregateConfigRuleComplianceByPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateConfigRuleComplianceByPackAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateConfigRuleSummaryByRiskLevelResult> GetAggregateConfigRuleSummaryByRiskLevelOutcome;
			typedef std::future<GetAggregateConfigRuleSummaryByRiskLevelOutcome> GetAggregateConfigRuleSummaryByRiskLevelOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateConfigRuleSummaryByRiskLevelRequest&, const GetAggregateConfigRuleSummaryByRiskLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateConfigRuleSummaryByRiskLevelAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateConfigRulesReportResult> GetAggregateConfigRulesReportOutcome;
			typedef std::future<GetAggregateConfigRulesReportOutcome> GetAggregateConfigRulesReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateConfigRulesReportRequest&, const GetAggregateConfigRulesReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateConfigRulesReportAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateDiscoveredResourceResult> GetAggregateDiscoveredResourceOutcome;
			typedef std::future<GetAggregateDiscoveredResourceOutcome> GetAggregateDiscoveredResourceOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateDiscoveredResourceRequest&, const GetAggregateDiscoveredResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateDiscoveredResourceAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceComplianceByConfigRuleResult> GetAggregateResourceComplianceByConfigRuleOutcome;
			typedef std::future<GetAggregateResourceComplianceByConfigRuleOutcome> GetAggregateResourceComplianceByConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceComplianceByConfigRuleRequest&, const GetAggregateResourceComplianceByConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceComplianceByConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceComplianceByPackResult> GetAggregateResourceComplianceByPackOutcome;
			typedef std::future<GetAggregateResourceComplianceByPackOutcome> GetAggregateResourceComplianceByPackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceComplianceByPackRequest&, const GetAggregateResourceComplianceByPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceComplianceByPackAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceComplianceGroupByRegionResult> GetAggregateResourceComplianceGroupByRegionOutcome;
			typedef std::future<GetAggregateResourceComplianceGroupByRegionOutcome> GetAggregateResourceComplianceGroupByRegionOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceComplianceGroupByRegionRequest&, const GetAggregateResourceComplianceGroupByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceComplianceGroupByRegionAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceComplianceGroupByResourceTypeResult> GetAggregateResourceComplianceGroupByResourceTypeOutcome;
			typedef std::future<GetAggregateResourceComplianceGroupByResourceTypeOutcome> GetAggregateResourceComplianceGroupByResourceTypeOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceComplianceGroupByResourceTypeRequest&, const GetAggregateResourceComplianceGroupByResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceComplianceGroupByResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceComplianceTimelineResult> GetAggregateResourceComplianceTimelineOutcome;
			typedef std::future<GetAggregateResourceComplianceTimelineOutcome> GetAggregateResourceComplianceTimelineOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceComplianceTimelineRequest&, const GetAggregateResourceComplianceTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceComplianceTimelineAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceConfigurationTimelineResult> GetAggregateResourceConfigurationTimelineOutcome;
			typedef std::future<GetAggregateResourceConfigurationTimelineOutcome> GetAggregateResourceConfigurationTimelineOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceConfigurationTimelineRequest&, const GetAggregateResourceConfigurationTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceConfigurationTimelineAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceCountsGroupByRegionResult> GetAggregateResourceCountsGroupByRegionOutcome;
			typedef std::future<GetAggregateResourceCountsGroupByRegionOutcome> GetAggregateResourceCountsGroupByRegionOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceCountsGroupByRegionRequest&, const GetAggregateResourceCountsGroupByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceCountsGroupByRegionAsyncHandler;
			typedef Outcome<Error, Model::GetAggregateResourceCountsGroupByResourceTypeResult> GetAggregateResourceCountsGroupByResourceTypeOutcome;
			typedef std::future<GetAggregateResourceCountsGroupByResourceTypeOutcome> GetAggregateResourceCountsGroupByResourceTypeOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregateResourceCountsGroupByResourceTypeRequest&, const GetAggregateResourceCountsGroupByResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregateResourceCountsGroupByResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::GetAggregatorResult> GetAggregatorOutcome;
			typedef std::future<GetAggregatorOutcome> GetAggregatorOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetAggregatorRequest&, const GetAggregatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAggregatorAsyncHandler;
			typedef Outcome<Error, Model::GetCompliancePackResult> GetCompliancePackOutcome;
			typedef std::future<GetCompliancePackOutcome> GetCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetCompliancePackRequest&, const GetCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::GetCompliancePackReportResult> GetCompliancePackReportOutcome;
			typedef std::future<GetCompliancePackReportOutcome> GetCompliancePackReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetCompliancePackReportRequest&, const GetCompliancePackReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompliancePackReportAsyncHandler;
			typedef Outcome<Error, Model::GetConfigRuleResult> GetConfigRuleOutcome;
			typedef std::future<GetConfigRuleOutcome> GetConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetConfigRuleRequest&, const GetConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::GetConfigRuleComplianceByPackResult> GetConfigRuleComplianceByPackOutcome;
			typedef std::future<GetConfigRuleComplianceByPackOutcome> GetConfigRuleComplianceByPackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetConfigRuleComplianceByPackRequest&, const GetConfigRuleComplianceByPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigRuleComplianceByPackAsyncHandler;
			typedef Outcome<Error, Model::GetConfigRuleSummaryByRiskLevelResult> GetConfigRuleSummaryByRiskLevelOutcome;
			typedef std::future<GetConfigRuleSummaryByRiskLevelOutcome> GetConfigRuleSummaryByRiskLevelOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetConfigRuleSummaryByRiskLevelRequest&, const GetConfigRuleSummaryByRiskLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigRuleSummaryByRiskLevelAsyncHandler;
			typedef Outcome<Error, Model::GetConfigRulesReportResult> GetConfigRulesReportOutcome;
			typedef std::future<GetConfigRulesReportOutcome> GetConfigRulesReportOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetConfigRulesReportRequest&, const GetConfigRulesReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigRulesReportAsyncHandler;
			typedef Outcome<Error, Model::GetDiscoveredResourceResult> GetDiscoveredResourceOutcome;
			typedef std::future<GetDiscoveredResourceOutcome> GetDiscoveredResourceOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetDiscoveredResourceRequest&, const GetDiscoveredResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiscoveredResourceAsyncHandler;
			typedef Outcome<Error, Model::GetDiscoveredResourceCountsGroupByRegionResult> GetDiscoveredResourceCountsGroupByRegionOutcome;
			typedef std::future<GetDiscoveredResourceCountsGroupByRegionOutcome> GetDiscoveredResourceCountsGroupByRegionOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetDiscoveredResourceCountsGroupByRegionRequest&, const GetDiscoveredResourceCountsGroupByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiscoveredResourceCountsGroupByRegionAsyncHandler;
			typedef Outcome<Error, Model::GetDiscoveredResourceCountsGroupByResourceTypeResult> GetDiscoveredResourceCountsGroupByResourceTypeOutcome;
			typedef std::future<GetDiscoveredResourceCountsGroupByResourceTypeOutcome> GetDiscoveredResourceCountsGroupByResourceTypeOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetDiscoveredResourceCountsGroupByResourceTypeRequest&, const GetDiscoveredResourceCountsGroupByResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiscoveredResourceCountsGroupByResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::GetManagedRuleResult> GetManagedRuleOutcome;
			typedef std::future<GetManagedRuleOutcome> GetManagedRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetManagedRuleRequest&, const GetManagedRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetManagedRuleAsyncHandler;
			typedef Outcome<Error, Model::GetResourceComplianceByConfigRuleResult> GetResourceComplianceByConfigRuleOutcome;
			typedef std::future<GetResourceComplianceByConfigRuleOutcome> GetResourceComplianceByConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceComplianceByConfigRuleRequest&, const GetResourceComplianceByConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceComplianceByConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::GetResourceComplianceByPackResult> GetResourceComplianceByPackOutcome;
			typedef std::future<GetResourceComplianceByPackOutcome> GetResourceComplianceByPackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceComplianceByPackRequest&, const GetResourceComplianceByPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceComplianceByPackAsyncHandler;
			typedef Outcome<Error, Model::GetResourceComplianceGroupByRegionResult> GetResourceComplianceGroupByRegionOutcome;
			typedef std::future<GetResourceComplianceGroupByRegionOutcome> GetResourceComplianceGroupByRegionOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceComplianceGroupByRegionRequest&, const GetResourceComplianceGroupByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceComplianceGroupByRegionAsyncHandler;
			typedef Outcome<Error, Model::GetResourceComplianceGroupByResourceTypeResult> GetResourceComplianceGroupByResourceTypeOutcome;
			typedef std::future<GetResourceComplianceGroupByResourceTypeOutcome> GetResourceComplianceGroupByResourceTypeOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceComplianceGroupByResourceTypeRequest&, const GetResourceComplianceGroupByResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceComplianceGroupByResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::GetResourceComplianceTimelineResult> GetResourceComplianceTimelineOutcome;
			typedef std::future<GetResourceComplianceTimelineOutcome> GetResourceComplianceTimelineOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceComplianceTimelineRequest&, const GetResourceComplianceTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceComplianceTimelineAsyncHandler;
			typedef Outcome<Error, Model::GetResourceConfigurationTimelineResult> GetResourceConfigurationTimelineOutcome;
			typedef std::future<GetResourceConfigurationTimelineOutcome> GetResourceConfigurationTimelineOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::GetResourceConfigurationTimelineRequest&, const GetResourceConfigurationTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceConfigurationTimelineAsyncHandler;
			typedef Outcome<Error, Model::IgnoreAggregateEvaluationResultsResult> IgnoreAggregateEvaluationResultsOutcome;
			typedef std::future<IgnoreAggregateEvaluationResultsOutcome> IgnoreAggregateEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::IgnoreAggregateEvaluationResultsRequest&, const IgnoreAggregateEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreAggregateEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::IgnoreEvaluationResultsResult> IgnoreEvaluationResultsOutcome;
			typedef std::future<IgnoreEvaluationResultsOutcome> IgnoreEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::IgnoreEvaluationResultsRequest&, const IgnoreEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateCompliancePacksResult> ListAggregateCompliancePacksOutcome;
			typedef std::future<ListAggregateCompliancePacksOutcome> ListAggregateCompliancePacksOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateCompliancePacksRequest&, const ListAggregateCompliancePacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateCompliancePacksAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateConfigRuleEvaluationResultsResult> ListAggregateConfigRuleEvaluationResultsOutcome;
			typedef std::future<ListAggregateConfigRuleEvaluationResultsOutcome> ListAggregateConfigRuleEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateConfigRuleEvaluationResultsRequest&, const ListAggregateConfigRuleEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateConfigRuleEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateConfigRulesResult> ListAggregateConfigRulesOutcome;
			typedef std::future<ListAggregateConfigRulesOutcome> ListAggregateConfigRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateConfigRulesRequest&, const ListAggregateConfigRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateConfigRulesAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateDiscoveredResourcesResult> ListAggregateDiscoveredResourcesOutcome;
			typedef std::future<ListAggregateDiscoveredResourcesOutcome> ListAggregateDiscoveredResourcesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateDiscoveredResourcesRequest&, const ListAggregateDiscoveredResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateDiscoveredResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateRemediationsResult> ListAggregateRemediationsOutcome;
			typedef std::future<ListAggregateRemediationsOutcome> ListAggregateRemediationsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateRemediationsRequest&, const ListAggregateRemediationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateRemediationsAsyncHandler;
			typedef Outcome<Error, Model::ListAggregateResourceEvaluationResultsResult> ListAggregateResourceEvaluationResultsOutcome;
			typedef std::future<ListAggregateResourceEvaluationResultsOutcome> ListAggregateResourceEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregateResourceEvaluationResultsRequest&, const ListAggregateResourceEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateResourceEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListAggregatorsResult> ListAggregatorsOutcome;
			typedef std::future<ListAggregatorsOutcome> ListAggregatorsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListAggregatorsRequest&, const ListAggregatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregatorsAsyncHandler;
			typedef Outcome<Error, Model::ListCompliancePackTemplatesResult> ListCompliancePackTemplatesOutcome;
			typedef std::future<ListCompliancePackTemplatesOutcome> ListCompliancePackTemplatesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListCompliancePackTemplatesRequest&, const ListCompliancePackTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompliancePackTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListCompliancePacksResult> ListCompliancePacksOutcome;
			typedef std::future<ListCompliancePacksOutcome> ListCompliancePacksOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListCompliancePacksRequest&, const ListCompliancePacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompliancePacksAsyncHandler;
			typedef Outcome<Error, Model::ListConfigRuleEvaluationResultsResult> ListConfigRuleEvaluationResultsOutcome;
			typedef std::future<ListConfigRuleEvaluationResultsOutcome> ListConfigRuleEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListConfigRuleEvaluationResultsRequest&, const ListConfigRuleEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigRuleEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListDiscoveredResourcesResult> ListDiscoveredResourcesOutcome;
			typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListDiscoveredResourcesRequest&, const ListDiscoveredResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiscoveredResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListManagedRulesResult> ListManagedRulesOutcome;
			typedef std::future<ListManagedRulesOutcome> ListManagedRulesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListManagedRulesRequest&, const ListManagedRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListManagedRulesAsyncHandler;
			typedef Outcome<Error, Model::ListRemediationTemplatesResult> ListRemediationTemplatesOutcome;
			typedef std::future<ListRemediationTemplatesOutcome> ListRemediationTemplatesOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListRemediationTemplatesRequest&, const ListRemediationTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRemediationTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListRemediationsResult> ListRemediationsOutcome;
			typedef std::future<ListRemediationsOutcome> ListRemediationsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListRemediationsRequest&, const ListRemediationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRemediationsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceEvaluationResultsResult> ListResourceEvaluationResultsOutcome;
			typedef std::future<ListResourceEvaluationResultsOutcome> ListResourceEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::ListResourceEvaluationResultsRequest&, const ListResourceEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::RevertAggregateEvaluationResultsResult> RevertAggregateEvaluationResultsOutcome;
			typedef std::future<RevertAggregateEvaluationResultsOutcome> RevertAggregateEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::RevertAggregateEvaluationResultsRequest&, const RevertAggregateEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevertAggregateEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::RevertEvaluationResultsResult> RevertEvaluationResultsOutcome;
			typedef std::future<RevertEvaluationResultsOutcome> RevertEvaluationResultsOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::RevertEvaluationResultsRequest&, const RevertEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevertEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::StartAggregateConfigRuleEvaluationResult> StartAggregateConfigRuleEvaluationOutcome;
			typedef std::future<StartAggregateConfigRuleEvaluationOutcome> StartAggregateConfigRuleEvaluationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::StartAggregateConfigRuleEvaluationRequest&, const StartAggregateConfigRuleEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartAggregateConfigRuleEvaluationAsyncHandler;
			typedef Outcome<Error, Model::StartAggregateRemediationResult> StartAggregateRemediationOutcome;
			typedef std::future<StartAggregateRemediationOutcome> StartAggregateRemediationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::StartAggregateRemediationRequest&, const StartAggregateRemediationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartAggregateRemediationAsyncHandler;
			typedef Outcome<Error, Model::StartRemediationResult> StartRemediationOutcome;
			typedef std::future<StartRemediationOutcome> StartRemediationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::StartRemediationRequest&, const StartRemediationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRemediationAsyncHandler;
			typedef Outcome<Error, Model::UpdateAggregateCompliancePackResult> UpdateAggregateCompliancePackOutcome;
			typedef std::future<UpdateAggregateCompliancePackOutcome> UpdateAggregateCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateCompliancePackRequest&, const UpdateAggregateCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::UpdateAggregateConfigRuleResult> UpdateAggregateConfigRuleOutcome;
			typedef std::future<UpdateAggregateConfigRuleOutcome> UpdateAggregateConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateConfigRuleRequest&, const UpdateAggregateConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateConfigRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateAggregateRemediationResult> UpdateAggregateRemediationOutcome;
			typedef std::future<UpdateAggregateRemediationOutcome> UpdateAggregateRemediationOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateRemediationRequest&, const UpdateAggregateRemediationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateRemediationAsyncHandler;
			typedef Outcome<Error, Model::UpdateAggregatorResult> UpdateAggregatorOutcome;
			typedef std::future<UpdateAggregatorOutcome> UpdateAggregatorOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateAggregatorRequest&, const UpdateAggregatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregatorAsyncHandler;
			typedef Outcome<Error, Model::UpdateCompliancePackResult> UpdateCompliancePackOutcome;
			typedef std::future<UpdateCompliancePackOutcome> UpdateCompliancePackOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateCompliancePackRequest&, const UpdateCompliancePackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCompliancePackAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigRuleResult> UpdateConfigRuleOutcome;
			typedef std::future<UpdateConfigRuleOutcome> UpdateConfigRuleOutcomeCallable;
			typedef std::function<void(const ConfigClient*, const Model::UpdateConfigRuleRequest&, const UpdateConfigRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigRuleAsyncHandler;

			ConfigClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ConfigClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ConfigClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ConfigClient();
			ActiveAggregateConfigRulesOutcome activeAggregateConfigRules(const Model::ActiveAggregateConfigRulesRequest &request)const;
			void activeAggregateConfigRulesAsync(const Model::ActiveAggregateConfigRulesRequest& request, const ActiveAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveAggregateConfigRulesOutcomeCallable activeAggregateConfigRulesCallable(const Model::ActiveAggregateConfigRulesRequest& request) const;
			AttachAggregateConfigRuleToCompliancePackOutcome attachAggregateConfigRuleToCompliancePack(const Model::AttachAggregateConfigRuleToCompliancePackRequest &request)const;
			void attachAggregateConfigRuleToCompliancePackAsync(const Model::AttachAggregateConfigRuleToCompliancePackRequest& request, const AttachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachAggregateConfigRuleToCompliancePackOutcomeCallable attachAggregateConfigRuleToCompliancePackCallable(const Model::AttachAggregateConfigRuleToCompliancePackRequest& request) const;
			AttachConfigRuleToCompliancePackOutcome attachConfigRuleToCompliancePack(const Model::AttachConfigRuleToCompliancePackRequest &request)const;
			void attachConfigRuleToCompliancePackAsync(const Model::AttachConfigRuleToCompliancePackRequest& request, const AttachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachConfigRuleToCompliancePackOutcomeCallable attachConfigRuleToCompliancePackCallable(const Model::AttachConfigRuleToCompliancePackRequest& request) const;
			CreateAggregateCompliancePackOutcome createAggregateCompliancePack(const Model::CreateAggregateCompliancePackRequest &request)const;
			void createAggregateCompliancePackAsync(const Model::CreateAggregateCompliancePackRequest& request, const CreateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAggregateCompliancePackOutcomeCallable createAggregateCompliancePackCallable(const Model::CreateAggregateCompliancePackRequest& request) const;
			CreateAggregateConfigRuleOutcome createAggregateConfigRule(const Model::CreateAggregateConfigRuleRequest &request)const;
			void createAggregateConfigRuleAsync(const Model::CreateAggregateConfigRuleRequest& request, const CreateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAggregateConfigRuleOutcomeCallable createAggregateConfigRuleCallable(const Model::CreateAggregateConfigRuleRequest& request) const;
			CreateAggregateRemediationOutcome createAggregateRemediation(const Model::CreateAggregateRemediationRequest &request)const;
			void createAggregateRemediationAsync(const Model::CreateAggregateRemediationRequest& request, const CreateAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAggregateRemediationOutcomeCallable createAggregateRemediationCallable(const Model::CreateAggregateRemediationRequest& request) const;
			CreateAggregatorOutcome createAggregator(const Model::CreateAggregatorRequest &request)const;
			void createAggregatorAsync(const Model::CreateAggregatorRequest& request, const CreateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAggregatorOutcomeCallable createAggregatorCallable(const Model::CreateAggregatorRequest& request) const;
			CreateCompliancePackOutcome createCompliancePack(const Model::CreateCompliancePackRequest &request)const;
			void createCompliancePackAsync(const Model::CreateCompliancePackRequest& request, const CreateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCompliancePackOutcomeCallable createCompliancePackCallable(const Model::CreateCompliancePackRequest& request) const;
			CreateConfigRuleOutcome createConfigRule(const Model::CreateConfigRuleRequest &request)const;
			void createConfigRuleAsync(const Model::CreateConfigRuleRequest& request, const CreateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigRuleOutcomeCallable createConfigRuleCallable(const Model::CreateConfigRuleRequest& request) const;
			CreateRemediationOutcome createRemediation(const Model::CreateRemediationRequest &request)const;
			void createRemediationAsync(const Model::CreateRemediationRequest& request, const CreateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRemediationOutcomeCallable createRemediationCallable(const Model::CreateRemediationRequest& request) const;
			DeactiveAggregateConfigRulesOutcome deactiveAggregateConfigRules(const Model::DeactiveAggregateConfigRulesRequest &request)const;
			void deactiveAggregateConfigRulesAsync(const Model::DeactiveAggregateConfigRulesRequest& request, const DeactiveAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveAggregateConfigRulesOutcomeCallable deactiveAggregateConfigRulesCallable(const Model::DeactiveAggregateConfigRulesRequest& request) const;
			DeactiveConfigRulesOutcome deactiveConfigRules(const Model::DeactiveConfigRulesRequest &request)const;
			void deactiveConfigRulesAsync(const Model::DeactiveConfigRulesRequest& request, const DeactiveConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveConfigRulesOutcomeCallable deactiveConfigRulesCallable(const Model::DeactiveConfigRulesRequest& request) const;
			DeleteAggregateCompliancePacksOutcome deleteAggregateCompliancePacks(const Model::DeleteAggregateCompliancePacksRequest &request)const;
			void deleteAggregateCompliancePacksAsync(const Model::DeleteAggregateCompliancePacksRequest& request, const DeleteAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAggregateCompliancePacksOutcomeCallable deleteAggregateCompliancePacksCallable(const Model::DeleteAggregateCompliancePacksRequest& request) const;
			DeleteAggregateConfigRulesOutcome deleteAggregateConfigRules(const Model::DeleteAggregateConfigRulesRequest &request)const;
			void deleteAggregateConfigRulesAsync(const Model::DeleteAggregateConfigRulesRequest& request, const DeleteAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAggregateConfigRulesOutcomeCallable deleteAggregateConfigRulesCallable(const Model::DeleteAggregateConfigRulesRequest& request) const;
			DeleteAggregateRemediationsOutcome deleteAggregateRemediations(const Model::DeleteAggregateRemediationsRequest &request)const;
			void deleteAggregateRemediationsAsync(const Model::DeleteAggregateRemediationsRequest& request, const DeleteAggregateRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAggregateRemediationsOutcomeCallable deleteAggregateRemediationsCallable(const Model::DeleteAggregateRemediationsRequest& request) const;
			DeleteAggregatorsOutcome deleteAggregators(const Model::DeleteAggregatorsRequest &request)const;
			void deleteAggregatorsAsync(const Model::DeleteAggregatorsRequest& request, const DeleteAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAggregatorsOutcomeCallable deleteAggregatorsCallable(const Model::DeleteAggregatorsRequest& request) const;
			DeleteCompliancePacksOutcome deleteCompliancePacks(const Model::DeleteCompliancePacksRequest &request)const;
			void deleteCompliancePacksAsync(const Model::DeleteCompliancePacksRequest& request, const DeleteCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCompliancePacksOutcomeCallable deleteCompliancePacksCallable(const Model::DeleteCompliancePacksRequest& request) const;
			DeleteRemediationsOutcome deleteRemediations(const Model::DeleteRemediationsRequest &request)const;
			void deleteRemediationsAsync(const Model::DeleteRemediationsRequest& request, const DeleteRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRemediationsOutcomeCallable deleteRemediationsCallable(const Model::DeleteRemediationsRequest& request) const;
			DetachAggregateConfigRuleToCompliancePackOutcome detachAggregateConfigRuleToCompliancePack(const Model::DetachAggregateConfigRuleToCompliancePackRequest &request)const;
			void detachAggregateConfigRuleToCompliancePackAsync(const Model::DetachAggregateConfigRuleToCompliancePackRequest& request, const DetachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachAggregateConfigRuleToCompliancePackOutcomeCallable detachAggregateConfigRuleToCompliancePackCallable(const Model::DetachAggregateConfigRuleToCompliancePackRequest& request) const;
			DetachConfigRuleToCompliancePackOutcome detachConfigRuleToCompliancePack(const Model::DetachConfigRuleToCompliancePackRequest &request)const;
			void detachConfigRuleToCompliancePackAsync(const Model::DetachConfigRuleToCompliancePackRequest& request, const DetachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachConfigRuleToCompliancePackOutcomeCallable detachConfigRuleToCompliancePackCallable(const Model::DetachConfigRuleToCompliancePackRequest& request) const;
			GenerateAggregateCompliancePackReportOutcome generateAggregateCompliancePackReport(const Model::GenerateAggregateCompliancePackReportRequest &request)const;
			void generateAggregateCompliancePackReportAsync(const Model::GenerateAggregateCompliancePackReportRequest& request, const GenerateAggregateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAggregateCompliancePackReportOutcomeCallable generateAggregateCompliancePackReportCallable(const Model::GenerateAggregateCompliancePackReportRequest& request) const;
			GenerateAggregateConfigRulesReportOutcome generateAggregateConfigRulesReport(const Model::GenerateAggregateConfigRulesReportRequest &request)const;
			void generateAggregateConfigRulesReportAsync(const Model::GenerateAggregateConfigRulesReportRequest& request, const GenerateAggregateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAggregateConfigRulesReportOutcomeCallable generateAggregateConfigRulesReportCallable(const Model::GenerateAggregateConfigRulesReportRequest& request) const;
			GenerateCompliancePackReportOutcome generateCompliancePackReport(const Model::GenerateCompliancePackReportRequest &request)const;
			void generateCompliancePackReportAsync(const Model::GenerateCompliancePackReportRequest& request, const GenerateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCompliancePackReportOutcomeCallable generateCompliancePackReportCallable(const Model::GenerateCompliancePackReportRequest& request) const;
			GenerateConfigRulesReportOutcome generateConfigRulesReport(const Model::GenerateConfigRulesReportRequest &request)const;
			void generateConfigRulesReportAsync(const Model::GenerateConfigRulesReportRequest& request, const GenerateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateConfigRulesReportOutcomeCallable generateConfigRulesReportCallable(const Model::GenerateConfigRulesReportRequest& request) const;
			GetAggregateAccountComplianceByPackOutcome getAggregateAccountComplianceByPack(const Model::GetAggregateAccountComplianceByPackRequest &request)const;
			void getAggregateAccountComplianceByPackAsync(const Model::GetAggregateAccountComplianceByPackRequest& request, const GetAggregateAccountComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateAccountComplianceByPackOutcomeCallable getAggregateAccountComplianceByPackCallable(const Model::GetAggregateAccountComplianceByPackRequest& request) const;
			GetAggregateCompliancePackOutcome getAggregateCompliancePack(const Model::GetAggregateCompliancePackRequest &request)const;
			void getAggregateCompliancePackAsync(const Model::GetAggregateCompliancePackRequest& request, const GetAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateCompliancePackOutcomeCallable getAggregateCompliancePackCallable(const Model::GetAggregateCompliancePackRequest& request) const;
			GetAggregateCompliancePackReportOutcome getAggregateCompliancePackReport(const Model::GetAggregateCompliancePackReportRequest &request)const;
			void getAggregateCompliancePackReportAsync(const Model::GetAggregateCompliancePackReportRequest& request, const GetAggregateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateCompliancePackReportOutcomeCallable getAggregateCompliancePackReportCallable(const Model::GetAggregateCompliancePackReportRequest& request) const;
			GetAggregateConfigRuleOutcome getAggregateConfigRule(const Model::GetAggregateConfigRuleRequest &request)const;
			void getAggregateConfigRuleAsync(const Model::GetAggregateConfigRuleRequest& request, const GetAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateConfigRuleOutcomeCallable getAggregateConfigRuleCallable(const Model::GetAggregateConfigRuleRequest& request) const;
			GetAggregateConfigRuleComplianceByPackOutcome getAggregateConfigRuleComplianceByPack(const Model::GetAggregateConfigRuleComplianceByPackRequest &request)const;
			void getAggregateConfigRuleComplianceByPackAsync(const Model::GetAggregateConfigRuleComplianceByPackRequest& request, const GetAggregateConfigRuleComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateConfigRuleComplianceByPackOutcomeCallable getAggregateConfigRuleComplianceByPackCallable(const Model::GetAggregateConfigRuleComplianceByPackRequest& request) const;
			GetAggregateConfigRuleSummaryByRiskLevelOutcome getAggregateConfigRuleSummaryByRiskLevel(const Model::GetAggregateConfigRuleSummaryByRiskLevelRequest &request)const;
			void getAggregateConfigRuleSummaryByRiskLevelAsync(const Model::GetAggregateConfigRuleSummaryByRiskLevelRequest& request, const GetAggregateConfigRuleSummaryByRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateConfigRuleSummaryByRiskLevelOutcomeCallable getAggregateConfigRuleSummaryByRiskLevelCallable(const Model::GetAggregateConfigRuleSummaryByRiskLevelRequest& request) const;
			GetAggregateConfigRulesReportOutcome getAggregateConfigRulesReport(const Model::GetAggregateConfigRulesReportRequest &request)const;
			void getAggregateConfigRulesReportAsync(const Model::GetAggregateConfigRulesReportRequest& request, const GetAggregateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateConfigRulesReportOutcomeCallable getAggregateConfigRulesReportCallable(const Model::GetAggregateConfigRulesReportRequest& request) const;
			GetAggregateDiscoveredResourceOutcome getAggregateDiscoveredResource(const Model::GetAggregateDiscoveredResourceRequest &request)const;
			void getAggregateDiscoveredResourceAsync(const Model::GetAggregateDiscoveredResourceRequest& request, const GetAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateDiscoveredResourceOutcomeCallable getAggregateDiscoveredResourceCallable(const Model::GetAggregateDiscoveredResourceRequest& request) const;
			GetAggregateResourceComplianceByConfigRuleOutcome getAggregateResourceComplianceByConfigRule(const Model::GetAggregateResourceComplianceByConfigRuleRequest &request)const;
			void getAggregateResourceComplianceByConfigRuleAsync(const Model::GetAggregateResourceComplianceByConfigRuleRequest& request, const GetAggregateResourceComplianceByConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceComplianceByConfigRuleOutcomeCallable getAggregateResourceComplianceByConfigRuleCallable(const Model::GetAggregateResourceComplianceByConfigRuleRequest& request) const;
			GetAggregateResourceComplianceByPackOutcome getAggregateResourceComplianceByPack(const Model::GetAggregateResourceComplianceByPackRequest &request)const;
			void getAggregateResourceComplianceByPackAsync(const Model::GetAggregateResourceComplianceByPackRequest& request, const GetAggregateResourceComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceComplianceByPackOutcomeCallable getAggregateResourceComplianceByPackCallable(const Model::GetAggregateResourceComplianceByPackRequest& request) const;
			GetAggregateResourceComplianceGroupByRegionOutcome getAggregateResourceComplianceGroupByRegion(const Model::GetAggregateResourceComplianceGroupByRegionRequest &request)const;
			void getAggregateResourceComplianceGroupByRegionAsync(const Model::GetAggregateResourceComplianceGroupByRegionRequest& request, const GetAggregateResourceComplianceGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceComplianceGroupByRegionOutcomeCallable getAggregateResourceComplianceGroupByRegionCallable(const Model::GetAggregateResourceComplianceGroupByRegionRequest& request) const;
			GetAggregateResourceComplianceGroupByResourceTypeOutcome getAggregateResourceComplianceGroupByResourceType(const Model::GetAggregateResourceComplianceGroupByResourceTypeRequest &request)const;
			void getAggregateResourceComplianceGroupByResourceTypeAsync(const Model::GetAggregateResourceComplianceGroupByResourceTypeRequest& request, const GetAggregateResourceComplianceGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceComplianceGroupByResourceTypeOutcomeCallable getAggregateResourceComplianceGroupByResourceTypeCallable(const Model::GetAggregateResourceComplianceGroupByResourceTypeRequest& request) const;
			GetAggregateResourceComplianceTimelineOutcome getAggregateResourceComplianceTimeline(const Model::GetAggregateResourceComplianceTimelineRequest &request)const;
			void getAggregateResourceComplianceTimelineAsync(const Model::GetAggregateResourceComplianceTimelineRequest& request, const GetAggregateResourceComplianceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceComplianceTimelineOutcomeCallable getAggregateResourceComplianceTimelineCallable(const Model::GetAggregateResourceComplianceTimelineRequest& request) const;
			GetAggregateResourceConfigurationTimelineOutcome getAggregateResourceConfigurationTimeline(const Model::GetAggregateResourceConfigurationTimelineRequest &request)const;
			void getAggregateResourceConfigurationTimelineAsync(const Model::GetAggregateResourceConfigurationTimelineRequest& request, const GetAggregateResourceConfigurationTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceConfigurationTimelineOutcomeCallable getAggregateResourceConfigurationTimelineCallable(const Model::GetAggregateResourceConfigurationTimelineRequest& request) const;
			GetAggregateResourceCountsGroupByRegionOutcome getAggregateResourceCountsGroupByRegion(const Model::GetAggregateResourceCountsGroupByRegionRequest &request)const;
			void getAggregateResourceCountsGroupByRegionAsync(const Model::GetAggregateResourceCountsGroupByRegionRequest& request, const GetAggregateResourceCountsGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceCountsGroupByRegionOutcomeCallable getAggregateResourceCountsGroupByRegionCallable(const Model::GetAggregateResourceCountsGroupByRegionRequest& request) const;
			GetAggregateResourceCountsGroupByResourceTypeOutcome getAggregateResourceCountsGroupByResourceType(const Model::GetAggregateResourceCountsGroupByResourceTypeRequest &request)const;
			void getAggregateResourceCountsGroupByResourceTypeAsync(const Model::GetAggregateResourceCountsGroupByResourceTypeRequest& request, const GetAggregateResourceCountsGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregateResourceCountsGroupByResourceTypeOutcomeCallable getAggregateResourceCountsGroupByResourceTypeCallable(const Model::GetAggregateResourceCountsGroupByResourceTypeRequest& request) const;
			GetAggregatorOutcome getAggregator(const Model::GetAggregatorRequest &request)const;
			void getAggregatorAsync(const Model::GetAggregatorRequest& request, const GetAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAggregatorOutcomeCallable getAggregatorCallable(const Model::GetAggregatorRequest& request) const;
			GetCompliancePackOutcome getCompliancePack(const Model::GetCompliancePackRequest &request)const;
			void getCompliancePackAsync(const Model::GetCompliancePackRequest& request, const GetCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompliancePackOutcomeCallable getCompliancePackCallable(const Model::GetCompliancePackRequest& request) const;
			GetCompliancePackReportOutcome getCompliancePackReport(const Model::GetCompliancePackReportRequest &request)const;
			void getCompliancePackReportAsync(const Model::GetCompliancePackReportRequest& request, const GetCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompliancePackReportOutcomeCallable getCompliancePackReportCallable(const Model::GetCompliancePackReportRequest& request) const;
			GetConfigRuleOutcome getConfigRule(const Model::GetConfigRuleRequest &request)const;
			void getConfigRuleAsync(const Model::GetConfigRuleRequest& request, const GetConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigRuleOutcomeCallable getConfigRuleCallable(const Model::GetConfigRuleRequest& request) const;
			GetConfigRuleComplianceByPackOutcome getConfigRuleComplianceByPack(const Model::GetConfigRuleComplianceByPackRequest &request)const;
			void getConfigRuleComplianceByPackAsync(const Model::GetConfigRuleComplianceByPackRequest& request, const GetConfigRuleComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigRuleComplianceByPackOutcomeCallable getConfigRuleComplianceByPackCallable(const Model::GetConfigRuleComplianceByPackRequest& request) const;
			GetConfigRuleSummaryByRiskLevelOutcome getConfigRuleSummaryByRiskLevel(const Model::GetConfigRuleSummaryByRiskLevelRequest &request)const;
			void getConfigRuleSummaryByRiskLevelAsync(const Model::GetConfigRuleSummaryByRiskLevelRequest& request, const GetConfigRuleSummaryByRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigRuleSummaryByRiskLevelOutcomeCallable getConfigRuleSummaryByRiskLevelCallable(const Model::GetConfigRuleSummaryByRiskLevelRequest& request) const;
			GetConfigRulesReportOutcome getConfigRulesReport(const Model::GetConfigRulesReportRequest &request)const;
			void getConfigRulesReportAsync(const Model::GetConfigRulesReportRequest& request, const GetConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigRulesReportOutcomeCallable getConfigRulesReportCallable(const Model::GetConfigRulesReportRequest& request) const;
			GetDiscoveredResourceOutcome getDiscoveredResource(const Model::GetDiscoveredResourceRequest &request)const;
			void getDiscoveredResourceAsync(const Model::GetDiscoveredResourceRequest& request, const GetDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiscoveredResourceOutcomeCallable getDiscoveredResourceCallable(const Model::GetDiscoveredResourceRequest& request) const;
			GetDiscoveredResourceCountsGroupByRegionOutcome getDiscoveredResourceCountsGroupByRegion(const Model::GetDiscoveredResourceCountsGroupByRegionRequest &request)const;
			void getDiscoveredResourceCountsGroupByRegionAsync(const Model::GetDiscoveredResourceCountsGroupByRegionRequest& request, const GetDiscoveredResourceCountsGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiscoveredResourceCountsGroupByRegionOutcomeCallable getDiscoveredResourceCountsGroupByRegionCallable(const Model::GetDiscoveredResourceCountsGroupByRegionRequest& request) const;
			GetDiscoveredResourceCountsGroupByResourceTypeOutcome getDiscoveredResourceCountsGroupByResourceType(const Model::GetDiscoveredResourceCountsGroupByResourceTypeRequest &request)const;
			void getDiscoveredResourceCountsGroupByResourceTypeAsync(const Model::GetDiscoveredResourceCountsGroupByResourceTypeRequest& request, const GetDiscoveredResourceCountsGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiscoveredResourceCountsGroupByResourceTypeOutcomeCallable getDiscoveredResourceCountsGroupByResourceTypeCallable(const Model::GetDiscoveredResourceCountsGroupByResourceTypeRequest& request) const;
			GetManagedRuleOutcome getManagedRule(const Model::GetManagedRuleRequest &request)const;
			void getManagedRuleAsync(const Model::GetManagedRuleRequest& request, const GetManagedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetManagedRuleOutcomeCallable getManagedRuleCallable(const Model::GetManagedRuleRequest& request) const;
			GetResourceComplianceByConfigRuleOutcome getResourceComplianceByConfigRule(const Model::GetResourceComplianceByConfigRuleRequest &request)const;
			void getResourceComplianceByConfigRuleAsync(const Model::GetResourceComplianceByConfigRuleRequest& request, const GetResourceComplianceByConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceComplianceByConfigRuleOutcomeCallable getResourceComplianceByConfigRuleCallable(const Model::GetResourceComplianceByConfigRuleRequest& request) const;
			GetResourceComplianceByPackOutcome getResourceComplianceByPack(const Model::GetResourceComplianceByPackRequest &request)const;
			void getResourceComplianceByPackAsync(const Model::GetResourceComplianceByPackRequest& request, const GetResourceComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceComplianceByPackOutcomeCallable getResourceComplianceByPackCallable(const Model::GetResourceComplianceByPackRequest& request) const;
			GetResourceComplianceGroupByRegionOutcome getResourceComplianceGroupByRegion(const Model::GetResourceComplianceGroupByRegionRequest &request)const;
			void getResourceComplianceGroupByRegionAsync(const Model::GetResourceComplianceGroupByRegionRequest& request, const GetResourceComplianceGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceComplianceGroupByRegionOutcomeCallable getResourceComplianceGroupByRegionCallable(const Model::GetResourceComplianceGroupByRegionRequest& request) const;
			GetResourceComplianceGroupByResourceTypeOutcome getResourceComplianceGroupByResourceType(const Model::GetResourceComplianceGroupByResourceTypeRequest &request)const;
			void getResourceComplianceGroupByResourceTypeAsync(const Model::GetResourceComplianceGroupByResourceTypeRequest& request, const GetResourceComplianceGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceComplianceGroupByResourceTypeOutcomeCallable getResourceComplianceGroupByResourceTypeCallable(const Model::GetResourceComplianceGroupByResourceTypeRequest& request) const;
			GetResourceComplianceTimelineOutcome getResourceComplianceTimeline(const Model::GetResourceComplianceTimelineRequest &request)const;
			void getResourceComplianceTimelineAsync(const Model::GetResourceComplianceTimelineRequest& request, const GetResourceComplianceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceComplianceTimelineOutcomeCallable getResourceComplianceTimelineCallable(const Model::GetResourceComplianceTimelineRequest& request) const;
			GetResourceConfigurationTimelineOutcome getResourceConfigurationTimeline(const Model::GetResourceConfigurationTimelineRequest &request)const;
			void getResourceConfigurationTimelineAsync(const Model::GetResourceConfigurationTimelineRequest& request, const GetResourceConfigurationTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceConfigurationTimelineOutcomeCallable getResourceConfigurationTimelineCallable(const Model::GetResourceConfigurationTimelineRequest& request) const;
			IgnoreAggregateEvaluationResultsOutcome ignoreAggregateEvaluationResults(const Model::IgnoreAggregateEvaluationResultsRequest &request)const;
			void ignoreAggregateEvaluationResultsAsync(const Model::IgnoreAggregateEvaluationResultsRequest& request, const IgnoreAggregateEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreAggregateEvaluationResultsOutcomeCallable ignoreAggregateEvaluationResultsCallable(const Model::IgnoreAggregateEvaluationResultsRequest& request) const;
			IgnoreEvaluationResultsOutcome ignoreEvaluationResults(const Model::IgnoreEvaluationResultsRequest &request)const;
			void ignoreEvaluationResultsAsync(const Model::IgnoreEvaluationResultsRequest& request, const IgnoreEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreEvaluationResultsOutcomeCallable ignoreEvaluationResultsCallable(const Model::IgnoreEvaluationResultsRequest& request) const;
			ListAggregateCompliancePacksOutcome listAggregateCompliancePacks(const Model::ListAggregateCompliancePacksRequest &request)const;
			void listAggregateCompliancePacksAsync(const Model::ListAggregateCompliancePacksRequest& request, const ListAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateCompliancePacksOutcomeCallable listAggregateCompliancePacksCallable(const Model::ListAggregateCompliancePacksRequest& request) const;
			ListAggregateConfigRuleEvaluationResultsOutcome listAggregateConfigRuleEvaluationResults(const Model::ListAggregateConfigRuleEvaluationResultsRequest &request)const;
			void listAggregateConfigRuleEvaluationResultsAsync(const Model::ListAggregateConfigRuleEvaluationResultsRequest& request, const ListAggregateConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateConfigRuleEvaluationResultsOutcomeCallable listAggregateConfigRuleEvaluationResultsCallable(const Model::ListAggregateConfigRuleEvaluationResultsRequest& request) const;
			ListAggregateConfigRulesOutcome listAggregateConfigRules(const Model::ListAggregateConfigRulesRequest &request)const;
			void listAggregateConfigRulesAsync(const Model::ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateConfigRulesOutcomeCallable listAggregateConfigRulesCallable(const Model::ListAggregateConfigRulesRequest& request) const;
			ListAggregateDiscoveredResourcesOutcome listAggregateDiscoveredResources(const Model::ListAggregateDiscoveredResourcesRequest &request)const;
			void listAggregateDiscoveredResourcesAsync(const Model::ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateDiscoveredResourcesOutcomeCallable listAggregateDiscoveredResourcesCallable(const Model::ListAggregateDiscoveredResourcesRequest& request) const;
			ListAggregateRemediationsOutcome listAggregateRemediations(const Model::ListAggregateRemediationsRequest &request)const;
			void listAggregateRemediationsAsync(const Model::ListAggregateRemediationsRequest& request, const ListAggregateRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateRemediationsOutcomeCallable listAggregateRemediationsCallable(const Model::ListAggregateRemediationsRequest& request) const;
			ListAggregateResourceEvaluationResultsOutcome listAggregateResourceEvaluationResults(const Model::ListAggregateResourceEvaluationResultsRequest &request)const;
			void listAggregateResourceEvaluationResultsAsync(const Model::ListAggregateResourceEvaluationResultsRequest& request, const ListAggregateResourceEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregateResourceEvaluationResultsOutcomeCallable listAggregateResourceEvaluationResultsCallable(const Model::ListAggregateResourceEvaluationResultsRequest& request) const;
			ListAggregatorsOutcome listAggregators(const Model::ListAggregatorsRequest &request)const;
			void listAggregatorsAsync(const Model::ListAggregatorsRequest& request, const ListAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAggregatorsOutcomeCallable listAggregatorsCallable(const Model::ListAggregatorsRequest& request) const;
			ListCompliancePackTemplatesOutcome listCompliancePackTemplates(const Model::ListCompliancePackTemplatesRequest &request)const;
			void listCompliancePackTemplatesAsync(const Model::ListCompliancePackTemplatesRequest& request, const ListCompliancePackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompliancePackTemplatesOutcomeCallable listCompliancePackTemplatesCallable(const Model::ListCompliancePackTemplatesRequest& request) const;
			ListCompliancePacksOutcome listCompliancePacks(const Model::ListCompliancePacksRequest &request)const;
			void listCompliancePacksAsync(const Model::ListCompliancePacksRequest& request, const ListCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompliancePacksOutcomeCallable listCompliancePacksCallable(const Model::ListCompliancePacksRequest& request) const;
			ListConfigRuleEvaluationResultsOutcome listConfigRuleEvaluationResults(const Model::ListConfigRuleEvaluationResultsRequest &request)const;
			void listConfigRuleEvaluationResultsAsync(const Model::ListConfigRuleEvaluationResultsRequest& request, const ListConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigRuleEvaluationResultsOutcomeCallable listConfigRuleEvaluationResultsCallable(const Model::ListConfigRuleEvaluationResultsRequest& request) const;
			ListDiscoveredResourcesOutcome listDiscoveredResources(const Model::ListDiscoveredResourcesRequest &request)const;
			void listDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiscoveredResourcesOutcomeCallable listDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request) const;
			ListManagedRulesOutcome listManagedRules(const Model::ListManagedRulesRequest &request)const;
			void listManagedRulesAsync(const Model::ListManagedRulesRequest& request, const ListManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListManagedRulesOutcomeCallable listManagedRulesCallable(const Model::ListManagedRulesRequest& request) const;
			ListRemediationTemplatesOutcome listRemediationTemplates(const Model::ListRemediationTemplatesRequest &request)const;
			void listRemediationTemplatesAsync(const Model::ListRemediationTemplatesRequest& request, const ListRemediationTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRemediationTemplatesOutcomeCallable listRemediationTemplatesCallable(const Model::ListRemediationTemplatesRequest& request) const;
			ListRemediationsOutcome listRemediations(const Model::ListRemediationsRequest &request)const;
			void listRemediationsAsync(const Model::ListRemediationsRequest& request, const ListRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRemediationsOutcomeCallable listRemediationsCallable(const Model::ListRemediationsRequest& request) const;
			ListResourceEvaluationResultsOutcome listResourceEvaluationResults(const Model::ListResourceEvaluationResultsRequest &request)const;
			void listResourceEvaluationResultsAsync(const Model::ListResourceEvaluationResultsRequest& request, const ListResourceEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceEvaluationResultsOutcomeCallable listResourceEvaluationResultsCallable(const Model::ListResourceEvaluationResultsRequest& request) const;
			RevertAggregateEvaluationResultsOutcome revertAggregateEvaluationResults(const Model::RevertAggregateEvaluationResultsRequest &request)const;
			void revertAggregateEvaluationResultsAsync(const Model::RevertAggregateEvaluationResultsRequest& request, const RevertAggregateEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevertAggregateEvaluationResultsOutcomeCallable revertAggregateEvaluationResultsCallable(const Model::RevertAggregateEvaluationResultsRequest& request) const;
			RevertEvaluationResultsOutcome revertEvaluationResults(const Model::RevertEvaluationResultsRequest &request)const;
			void revertEvaluationResultsAsync(const Model::RevertEvaluationResultsRequest& request, const RevertEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevertEvaluationResultsOutcomeCallable revertEvaluationResultsCallable(const Model::RevertEvaluationResultsRequest& request) const;
			StartAggregateConfigRuleEvaluationOutcome startAggregateConfigRuleEvaluation(const Model::StartAggregateConfigRuleEvaluationRequest &request)const;
			void startAggregateConfigRuleEvaluationAsync(const Model::StartAggregateConfigRuleEvaluationRequest& request, const StartAggregateConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartAggregateConfigRuleEvaluationOutcomeCallable startAggregateConfigRuleEvaluationCallable(const Model::StartAggregateConfigRuleEvaluationRequest& request) const;
			StartAggregateRemediationOutcome startAggregateRemediation(const Model::StartAggregateRemediationRequest &request)const;
			void startAggregateRemediationAsync(const Model::StartAggregateRemediationRequest& request, const StartAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartAggregateRemediationOutcomeCallable startAggregateRemediationCallable(const Model::StartAggregateRemediationRequest& request) const;
			StartRemediationOutcome startRemediation(const Model::StartRemediationRequest &request)const;
			void startRemediationAsync(const Model::StartRemediationRequest& request, const StartRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRemediationOutcomeCallable startRemediationCallable(const Model::StartRemediationRequest& request) const;
			UpdateAggregateCompliancePackOutcome updateAggregateCompliancePack(const Model::UpdateAggregateCompliancePackRequest &request)const;
			void updateAggregateCompliancePackAsync(const Model::UpdateAggregateCompliancePackRequest& request, const UpdateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAggregateCompliancePackOutcomeCallable updateAggregateCompliancePackCallable(const Model::UpdateAggregateCompliancePackRequest& request) const;
			UpdateAggregateConfigRuleOutcome updateAggregateConfigRule(const Model::UpdateAggregateConfigRuleRequest &request)const;
			void updateAggregateConfigRuleAsync(const Model::UpdateAggregateConfigRuleRequest& request, const UpdateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAggregateConfigRuleOutcomeCallable updateAggregateConfigRuleCallable(const Model::UpdateAggregateConfigRuleRequest& request) const;
			UpdateAggregateRemediationOutcome updateAggregateRemediation(const Model::UpdateAggregateRemediationRequest &request)const;
			void updateAggregateRemediationAsync(const Model::UpdateAggregateRemediationRequest& request, const UpdateAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAggregateRemediationOutcomeCallable updateAggregateRemediationCallable(const Model::UpdateAggregateRemediationRequest& request) const;
			UpdateAggregatorOutcome updateAggregator(const Model::UpdateAggregatorRequest &request)const;
			void updateAggregatorAsync(const Model::UpdateAggregatorRequest& request, const UpdateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAggregatorOutcomeCallable updateAggregatorCallable(const Model::UpdateAggregatorRequest& request) const;
			UpdateCompliancePackOutcome updateCompliancePack(const Model::UpdateCompliancePackRequest &request)const;
			void updateCompliancePackAsync(const Model::UpdateCompliancePackRequest& request, const UpdateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCompliancePackOutcomeCallable updateCompliancePackCallable(const Model::UpdateCompliancePackRequest& request) const;
			UpdateConfigRuleOutcome updateConfigRule(const Model::UpdateConfigRuleRequest &request)const;
			void updateConfigRuleAsync(const Model::UpdateConfigRuleRequest& request, const UpdateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigRuleOutcomeCallable updateConfigRuleCallable(const Model::UpdateConfigRuleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CONFIG_CONFIGCLIENT_H_
