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

#include <alibabacloud/nas/model/CreateLifecyclePolicyRequest.h>

using AlibabaCloud::NAS::Model::CreateLifecyclePolicyRequest;

CreateLifecyclePolicyRequest::CreateLifecyclePolicyRequest() :
	RpcServiceRequest("nas", "2017-06-26", "CreateLifecyclePolicy")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLifecyclePolicyRequest::~CreateLifecyclePolicyRequest()
{}

std::string CreateLifecyclePolicyRequest::getStorageType()const
{
	return storageType_;
}

void CreateLifecyclePolicyRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string CreateLifecyclePolicyRequest::getPath()const
{
	return path_;
}

void CreateLifecyclePolicyRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string CreateLifecyclePolicyRequest::getLifecyclePolicyName()const
{
	return lifecyclePolicyName_;
}

void CreateLifecyclePolicyRequest::setLifecyclePolicyName(const std::string& lifecyclePolicyName)
{
	lifecyclePolicyName_ = lifecyclePolicyName;
	setParameter("LifecyclePolicyName", lifecyclePolicyName);
}

std::string CreateLifecyclePolicyRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void CreateLifecyclePolicyRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

std::string CreateLifecyclePolicyRequest::getLifecycleRuleName()const
{
	return lifecycleRuleName_;
}

void CreateLifecyclePolicyRequest::setLifecycleRuleName(const std::string& lifecycleRuleName)
{
	lifecycleRuleName_ = lifecycleRuleName;
	setParameter("LifecycleRuleName", lifecycleRuleName);
}

std::vector<std::string> CreateLifecyclePolicyRequest::getPaths()const
{
	return paths_;
}

void CreateLifecyclePolicyRequest::setPaths(const std::vector<std::string>& paths)
{
	paths_ = paths;
	for(int dep1 = 0; dep1!= paths.size(); dep1++) {
		setParameter("Paths."+ std::to_string(dep1), paths.at(dep1));
	}
}

