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

#include <alibabacloud/sas/model/DescribeModuleConfigRequest.h>

using AlibabaCloud::Sas::Model::DescribeModuleConfigRequest;

DescribeModuleConfigRequest::DescribeModuleConfigRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeModuleConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeModuleConfigRequest::~DescribeModuleConfigRequest()
{}

std::string DescribeModuleConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeModuleConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeModuleConfigRequest::getResourceDirectoryAccountId()const
{
	return resourceDirectoryAccountId_;
}

void DescribeModuleConfigRequest::setResourceDirectoryAccountId(const std::string& resourceDirectoryAccountId)
{
	resourceDirectoryAccountId_ = resourceDirectoryAccountId;
	setParameter("ResourceDirectoryAccountId", resourceDirectoryAccountId);
}

