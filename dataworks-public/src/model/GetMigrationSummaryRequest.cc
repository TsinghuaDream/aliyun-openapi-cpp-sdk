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

#include <alibabacloud/dataworks-public/model/GetMigrationSummaryRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMigrationSummaryRequest;

GetMigrationSummaryRequest::GetMigrationSummaryRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetMigrationSummary")
{
	setMethod(HttpRequest::Method::Post);
}

GetMigrationSummaryRequest::~GetMigrationSummaryRequest()
{}

long GetMigrationSummaryRequest::getMigrationId()const
{
	return migrationId_;
}

void GetMigrationSummaryRequest::setMigrationId(long migrationId)
{
	migrationId_ = migrationId;
	setBodyParameter("MigrationId", std::to_string(migrationId));
}

long GetMigrationSummaryRequest::getProjectId()const
{
	return projectId_;
}

void GetMigrationSummaryRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

