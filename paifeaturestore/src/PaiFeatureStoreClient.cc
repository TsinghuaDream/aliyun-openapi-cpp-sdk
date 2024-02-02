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

#include <alibabacloud/paifeaturestore/PaiFeatureStoreClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

namespace
{
	const std::string SERVICE_NAME = "PaiFeatureStore";
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::~PaiFeatureStoreClient()
{}

PaiFeatureStoreClient::ChangeProjectFeatureEntityHotIdVersionOutcome PaiFeatureStoreClient::changeProjectFeatureEntityHotIdVersion(const ChangeProjectFeatureEntityHotIdVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeProjectFeatureEntityHotIdVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeProjectFeatureEntityHotIdVersionOutcome(ChangeProjectFeatureEntityHotIdVersionResult(outcome.result()));
	else
		return ChangeProjectFeatureEntityHotIdVersionOutcome(outcome.error());
}

void PaiFeatureStoreClient::changeProjectFeatureEntityHotIdVersionAsync(const ChangeProjectFeatureEntityHotIdVersionRequest& request, const ChangeProjectFeatureEntityHotIdVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeProjectFeatureEntityHotIdVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ChangeProjectFeatureEntityHotIdVersionOutcomeCallable PaiFeatureStoreClient::changeProjectFeatureEntityHotIdVersionCallable(const ChangeProjectFeatureEntityHotIdVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeProjectFeatureEntityHotIdVersionOutcome()>>(
			[this, request]()
			{
			return this->changeProjectFeatureEntityHotIdVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CheckInstanceDatasourceOutcome PaiFeatureStoreClient::checkInstanceDatasource(const CheckInstanceDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckInstanceDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckInstanceDatasourceOutcome(CheckInstanceDatasourceResult(outcome.result()));
	else
		return CheckInstanceDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::checkInstanceDatasourceAsync(const CheckInstanceDatasourceRequest& request, const CheckInstanceDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkInstanceDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CheckInstanceDatasourceOutcomeCallable PaiFeatureStoreClient::checkInstanceDatasourceCallable(const CheckInstanceDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckInstanceDatasourceOutcome()>>(
			[this, request]()
			{
			return this->checkInstanceDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateDatasourceOutcome PaiFeatureStoreClient::createDatasource(const CreateDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasourceOutcome(CreateDatasourceResult(outcome.result()));
	else
		return CreateDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::createDatasourceAsync(const CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateDatasourceOutcomeCallable PaiFeatureStoreClient::createDatasourceCallable(const CreateDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasourceOutcome()>>(
			[this, request]()
			{
			return this->createDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateFeatureEntityOutcome PaiFeatureStoreClient::createFeatureEntity(const CreateFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFeatureEntityOutcome(CreateFeatureEntityResult(outcome.result()));
	else
		return CreateFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::createFeatureEntityAsync(const CreateFeatureEntityRequest& request, const CreateFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateFeatureEntityOutcomeCallable PaiFeatureStoreClient::createFeatureEntityCallable(const CreateFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->createFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateFeatureViewOutcome PaiFeatureStoreClient::createFeatureView(const CreateFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFeatureViewOutcome(CreateFeatureViewResult(outcome.result()));
	else
		return CreateFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::createFeatureViewAsync(const CreateFeatureViewRequest& request, const CreateFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateFeatureViewOutcomeCallable PaiFeatureStoreClient::createFeatureViewCallable(const CreateFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->createFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateInstanceOutcome PaiFeatureStoreClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void PaiFeatureStoreClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateInstanceOutcomeCallable PaiFeatureStoreClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateLabelTableOutcome PaiFeatureStoreClient::createLabelTable(const CreateLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLabelTableOutcome(CreateLabelTableResult(outcome.result()));
	else
		return CreateLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::createLabelTableAsync(const CreateLabelTableRequest& request, const CreateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateLabelTableOutcomeCallable PaiFeatureStoreClient::createLabelTableCallable(const CreateLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLabelTableOutcome()>>(
			[this, request]()
			{
			return this->createLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateModelFeatureOutcome PaiFeatureStoreClient::createModelFeature(const CreateModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateModelFeatureOutcome(CreateModelFeatureResult(outcome.result()));
	else
		return CreateModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::createModelFeatureAsync(const CreateModelFeatureRequest& request, const CreateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateModelFeatureOutcomeCallable PaiFeatureStoreClient::createModelFeatureCallable(const CreateModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->createModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateModelFeatureTrainingSetFGTableOutcome PaiFeatureStoreClient::createModelFeatureTrainingSetFGTable(const CreateModelFeatureTrainingSetFGTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateModelFeatureTrainingSetFGTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateModelFeatureTrainingSetFGTableOutcome(CreateModelFeatureTrainingSetFGTableResult(outcome.result()));
	else
		return CreateModelFeatureTrainingSetFGTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::createModelFeatureTrainingSetFGTableAsync(const CreateModelFeatureTrainingSetFGTableRequest& request, const CreateModelFeatureTrainingSetFGTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModelFeatureTrainingSetFGTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateModelFeatureTrainingSetFGTableOutcomeCallable PaiFeatureStoreClient::createModelFeatureTrainingSetFGTableCallable(const CreateModelFeatureTrainingSetFGTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelFeatureTrainingSetFGTableOutcome()>>(
			[this, request]()
			{
			return this->createModelFeatureTrainingSetFGTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateProjectOutcome PaiFeatureStoreClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateProjectOutcomeCallable PaiFeatureStoreClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateServiceIdentityRoleOutcome PaiFeatureStoreClient::createServiceIdentityRole(const CreateServiceIdentityRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceIdentityRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceIdentityRoleOutcome(CreateServiceIdentityRoleResult(outcome.result()));
	else
		return CreateServiceIdentityRoleOutcome(outcome.error());
}

void PaiFeatureStoreClient::createServiceIdentityRoleAsync(const CreateServiceIdentityRoleRequest& request, const CreateServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceIdentityRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateServiceIdentityRoleOutcomeCallable PaiFeatureStoreClient::createServiceIdentityRoleCallable(const CreateServiceIdentityRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceIdentityRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceIdentityRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteDatasourceOutcome PaiFeatureStoreClient::deleteDatasource(const DeleteDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasourceOutcome(DeleteDatasourceResult(outcome.result()));
	else
		return DeleteDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteDatasourceAsync(const DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteDatasourceOutcomeCallable PaiFeatureStoreClient::deleteDatasourceCallable(const DeleteDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteFeatureEntityOutcome PaiFeatureStoreClient::deleteFeatureEntity(const DeleteFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeatureEntityOutcome(DeleteFeatureEntityResult(outcome.result()));
	else
		return DeleteFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteFeatureEntityAsync(const DeleteFeatureEntityRequest& request, const DeleteFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteFeatureEntityOutcomeCallable PaiFeatureStoreClient::deleteFeatureEntityCallable(const DeleteFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteFeatureViewOutcome PaiFeatureStoreClient::deleteFeatureView(const DeleteFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeatureViewOutcome(DeleteFeatureViewResult(outcome.result()));
	else
		return DeleteFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteFeatureViewAsync(const DeleteFeatureViewRequest& request, const DeleteFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteFeatureViewOutcomeCallable PaiFeatureStoreClient::deleteFeatureViewCallable(const DeleteFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->deleteFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteLabelTableOutcome PaiFeatureStoreClient::deleteLabelTable(const DeleteLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelTableOutcome(DeleteLabelTableResult(outcome.result()));
	else
		return DeleteLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteLabelTableAsync(const DeleteLabelTableRequest& request, const DeleteLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteLabelTableOutcomeCallable PaiFeatureStoreClient::deleteLabelTableCallable(const DeleteLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelTableOutcome()>>(
			[this, request]()
			{
			return this->deleteLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteModelFeatureOutcome PaiFeatureStoreClient::deleteModelFeature(const DeleteModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteModelFeatureOutcome(DeleteModelFeatureResult(outcome.result()));
	else
		return DeleteModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteModelFeatureAsync(const DeleteModelFeatureRequest& request, const DeleteModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteModelFeatureOutcomeCallable PaiFeatureStoreClient::deleteModelFeatureCallable(const DeleteModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->deleteModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteProjectOutcome PaiFeatureStoreClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteProjectOutcomeCallable PaiFeatureStoreClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetFGTableOutcome PaiFeatureStoreClient::exportModelFeatureTrainingSetFGTable(const ExportModelFeatureTrainingSetFGTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportModelFeatureTrainingSetFGTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportModelFeatureTrainingSetFGTableOutcome(ExportModelFeatureTrainingSetFGTableResult(outcome.result()));
	else
		return ExportModelFeatureTrainingSetFGTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::exportModelFeatureTrainingSetFGTableAsync(const ExportModelFeatureTrainingSetFGTableRequest& request, const ExportModelFeatureTrainingSetFGTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportModelFeatureTrainingSetFGTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetFGTableOutcomeCallable PaiFeatureStoreClient::exportModelFeatureTrainingSetFGTableCallable(const ExportModelFeatureTrainingSetFGTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportModelFeatureTrainingSetFGTableOutcome()>>(
			[this, request]()
			{
			return this->exportModelFeatureTrainingSetFGTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetTableOutcome PaiFeatureStoreClient::exportModelFeatureTrainingSetTable(const ExportModelFeatureTrainingSetTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportModelFeatureTrainingSetTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportModelFeatureTrainingSetTableOutcome(ExportModelFeatureTrainingSetTableResult(outcome.result()));
	else
		return ExportModelFeatureTrainingSetTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::exportModelFeatureTrainingSetTableAsync(const ExportModelFeatureTrainingSetTableRequest& request, const ExportModelFeatureTrainingSetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportModelFeatureTrainingSetTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetTableOutcomeCallable PaiFeatureStoreClient::exportModelFeatureTrainingSetTableCallable(const ExportModelFeatureTrainingSetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportModelFeatureTrainingSetTableOutcome()>>(
			[this, request]()
			{
			return this->exportModelFeatureTrainingSetTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetDatasourceOutcome PaiFeatureStoreClient::getDatasource(const GetDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasourceOutcome(GetDatasourceResult(outcome.result()));
	else
		return GetDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::getDatasourceAsync(const GetDatasourceRequest& request, const GetDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetDatasourceOutcomeCallable PaiFeatureStoreClient::getDatasourceCallable(const GetDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasourceOutcome()>>(
			[this, request]()
			{
			return this->getDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetDatasourceTableOutcome PaiFeatureStoreClient::getDatasourceTable(const GetDatasourceTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasourceTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasourceTableOutcome(GetDatasourceTableResult(outcome.result()));
	else
		return GetDatasourceTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::getDatasourceTableAsync(const GetDatasourceTableRequest& request, const GetDatasourceTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatasourceTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetDatasourceTableOutcomeCallable PaiFeatureStoreClient::getDatasourceTableCallable(const GetDatasourceTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasourceTableOutcome()>>(
			[this, request]()
			{
			return this->getDatasourceTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetFeatureEntityOutcome PaiFeatureStoreClient::getFeatureEntity(const GetFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFeatureEntityOutcome(GetFeatureEntityResult(outcome.result()));
	else
		return GetFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::getFeatureEntityAsync(const GetFeatureEntityRequest& request, const GetFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetFeatureEntityOutcomeCallable PaiFeatureStoreClient::getFeatureEntityCallable(const GetFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->getFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetFeatureViewOutcome PaiFeatureStoreClient::getFeatureView(const GetFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFeatureViewOutcome(GetFeatureViewResult(outcome.result()));
	else
		return GetFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::getFeatureViewAsync(const GetFeatureViewRequest& request, const GetFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetFeatureViewOutcomeCallable PaiFeatureStoreClient::getFeatureViewCallable(const GetFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->getFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetInstanceOutcome PaiFeatureStoreClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void PaiFeatureStoreClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetInstanceOutcomeCallable PaiFeatureStoreClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetLabelTableOutcome PaiFeatureStoreClient::getLabelTable(const GetLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLabelTableOutcome(GetLabelTableResult(outcome.result()));
	else
		return GetLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::getLabelTableAsync(const GetLabelTableRequest& request, const GetLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetLabelTableOutcomeCallable PaiFeatureStoreClient::getLabelTableCallable(const GetLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLabelTableOutcome()>>(
			[this, request]()
			{
			return this->getLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureOutcome PaiFeatureStoreClient::getModelFeature(const GetModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureOutcome(GetModelFeatureResult(outcome.result()));
	else
		return GetModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureAsync(const GetModelFeatureRequest& request, const GetModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureOutcomeCallable PaiFeatureStoreClient::getModelFeatureCallable(const GetModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->getModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureFGFeatureOutcome PaiFeatureStoreClient::getModelFeatureFGFeature(const GetModelFeatureFGFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureFGFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureFGFeatureOutcome(GetModelFeatureFGFeatureResult(outcome.result()));
	else
		return GetModelFeatureFGFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureFGFeatureAsync(const GetModelFeatureFGFeatureRequest& request, const GetModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeatureFGFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureFGFeatureOutcomeCallable PaiFeatureStoreClient::getModelFeatureFGFeatureCallable(const GetModelFeatureFGFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureFGFeatureOutcome()>>(
			[this, request]()
			{
			return this->getModelFeatureFGFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureFGInfoOutcome PaiFeatureStoreClient::getModelFeatureFGInfo(const GetModelFeatureFGInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureFGInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureFGInfoOutcome(GetModelFeatureFGInfoResult(outcome.result()));
	else
		return GetModelFeatureFGInfoOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureFGInfoAsync(const GetModelFeatureFGInfoRequest& request, const GetModelFeatureFGInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeatureFGInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureFGInfoOutcomeCallable PaiFeatureStoreClient::getModelFeatureFGInfoCallable(const GetModelFeatureFGInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureFGInfoOutcome()>>(
			[this, request]()
			{
			return this->getModelFeatureFGInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectOutcome PaiFeatureStoreClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectOutcomeCallable PaiFeatureStoreClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectFeatureEntityOutcome PaiFeatureStoreClient::getProjectFeatureEntity(const GetProjectFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectFeatureEntityOutcome(GetProjectFeatureEntityResult(outcome.result()));
	else
		return GetProjectFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectFeatureEntityAsync(const GetProjectFeatureEntityRequest& request, const GetProjectFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectFeatureEntityOutcomeCallable PaiFeatureStoreClient::getProjectFeatureEntityCallable(const GetProjectFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->getProjectFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectFeatureEntityHotIdsOutcome PaiFeatureStoreClient::getProjectFeatureEntityHotIds(const GetProjectFeatureEntityHotIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectFeatureEntityHotIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectFeatureEntityHotIdsOutcome(GetProjectFeatureEntityHotIdsResult(outcome.result()));
	else
		return GetProjectFeatureEntityHotIdsOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectFeatureEntityHotIdsAsync(const GetProjectFeatureEntityHotIdsRequest& request, const GetProjectFeatureEntityHotIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectFeatureEntityHotIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectFeatureEntityHotIdsOutcomeCallable PaiFeatureStoreClient::getProjectFeatureEntityHotIdsCallable(const GetProjectFeatureEntityHotIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectFeatureEntityHotIdsOutcome()>>(
			[this, request]()
			{
			return this->getProjectFeatureEntityHotIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectFeatureViewOutcome PaiFeatureStoreClient::getProjectFeatureView(const GetProjectFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectFeatureViewOutcome(GetProjectFeatureViewResult(outcome.result()));
	else
		return GetProjectFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectFeatureViewAsync(const GetProjectFeatureViewRequest& request, const GetProjectFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectFeatureViewOutcomeCallable PaiFeatureStoreClient::getProjectFeatureViewCallable(const GetProjectFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->getProjectFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectModelFeatureOutcome PaiFeatureStoreClient::getProjectModelFeature(const GetProjectModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectModelFeatureOutcome(GetProjectModelFeatureResult(outcome.result()));
	else
		return GetProjectModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectModelFeatureAsync(const GetProjectModelFeatureRequest& request, const GetProjectModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectModelFeatureOutcomeCallable PaiFeatureStoreClient::getProjectModelFeatureCallable(const GetProjectModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->getProjectModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetServiceIdentityRoleOutcome PaiFeatureStoreClient::getServiceIdentityRole(const GetServiceIdentityRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceIdentityRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceIdentityRoleOutcome(GetServiceIdentityRoleResult(outcome.result()));
	else
		return GetServiceIdentityRoleOutcome(outcome.error());
}

void PaiFeatureStoreClient::getServiceIdentityRoleAsync(const GetServiceIdentityRoleRequest& request, const GetServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceIdentityRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetServiceIdentityRoleOutcomeCallable PaiFeatureStoreClient::getServiceIdentityRoleCallable(const GetServiceIdentityRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceIdentityRoleOutcome()>>(
			[this, request]()
			{
			return this->getServiceIdentityRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetTaskOutcome PaiFeatureStoreClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void PaiFeatureStoreClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetTaskOutcomeCallable PaiFeatureStoreClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListDatasourceTablesOutcome PaiFeatureStoreClient::listDatasourceTables(const ListDatasourceTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasourceTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasourceTablesOutcome(ListDatasourceTablesResult(outcome.result()));
	else
		return ListDatasourceTablesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listDatasourceTablesAsync(const ListDatasourceTablesRequest& request, const ListDatasourceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasourceTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListDatasourceTablesOutcomeCallable PaiFeatureStoreClient::listDatasourceTablesCallable(const ListDatasourceTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasourceTablesOutcome()>>(
			[this, request]()
			{
			return this->listDatasourceTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListDatasourcesOutcome PaiFeatureStoreClient::listDatasources(const ListDatasourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasourcesOutcome(ListDatasourcesResult(outcome.result()));
	else
		return ListDatasourcesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listDatasourcesAsync(const ListDatasourcesRequest& request, const ListDatasourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListDatasourcesOutcomeCallable PaiFeatureStoreClient::listDatasourcesCallable(const ListDatasourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasourcesOutcome()>>(
			[this, request]()
			{
			return this->listDatasources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureEntitiesOutcome PaiFeatureStoreClient::listFeatureEntities(const ListFeatureEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureEntitiesOutcome(ListFeatureEntitiesResult(outcome.result()));
	else
		return ListFeatureEntitiesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureEntitiesAsync(const ListFeatureEntitiesRequest& request, const ListFeatureEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureEntitiesOutcomeCallable PaiFeatureStoreClient::listFeatureEntitiesCallable(const ListFeatureEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listFeatureEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewFieldRelationshipsOutcome PaiFeatureStoreClient::listFeatureViewFieldRelationships(const ListFeatureViewFieldRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewFieldRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewFieldRelationshipsOutcome(ListFeatureViewFieldRelationshipsResult(outcome.result()));
	else
		return ListFeatureViewFieldRelationshipsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewFieldRelationshipsAsync(const ListFeatureViewFieldRelationshipsRequest& request, const ListFeatureViewFieldRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViewFieldRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewFieldRelationshipsOutcomeCallable PaiFeatureStoreClient::listFeatureViewFieldRelationshipsCallable(const ListFeatureViewFieldRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewFieldRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViewFieldRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewRelationshipsOutcome PaiFeatureStoreClient::listFeatureViewRelationships(const ListFeatureViewRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewRelationshipsOutcome(ListFeatureViewRelationshipsResult(outcome.result()));
	else
		return ListFeatureViewRelationshipsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewRelationshipsAsync(const ListFeatureViewRelationshipsRequest& request, const ListFeatureViewRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViewRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewRelationshipsOutcomeCallable PaiFeatureStoreClient::listFeatureViewRelationshipsCallable(const ListFeatureViewRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViewRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewsOutcome PaiFeatureStoreClient::listFeatureViews(const ListFeatureViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewsOutcome(ListFeatureViewsResult(outcome.result()));
	else
		return ListFeatureViewsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewsAsync(const ListFeatureViewsRequest& request, const ListFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewsOutcomeCallable PaiFeatureStoreClient::listFeatureViewsCallable(const ListFeatureViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListInstancesOutcome PaiFeatureStoreClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListInstancesOutcomeCallable PaiFeatureStoreClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListLabelTablesOutcome PaiFeatureStoreClient::listLabelTables(const ListLabelTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLabelTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLabelTablesOutcome(ListLabelTablesResult(outcome.result()));
	else
		return ListLabelTablesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listLabelTablesAsync(const ListLabelTablesRequest& request, const ListLabelTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLabelTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListLabelTablesOutcomeCallable PaiFeatureStoreClient::listLabelTablesCallable(const ListLabelTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLabelTablesOutcome()>>(
			[this, request]()
			{
			return this->listLabelTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListModelFeatureAvailableFeaturesOutcome PaiFeatureStoreClient::listModelFeatureAvailableFeatures(const ListModelFeatureAvailableFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModelFeatureAvailableFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModelFeatureAvailableFeaturesOutcome(ListModelFeatureAvailableFeaturesResult(outcome.result()));
	else
		return ListModelFeatureAvailableFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listModelFeatureAvailableFeaturesAsync(const ListModelFeatureAvailableFeaturesRequest& request, const ListModelFeatureAvailableFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModelFeatureAvailableFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListModelFeatureAvailableFeaturesOutcomeCallable PaiFeatureStoreClient::listModelFeatureAvailableFeaturesCallable(const ListModelFeatureAvailableFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelFeatureAvailableFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listModelFeatureAvailableFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListModelFeaturesOutcome PaiFeatureStoreClient::listModelFeatures(const ListModelFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModelFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModelFeaturesOutcome(ListModelFeaturesResult(outcome.result()));
	else
		return ListModelFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listModelFeaturesAsync(const ListModelFeaturesRequest& request, const ListModelFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModelFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListModelFeaturesOutcomeCallable PaiFeatureStoreClient::listModelFeaturesCallable(const ListModelFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listModelFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectFeatureViewOwnersOutcome PaiFeatureStoreClient::listProjectFeatureViewOwners(const ListProjectFeatureViewOwnersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFeatureViewOwnersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFeatureViewOwnersOutcome(ListProjectFeatureViewOwnersResult(outcome.result()));
	else
		return ListProjectFeatureViewOwnersOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectFeatureViewOwnersAsync(const ListProjectFeatureViewOwnersRequest& request, const ListProjectFeatureViewOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFeatureViewOwners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectFeatureViewOwnersOutcomeCallable PaiFeatureStoreClient::listProjectFeatureViewOwnersCallable(const ListProjectFeatureViewOwnersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFeatureViewOwnersOutcome()>>(
			[this, request]()
			{
			return this->listProjectFeatureViewOwners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectFeatureViewTagsOutcome PaiFeatureStoreClient::listProjectFeatureViewTags(const ListProjectFeatureViewTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFeatureViewTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFeatureViewTagsOutcome(ListProjectFeatureViewTagsResult(outcome.result()));
	else
		return ListProjectFeatureViewTagsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectFeatureViewTagsAsync(const ListProjectFeatureViewTagsRequest& request, const ListProjectFeatureViewTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFeatureViewTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectFeatureViewTagsOutcomeCallable PaiFeatureStoreClient::listProjectFeatureViewTagsCallable(const ListProjectFeatureViewTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFeatureViewTagsOutcome()>>(
			[this, request]()
			{
			return this->listProjectFeatureViewTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectFeatureViewsOutcome PaiFeatureStoreClient::listProjectFeatureViews(const ListProjectFeatureViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFeatureViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFeatureViewsOutcome(ListProjectFeatureViewsResult(outcome.result()));
	else
		return ListProjectFeatureViewsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectFeatureViewsAsync(const ListProjectFeatureViewsRequest& request, const ListProjectFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFeatureViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectFeatureViewsOutcomeCallable PaiFeatureStoreClient::listProjectFeatureViewsCallable(const ListProjectFeatureViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFeatureViewsOutcome()>>(
			[this, request]()
			{
			return this->listProjectFeatureViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectsOutcome PaiFeatureStoreClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectsOutcomeCallable PaiFeatureStoreClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListTaskLogsOutcome PaiFeatureStoreClient::listTaskLogs(const ListTaskLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskLogsOutcome(ListTaskLogsResult(outcome.result()));
	else
		return ListTaskLogsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listTaskLogsAsync(const ListTaskLogsRequest& request, const ListTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListTaskLogsOutcomeCallable PaiFeatureStoreClient::listTaskLogsCallable(const ListTaskLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskLogsOutcome()>>(
			[this, request]()
			{
			return this->listTaskLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListTasksOutcome PaiFeatureStoreClient::listTasks(const ListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksOutcome(ListTasksResult(outcome.result()));
	else
		return ListTasksOutcome(outcome.error());
}

void PaiFeatureStoreClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListTasksOutcomeCallable PaiFeatureStoreClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::PublishFeatureViewTableOutcome PaiFeatureStoreClient::publishFeatureViewTable(const PublishFeatureViewTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishFeatureViewTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishFeatureViewTableOutcome(PublishFeatureViewTableResult(outcome.result()));
	else
		return PublishFeatureViewTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::publishFeatureViewTableAsync(const PublishFeatureViewTableRequest& request, const PublishFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishFeatureViewTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::PublishFeatureViewTableOutcomeCallable PaiFeatureStoreClient::publishFeatureViewTableCallable(const PublishFeatureViewTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishFeatureViewTableOutcome()>>(
			[this, request]()
			{
			return this->publishFeatureViewTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateDatasourceOutcome PaiFeatureStoreClient::updateDatasource(const UpdateDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatasourceOutcome(UpdateDatasourceResult(outcome.result()));
	else
		return UpdateDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateDatasourceAsync(const UpdateDatasourceRequest& request, const UpdateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateDatasourceOutcomeCallable PaiFeatureStoreClient::updateDatasourceCallable(const UpdateDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatasourceOutcome()>>(
			[this, request]()
			{
			return this->updateDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateLabelTableOutcome PaiFeatureStoreClient::updateLabelTable(const UpdateLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLabelTableOutcome(UpdateLabelTableResult(outcome.result()));
	else
		return UpdateLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateLabelTableAsync(const UpdateLabelTableRequest& request, const UpdateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateLabelTableOutcomeCallable PaiFeatureStoreClient::updateLabelTableCallable(const UpdateLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLabelTableOutcome()>>(
			[this, request]()
			{
			return this->updateLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateModelFeatureOutcome PaiFeatureStoreClient::updateModelFeature(const UpdateModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelFeatureOutcome(UpdateModelFeatureResult(outcome.result()));
	else
		return UpdateModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateModelFeatureAsync(const UpdateModelFeatureRequest& request, const UpdateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateModelFeatureOutcomeCallable PaiFeatureStoreClient::updateModelFeatureCallable(const UpdateModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->updateModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateModelFeatureFGFeatureOutcome PaiFeatureStoreClient::updateModelFeatureFGFeature(const UpdateModelFeatureFGFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelFeatureFGFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelFeatureFGFeatureOutcome(UpdateModelFeatureFGFeatureResult(outcome.result()));
	else
		return UpdateModelFeatureFGFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateModelFeatureFGFeatureAsync(const UpdateModelFeatureFGFeatureRequest& request, const UpdateModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModelFeatureFGFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateModelFeatureFGFeatureOutcomeCallable PaiFeatureStoreClient::updateModelFeatureFGFeatureCallable(const UpdateModelFeatureFGFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelFeatureFGFeatureOutcome()>>(
			[this, request]()
			{
			return this->updateModelFeatureFGFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateModelFeatureFGInfoOutcome PaiFeatureStoreClient::updateModelFeatureFGInfo(const UpdateModelFeatureFGInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelFeatureFGInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelFeatureFGInfoOutcome(UpdateModelFeatureFGInfoResult(outcome.result()));
	else
		return UpdateModelFeatureFGInfoOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateModelFeatureFGInfoAsync(const UpdateModelFeatureFGInfoRequest& request, const UpdateModelFeatureFGInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModelFeatureFGInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateModelFeatureFGInfoOutcomeCallable PaiFeatureStoreClient::updateModelFeatureFGInfoCallable(const UpdateModelFeatureFGInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelFeatureFGInfoOutcome()>>(
			[this, request]()
			{
			return this->updateModelFeatureFGInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateProjectOutcome PaiFeatureStoreClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateProjectOutcomeCallable PaiFeatureStoreClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::WriteFeatureViewTableOutcome PaiFeatureStoreClient::writeFeatureViewTable(const WriteFeatureViewTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteFeatureViewTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteFeatureViewTableOutcome(WriteFeatureViewTableResult(outcome.result()));
	else
		return WriteFeatureViewTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::writeFeatureViewTableAsync(const WriteFeatureViewTableRequest& request, const WriteFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeFeatureViewTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::WriteFeatureViewTableOutcomeCallable PaiFeatureStoreClient::writeFeatureViewTableCallable(const WriteFeatureViewTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteFeatureViewTableOutcome()>>(
			[this, request]()
			{
			return this->writeFeatureViewTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::WriteProjectFeatureEntityHotIdsOutcome PaiFeatureStoreClient::writeProjectFeatureEntityHotIds(const WriteProjectFeatureEntityHotIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteProjectFeatureEntityHotIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteProjectFeatureEntityHotIdsOutcome(WriteProjectFeatureEntityHotIdsResult(outcome.result()));
	else
		return WriteProjectFeatureEntityHotIdsOutcome(outcome.error());
}

void PaiFeatureStoreClient::writeProjectFeatureEntityHotIdsAsync(const WriteProjectFeatureEntityHotIdsRequest& request, const WriteProjectFeatureEntityHotIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeProjectFeatureEntityHotIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::WriteProjectFeatureEntityHotIdsOutcomeCallable PaiFeatureStoreClient::writeProjectFeatureEntityHotIdsCallable(const WriteProjectFeatureEntityHotIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteProjectFeatureEntityHotIdsOutcome()>>(
			[this, request]()
			{
			return this->writeProjectFeatureEntityHotIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

