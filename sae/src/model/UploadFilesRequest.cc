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

#include <alibabacloud/sae/model/UploadFilesRequest.h>

using AlibabaCloud::Sae::Model::UploadFilesRequest;

UploadFilesRequest::UploadFilesRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/uploadFiles");
	setMethod(HttpRequest::Method::Post);
}

UploadFilesRequest::~UploadFilesRequest()
{}

std::string UploadFilesRequest::getInstanceId()const
{
	return instanceId_;
}

void UploadFilesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UploadFilesRequest::getCloudUrl()const
{
	return cloudUrl_;
}

void UploadFilesRequest::setCloudUrl(const std::string& cloudUrl)
{
	cloudUrl_ = cloudUrl;
	setParameter("CloudUrl", cloudUrl);
}

std::string UploadFilesRequest::getLocalpath()const
{
	return localpath_;
}

void UploadFilesRequest::setLocalpath(const std::string& localpath)
{
	localpath_ = localpath;
	setParameter("Localpath", localpath);
}

std::string UploadFilesRequest::getAppId()const
{
	return appId_;
}

void UploadFilesRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

