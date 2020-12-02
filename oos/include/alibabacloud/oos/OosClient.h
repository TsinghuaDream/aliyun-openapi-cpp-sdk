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

#ifndef ALIBABACLOUD_OOS_OOSCLIENT_H_
#define ALIBABACLOUD_OOS_OOSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OosExport.h"
#include "model/CancelExecutionRequest.h"
#include "model/CancelExecutionResult.h"
#include "model/CreateParameterRequest.h"
#include "model/CreateParameterResult.h"
#include "model/CreateSecretParameterRequest.h"
#include "model/CreateSecretParameterResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/DeleteExecutionsRequest.h"
#include "model/DeleteExecutionsResult.h"
#include "model/DeleteParameterRequest.h"
#include "model/DeleteParameterResult.h"
#include "model/DeleteSecretParameterRequest.h"
#include "model/DeleteSecretParameterResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteTemplatesRequest.h"
#include "model/DeleteTemplatesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GenerateExecutionPolicyRequest.h"
#include "model/GenerateExecutionPolicyResult.h"
#include "model/GetExecutionTemplateRequest.h"
#include "model/GetExecutionTemplateResult.h"
#include "model/GetInventorySchemaRequest.h"
#include "model/GetInventorySchemaResult.h"
#include "model/GetParameterRequest.h"
#include "model/GetParameterResult.h"
#include "model/GetParametersRequest.h"
#include "model/GetParametersResult.h"
#include "model/GetParametersByPathRequest.h"
#include "model/GetParametersByPathResult.h"
#include "model/GetSecretParameterRequest.h"
#include "model/GetSecretParameterResult.h"
#include "model/GetSecretParametersRequest.h"
#include "model/GetSecretParametersResult.h"
#include "model/GetSecretParametersByPathRequest.h"
#include "model/GetSecretParametersByPathResult.h"
#include "model/GetServiceSettingsRequest.h"
#include "model/GetServiceSettingsResult.h"
#include "model/GetTemplateRequest.h"
#include "model/GetTemplateResult.h"
#include "model/ListActionsRequest.h"
#include "model/ListActionsResult.h"
#include "model/ListExecutionLogsRequest.h"
#include "model/ListExecutionLogsResult.h"
#include "model/ListExecutionRiskyTasksRequest.h"
#include "model/ListExecutionRiskyTasksResult.h"
#include "model/ListExecutionsRequest.h"
#include "model/ListExecutionsResult.h"
#include "model/ListInventoryEntriesRequest.h"
#include "model/ListInventoryEntriesResult.h"
#include "model/ListParameterVersionsRequest.h"
#include "model/ListParameterVersionsResult.h"
#include "model/ListParametersRequest.h"
#include "model/ListParametersResult.h"
#include "model/ListResourceExecutionStatusRequest.h"
#include "model/ListResourceExecutionStatusResult.h"
#include "model/ListSecretParameterVersionsRequest.h"
#include "model/ListSecretParameterVersionsResult.h"
#include "model/ListSecretParametersRequest.h"
#include "model/ListSecretParametersResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListTaskExecutionsRequest.h"
#include "model/ListTaskExecutionsResult.h"
#include "model/ListTemplateVersionsRequest.h"
#include "model/ListTemplateVersionsResult.h"
#include "model/ListTemplatesRequest.h"
#include "model/ListTemplatesResult.h"
#include "model/NotifyExecutionRequest.h"
#include "model/NotifyExecutionResult.h"
#include "model/SearchInventoryRequest.h"
#include "model/SearchInventoryResult.h"
#include "model/SetServiceSettingsRequest.h"
#include "model/SetServiceSettingsResult.h"
#include "model/StartExecutionRequest.h"
#include "model/StartExecutionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TriggerExecutionRequest.h"
#include "model/TriggerExecutionResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateExecutionRequest.h"
#include "model/UpdateExecutionResult.h"
#include "model/UpdateInstanceInformationRequest.h"
#include "model/UpdateInstanceInformationResult.h"
#include "model/UpdateParameterRequest.h"
#include "model/UpdateParameterResult.h"
#include "model/UpdateSecretParameterRequest.h"
#include "model/UpdateSecretParameterResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/ValidateTemplateContentRequest.h"
#include "model/ValidateTemplateContentResult.h"


namespace AlibabaCloud
{
	namespace Oos
	{
		class ALIBABACLOUD_OOS_EXPORT OosClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelExecutionResult> CancelExecutionOutcome;
			typedef std::future<CancelExecutionOutcome> CancelExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CancelExecutionRequest&, const CancelExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelExecutionAsyncHandler;
			typedef Outcome<Error, Model::CreateParameterResult> CreateParameterOutcome;
			typedef std::future<CreateParameterOutcome> CreateParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateParameterRequest&, const CreateParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretParameterResult> CreateSecretParameterOutcome;
			typedef std::future<CreateSecretParameterOutcome> CreateSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateSecretParameterRequest&, const CreateSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteExecutionsResult> DeleteExecutionsOutcome;
			typedef std::future<DeleteExecutionsOutcome> DeleteExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteExecutionsRequest&, const DeleteExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExecutionsAsyncHandler;
			typedef Outcome<Error, Model::DeleteParameterResult> DeleteParameterOutcome;
			typedef std::future<DeleteParameterOutcome> DeleteParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteParameterRequest&, const DeleteParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretParameterResult> DeleteSecretParameterOutcome;
			typedef std::future<DeleteSecretParameterOutcome> DeleteSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteSecretParameterRequest&, const DeleteSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplatesResult> DeleteTemplatesOutcome;
			typedef std::future<DeleteTemplatesOutcome> DeleteTemplatesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteTemplatesRequest&, const DeleteTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GenerateExecutionPolicyResult> GenerateExecutionPolicyOutcome;
			typedef std::future<GenerateExecutionPolicyOutcome> GenerateExecutionPolicyOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GenerateExecutionPolicyRequest&, const GenerateExecutionPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateExecutionPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetExecutionTemplateResult> GetExecutionTemplateOutcome;
			typedef std::future<GetExecutionTemplateOutcome> GetExecutionTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetExecutionTemplateRequest&, const GetExecutionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExecutionTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetInventorySchemaResult> GetInventorySchemaOutcome;
			typedef std::future<GetInventorySchemaOutcome> GetInventorySchemaOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetInventorySchemaRequest&, const GetInventorySchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInventorySchemaAsyncHandler;
			typedef Outcome<Error, Model::GetParameterResult> GetParameterOutcome;
			typedef std::future<GetParameterOutcome> GetParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParameterRequest&, const GetParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParameterAsyncHandler;
			typedef Outcome<Error, Model::GetParametersResult> GetParametersOutcome;
			typedef std::future<GetParametersOutcome> GetParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParametersRequest&, const GetParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersAsyncHandler;
			typedef Outcome<Error, Model::GetParametersByPathResult> GetParametersByPathOutcome;
			typedef std::future<GetParametersByPathOutcome> GetParametersByPathOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParametersByPathRequest&, const GetParametersByPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersByPathAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParameterResult> GetSecretParameterOutcome;
			typedef std::future<GetSecretParameterOutcome> GetSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParameterRequest&, const GetSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParametersResult> GetSecretParametersOutcome;
			typedef std::future<GetSecretParametersOutcome> GetSecretParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParametersRequest&, const GetSecretParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParametersAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParametersByPathResult> GetSecretParametersByPathOutcome;
			typedef std::future<GetSecretParametersByPathOutcome> GetSecretParametersByPathOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParametersByPathRequest&, const GetSecretParametersByPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParametersByPathAsyncHandler;
			typedef Outcome<Error, Model::GetServiceSettingsResult> GetServiceSettingsOutcome;
			typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetServiceSettingsRequest&, const GetServiceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceSettingsAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateResult> GetTemplateOutcome;
			typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetTemplateRequest&, const GetTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListActionsResult> ListActionsOutcome;
			typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListActionsRequest&, const ListActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActionsAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionLogsResult> ListExecutionLogsOutcome;
			typedef std::future<ListExecutionLogsOutcome> ListExecutionLogsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionLogsRequest&, const ListExecutionLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionLogsAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionRiskyTasksResult> ListExecutionRiskyTasksOutcome;
			typedef std::future<ListExecutionRiskyTasksOutcome> ListExecutionRiskyTasksOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionRiskyTasksRequest&, const ListExecutionRiskyTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionRiskyTasksAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionsResult> ListExecutionsOutcome;
			typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionsRequest&, const ListExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListInventoryEntriesResult> ListInventoryEntriesOutcome;
			typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListInventoryEntriesRequest&, const ListInventoryEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInventoryEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListParameterVersionsResult> ListParameterVersionsOutcome;
			typedef std::future<ListParameterVersionsOutcome> ListParameterVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListParameterVersionsRequest&, const ListParameterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListParameterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListParametersResult> ListParametersOutcome;
			typedef std::future<ListParametersOutcome> ListParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListParametersRequest&, const ListParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListParametersAsyncHandler;
			typedef Outcome<Error, Model::ListResourceExecutionStatusResult> ListResourceExecutionStatusOutcome;
			typedef std::future<ListResourceExecutionStatusOutcome> ListResourceExecutionStatusOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListResourceExecutionStatusRequest&, const ListResourceExecutionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceExecutionStatusAsyncHandler;
			typedef Outcome<Error, Model::ListSecretParameterVersionsResult> ListSecretParameterVersionsOutcome;
			typedef std::future<ListSecretParameterVersionsOutcome> ListSecretParameterVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListSecretParameterVersionsRequest&, const ListSecretParameterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretParameterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretParametersResult> ListSecretParametersOutcome;
			typedef std::future<ListSecretParametersOutcome> ListSecretParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListSecretParametersRequest&, const ListSecretParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretParametersAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListTaskExecutionsResult> ListTaskExecutionsOutcome;
			typedef std::future<ListTaskExecutionsOutcome> ListTaskExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTaskExecutionsRequest&, const ListTaskExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListTemplateVersionsResult> ListTemplateVersionsOutcome;
			typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTemplateVersionsRequest&, const ListTemplateVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTemplateVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListTemplatesResult> ListTemplatesOutcome;
			typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTemplatesRequest&, const ListTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTemplatesAsyncHandler;
			typedef Outcome<Error, Model::NotifyExecutionResult> NotifyExecutionOutcome;
			typedef std::future<NotifyExecutionOutcome> NotifyExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::NotifyExecutionRequest&, const NotifyExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyExecutionAsyncHandler;
			typedef Outcome<Error, Model::SearchInventoryResult> SearchInventoryOutcome;
			typedef std::future<SearchInventoryOutcome> SearchInventoryOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::SearchInventoryRequest&, const SearchInventoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchInventoryAsyncHandler;
			typedef Outcome<Error, Model::SetServiceSettingsResult> SetServiceSettingsOutcome;
			typedef std::future<SetServiceSettingsOutcome> SetServiceSettingsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::SetServiceSettingsRequest&, const SetServiceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetServiceSettingsAsyncHandler;
			typedef Outcome<Error, Model::StartExecutionResult> StartExecutionOutcome;
			typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::StartExecutionRequest&, const StartExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartExecutionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TriggerExecutionResult> TriggerExecutionOutcome;
			typedef std::future<TriggerExecutionOutcome> TriggerExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::TriggerExecutionRequest&, const TriggerExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerExecutionAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateExecutionResult> UpdateExecutionOutcome;
			typedef std::future<UpdateExecutionOutcome> UpdateExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateExecutionRequest&, const UpdateExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExecutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceInformationResult> UpdateInstanceInformationOutcome;
			typedef std::future<UpdateInstanceInformationOutcome> UpdateInstanceInformationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateInstanceInformationRequest&, const UpdateInstanceInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceInformationAsyncHandler;
			typedef Outcome<Error, Model::UpdateParameterResult> UpdateParameterOutcome;
			typedef std::future<UpdateParameterOutcome> UpdateParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateParameterRequest&, const UpdateParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateParameterAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretParameterResult> UpdateSecretParameterOutcome;
			typedef std::future<UpdateSecretParameterOutcome> UpdateSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateSecretParameterRequest&, const UpdateSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::ValidateTemplateContentResult> ValidateTemplateContentOutcome;
			typedef std::future<ValidateTemplateContentOutcome> ValidateTemplateContentOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ValidateTemplateContentRequest&, const ValidateTemplateContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateTemplateContentAsyncHandler;

			OosClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OosClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OosClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OosClient();
			CancelExecutionOutcome cancelExecution(const Model::CancelExecutionRequest &request)const;
			void cancelExecutionAsync(const Model::CancelExecutionRequest& request, const CancelExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelExecutionOutcomeCallable cancelExecutionCallable(const Model::CancelExecutionRequest& request) const;
			CreateParameterOutcome createParameter(const Model::CreateParameterRequest &request)const;
			void createParameterAsync(const Model::CreateParameterRequest& request, const CreateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParameterOutcomeCallable createParameterCallable(const Model::CreateParameterRequest& request) const;
			CreateSecretParameterOutcome createSecretParameter(const Model::CreateSecretParameterRequest &request)const;
			void createSecretParameterAsync(const Model::CreateSecretParameterRequest& request, const CreateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretParameterOutcomeCallable createSecretParameterCallable(const Model::CreateSecretParameterRequest& request) const;
			CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
			void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
			DeleteExecutionsOutcome deleteExecutions(const Model::DeleteExecutionsRequest &request)const;
			void deleteExecutionsAsync(const Model::DeleteExecutionsRequest& request, const DeleteExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExecutionsOutcomeCallable deleteExecutionsCallable(const Model::DeleteExecutionsRequest& request) const;
			DeleteParameterOutcome deleteParameter(const Model::DeleteParameterRequest &request)const;
			void deleteParameterAsync(const Model::DeleteParameterRequest& request, const DeleteParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParameterOutcomeCallable deleteParameterCallable(const Model::DeleteParameterRequest& request) const;
			DeleteSecretParameterOutcome deleteSecretParameter(const Model::DeleteSecretParameterRequest &request)const;
			void deleteSecretParameterAsync(const Model::DeleteSecretParameterRequest& request, const DeleteSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretParameterOutcomeCallable deleteSecretParameterCallable(const Model::DeleteSecretParameterRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteTemplatesOutcome deleteTemplates(const Model::DeleteTemplatesRequest &request)const;
			void deleteTemplatesAsync(const Model::DeleteTemplatesRequest& request, const DeleteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplatesOutcomeCallable deleteTemplatesCallable(const Model::DeleteTemplatesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GenerateExecutionPolicyOutcome generateExecutionPolicy(const Model::GenerateExecutionPolicyRequest &request)const;
			void generateExecutionPolicyAsync(const Model::GenerateExecutionPolicyRequest& request, const GenerateExecutionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateExecutionPolicyOutcomeCallable generateExecutionPolicyCallable(const Model::GenerateExecutionPolicyRequest& request) const;
			GetExecutionTemplateOutcome getExecutionTemplate(const Model::GetExecutionTemplateRequest &request)const;
			void getExecutionTemplateAsync(const Model::GetExecutionTemplateRequest& request, const GetExecutionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExecutionTemplateOutcomeCallable getExecutionTemplateCallable(const Model::GetExecutionTemplateRequest& request) const;
			GetInventorySchemaOutcome getInventorySchema(const Model::GetInventorySchemaRequest &request)const;
			void getInventorySchemaAsync(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInventorySchemaOutcomeCallable getInventorySchemaCallable(const Model::GetInventorySchemaRequest& request) const;
			GetParameterOutcome getParameter(const Model::GetParameterRequest &request)const;
			void getParameterAsync(const Model::GetParameterRequest& request, const GetParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParameterOutcomeCallable getParameterCallable(const Model::GetParameterRequest& request) const;
			GetParametersOutcome getParameters(const Model::GetParametersRequest &request)const;
			void getParametersAsync(const Model::GetParametersRequest& request, const GetParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersOutcomeCallable getParametersCallable(const Model::GetParametersRequest& request) const;
			GetParametersByPathOutcome getParametersByPath(const Model::GetParametersByPathRequest &request)const;
			void getParametersByPathAsync(const Model::GetParametersByPathRequest& request, const GetParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersByPathOutcomeCallable getParametersByPathCallable(const Model::GetParametersByPathRequest& request) const;
			GetSecretParameterOutcome getSecretParameter(const Model::GetSecretParameterRequest &request)const;
			void getSecretParameterAsync(const Model::GetSecretParameterRequest& request, const GetSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParameterOutcomeCallable getSecretParameterCallable(const Model::GetSecretParameterRequest& request) const;
			GetSecretParametersOutcome getSecretParameters(const Model::GetSecretParametersRequest &request)const;
			void getSecretParametersAsync(const Model::GetSecretParametersRequest& request, const GetSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParametersOutcomeCallable getSecretParametersCallable(const Model::GetSecretParametersRequest& request) const;
			GetSecretParametersByPathOutcome getSecretParametersByPath(const Model::GetSecretParametersByPathRequest &request)const;
			void getSecretParametersByPathAsync(const Model::GetSecretParametersByPathRequest& request, const GetSecretParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParametersByPathOutcomeCallable getSecretParametersByPathCallable(const Model::GetSecretParametersByPathRequest& request) const;
			GetServiceSettingsOutcome getServiceSettings(const Model::GetServiceSettingsRequest &request)const;
			void getServiceSettingsAsync(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceSettingsOutcomeCallable getServiceSettingsCallable(const Model::GetServiceSettingsRequest& request) const;
			GetTemplateOutcome getTemplate(const Model::GetTemplateRequest &request)const;
			void getTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateOutcomeCallable getTemplateCallable(const Model::GetTemplateRequest& request) const;
			ListActionsOutcome listActions(const Model::ListActionsRequest &request)const;
			void listActionsAsync(const Model::ListActionsRequest& request, const ListActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActionsOutcomeCallable listActionsCallable(const Model::ListActionsRequest& request) const;
			ListExecutionLogsOutcome listExecutionLogs(const Model::ListExecutionLogsRequest &request)const;
			void listExecutionLogsAsync(const Model::ListExecutionLogsRequest& request, const ListExecutionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionLogsOutcomeCallable listExecutionLogsCallable(const Model::ListExecutionLogsRequest& request) const;
			ListExecutionRiskyTasksOutcome listExecutionRiskyTasks(const Model::ListExecutionRiskyTasksRequest &request)const;
			void listExecutionRiskyTasksAsync(const Model::ListExecutionRiskyTasksRequest& request, const ListExecutionRiskyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionRiskyTasksOutcomeCallable listExecutionRiskyTasksCallable(const Model::ListExecutionRiskyTasksRequest& request) const;
			ListExecutionsOutcome listExecutions(const Model::ListExecutionsRequest &request)const;
			void listExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionsOutcomeCallable listExecutionsCallable(const Model::ListExecutionsRequest& request) const;
			ListInventoryEntriesOutcome listInventoryEntries(const Model::ListInventoryEntriesRequest &request)const;
			void listInventoryEntriesAsync(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInventoryEntriesOutcomeCallable listInventoryEntriesCallable(const Model::ListInventoryEntriesRequest& request) const;
			ListParameterVersionsOutcome listParameterVersions(const Model::ListParameterVersionsRequest &request)const;
			void listParameterVersionsAsync(const Model::ListParameterVersionsRequest& request, const ListParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListParameterVersionsOutcomeCallable listParameterVersionsCallable(const Model::ListParameterVersionsRequest& request) const;
			ListParametersOutcome listParameters(const Model::ListParametersRequest &request)const;
			void listParametersAsync(const Model::ListParametersRequest& request, const ListParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListParametersOutcomeCallable listParametersCallable(const Model::ListParametersRequest& request) const;
			ListResourceExecutionStatusOutcome listResourceExecutionStatus(const Model::ListResourceExecutionStatusRequest &request)const;
			void listResourceExecutionStatusAsync(const Model::ListResourceExecutionStatusRequest& request, const ListResourceExecutionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceExecutionStatusOutcomeCallable listResourceExecutionStatusCallable(const Model::ListResourceExecutionStatusRequest& request) const;
			ListSecretParameterVersionsOutcome listSecretParameterVersions(const Model::ListSecretParameterVersionsRequest &request)const;
			void listSecretParameterVersionsAsync(const Model::ListSecretParameterVersionsRequest& request, const ListSecretParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretParameterVersionsOutcomeCallable listSecretParameterVersionsCallable(const Model::ListSecretParameterVersionsRequest& request) const;
			ListSecretParametersOutcome listSecretParameters(const Model::ListSecretParametersRequest &request)const;
			void listSecretParametersAsync(const Model::ListSecretParametersRequest& request, const ListSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretParametersOutcomeCallable listSecretParametersCallable(const Model::ListSecretParametersRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListTaskExecutionsOutcome listTaskExecutions(const Model::ListTaskExecutionsRequest &request)const;
			void listTaskExecutionsAsync(const Model::ListTaskExecutionsRequest& request, const ListTaskExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskExecutionsOutcomeCallable listTaskExecutionsCallable(const Model::ListTaskExecutionsRequest& request) const;
			ListTemplateVersionsOutcome listTemplateVersions(const Model::ListTemplateVersionsRequest &request)const;
			void listTemplateVersionsAsync(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTemplateVersionsOutcomeCallable listTemplateVersionsCallable(const Model::ListTemplateVersionsRequest& request) const;
			ListTemplatesOutcome listTemplates(const Model::ListTemplatesRequest &request)const;
			void listTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTemplatesOutcomeCallable listTemplatesCallable(const Model::ListTemplatesRequest& request) const;
			NotifyExecutionOutcome notifyExecution(const Model::NotifyExecutionRequest &request)const;
			void notifyExecutionAsync(const Model::NotifyExecutionRequest& request, const NotifyExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyExecutionOutcomeCallable notifyExecutionCallable(const Model::NotifyExecutionRequest& request) const;
			SearchInventoryOutcome searchInventory(const Model::SearchInventoryRequest &request)const;
			void searchInventoryAsync(const Model::SearchInventoryRequest& request, const SearchInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchInventoryOutcomeCallable searchInventoryCallable(const Model::SearchInventoryRequest& request) const;
			SetServiceSettingsOutcome setServiceSettings(const Model::SetServiceSettingsRequest &request)const;
			void setServiceSettingsAsync(const Model::SetServiceSettingsRequest& request, const SetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetServiceSettingsOutcomeCallable setServiceSettingsCallable(const Model::SetServiceSettingsRequest& request) const;
			StartExecutionOutcome startExecution(const Model::StartExecutionRequest &request)const;
			void startExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartExecutionOutcomeCallable startExecutionCallable(const Model::StartExecutionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TriggerExecutionOutcome triggerExecution(const Model::TriggerExecutionRequest &request)const;
			void triggerExecutionAsync(const Model::TriggerExecutionRequest& request, const TriggerExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerExecutionOutcomeCallable triggerExecutionCallable(const Model::TriggerExecutionRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateExecutionOutcome updateExecution(const Model::UpdateExecutionRequest &request)const;
			void updateExecutionAsync(const Model::UpdateExecutionRequest& request, const UpdateExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExecutionOutcomeCallable updateExecutionCallable(const Model::UpdateExecutionRequest& request) const;
			UpdateInstanceInformationOutcome updateInstanceInformation(const Model::UpdateInstanceInformationRequest &request)const;
			void updateInstanceInformationAsync(const Model::UpdateInstanceInformationRequest& request, const UpdateInstanceInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceInformationOutcomeCallable updateInstanceInformationCallable(const Model::UpdateInstanceInformationRequest& request) const;
			UpdateParameterOutcome updateParameter(const Model::UpdateParameterRequest &request)const;
			void updateParameterAsync(const Model::UpdateParameterRequest& request, const UpdateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateParameterOutcomeCallable updateParameterCallable(const Model::UpdateParameterRequest& request) const;
			UpdateSecretParameterOutcome updateSecretParameter(const Model::UpdateSecretParameterRequest &request)const;
			void updateSecretParameterAsync(const Model::UpdateSecretParameterRequest& request, const UpdateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretParameterOutcomeCallable updateSecretParameterCallable(const Model::UpdateSecretParameterRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			ValidateTemplateContentOutcome validateTemplateContent(const Model::ValidateTemplateContentRequest &request)const;
			void validateTemplateContentAsync(const Model::ValidateTemplateContentRequest& request, const ValidateTemplateContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTemplateContentOutcomeCallable validateTemplateContentCallable(const Model::ValidateTemplateContentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OOS_OOSCLIENT_H_
