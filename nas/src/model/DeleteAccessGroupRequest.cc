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

#include <alibabacloud/nas/model/DeleteAccessGroupRequest.h>

using AlibabaCloud::NAS::Model::DeleteAccessGroupRequest;

DeleteAccessGroupRequest::DeleteAccessGroupRequest() :
	RpcServiceRequest("nas", "2017-06-26", "DeleteAccessGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAccessGroupRequest::~DeleteAccessGroupRequest()
{}

std::string DeleteAccessGroupRequest::getFileSystemType()const
{
	return fileSystemType_;
}

void DeleteAccessGroupRequest::setFileSystemType(const std::string& fileSystemType)
{
	fileSystemType_ = fileSystemType;
	setParameter("FileSystemType", fileSystemType);
}

std::string DeleteAccessGroupRequest::getAccessGroupName()const
{
	return accessGroupName_;
}

void DeleteAccessGroupRequest::setAccessGroupName(const std::string& accessGroupName)
{
	accessGroupName_ = accessGroupName;
	setParameter("AccessGroupName", accessGroupName);
}

