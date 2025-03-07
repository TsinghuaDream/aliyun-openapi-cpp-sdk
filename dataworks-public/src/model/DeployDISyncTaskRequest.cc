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

#include <alibabacloud/dataworks-public/model/DeployDISyncTaskRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeployDISyncTaskRequest;

DeployDISyncTaskRequest::DeployDISyncTaskRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "DeployDISyncTask")
{
	setMethod(HttpRequest::Method::Post);
}

DeployDISyncTaskRequest::~DeployDISyncTaskRequest()
{}

std::string DeployDISyncTaskRequest::getTaskType()const
{
	return taskType_;
}

void DeployDISyncTaskRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

long DeployDISyncTaskRequest::getProjectId()const
{
	return projectId_;
}

void DeployDISyncTaskRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

long DeployDISyncTaskRequest::getFileId()const
{
	return fileId_;
}

void DeployDISyncTaskRequest::setFileId(long fileId)
{
	fileId_ = fileId;
	setParameter("FileId", std::to_string(fileId));
}

